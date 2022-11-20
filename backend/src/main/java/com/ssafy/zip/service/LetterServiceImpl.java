package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.LetterRequestDTO;
import com.ssafy.zip.dto.response.LetterResponseDTO;
import com.ssafy.zip.dto.response.LetterTodayResponseDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.entity.Letter;
import com.ssafy.zip.entity.LetterFromAndTo;
import com.ssafy.zip.entity.Notification;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.exception.ErrorCode;
import com.ssafy.zip.exception.ResourceNotFoundException;
import com.ssafy.zip.exception.UnauthorizedRequestException;
import com.ssafy.zip.repository.CommonCodeRepository;
import com.ssafy.zip.repository.LetterFromAndToRepository;
import com.ssafy.zip.repository.LetterRepository;
import com.ssafy.zip.repository.UserRepository;
import com.ssafy.zip.util.CommonCodeEnum;
import com.ssafy.zip.util.LetterDTOMapStruct;
import com.ssafy.zip.util.NotificationEnum;
import com.ssafy.zip.util.UserResponseDTOMapStruct;
import lombok.RequiredArgsConstructor;
import lombok.SneakyThrows;
import org.springframework.scheduling.annotation.Async;
import org.springframework.scheduling.annotation.Scheduled;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import javax.annotation.PostConstruct;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.util.*;
import java.util.stream.Collectors;
@Service
@RequiredArgsConstructor
public class LetterServiceImpl implements LetterService {
    private final LetterRepository letterRepository;
    private final LetterFromAndToRepository letterFromAndToRepository;
    private final UserRepository userRepository;
    private final PointService pointService;
    private final NotificationServiceImpl notificationService;
    @PostConstruct
    private void initial(){
        scheduleLetterFromAndTo();
    }
    @Transactional
    @Override
    public void readLetter(UserDTO userDTO, Long letterId) {
        Optional<Letter> letterOpt = letterRepository.findById(letterId);
        if(letterOpt.isPresent()){
            Letter letter = letterOpt.get();
            if(!letter.getTo().getId().equals(userDTO.getId())) throw new UnauthorizedRequestException("요청 권한이 없습니다.", ErrorCode.FORBIDDEN);
            else letter.setIsRead(true);
        }else throw new ResourceNotFoundException("요청한 편지가 존재하지 않습니다.", ErrorCode.NOT_FOUND);
    }

    @Override
    public List<LetterResponseDTO> listLetters(UserDTO userDTO) {
        return letterRepository.findByFrom_IdOrTo_Id(userDTO.getId(), userDTO.getId())
                .stream().map(LetterDTOMapStruct.INSTANCE::mapToLetterResponseDTO)
                .sorted((o1, o2) -> o2.reg().compareTo(o1.reg()))
                .collect(Collectors.toList());
    }

    @Override
    public LetterResponseDTO getLetter(UserDTO userDTO, Long letterId) {

        Optional<Letter> result = letterRepository.findById(letterId);
        if(result.isPresent()){
            Letter o = result.get();
            if(o.getFrom().getId().equals(userDTO.getId())||o.getTo().getId().equals(userDTO.getId()))
                return LetterDTOMapStruct.INSTANCE.mapToLetterResponseDTO(o);
            else throw new UnauthorizedRequestException("요청한 편지를 볼 수 없습니다.", ErrorCode.FORBIDDEN);
        }else throw new ResourceNotFoundException("요청한 편지가 없습니다.", ErrorCode.NOT_FOUND);
    }

    @SneakyThrows
    @Transactional
    @Override
    public void sendLetter(UserDTO userDTO, LetterRequestDTO letterRequestDTO) {
        User toUser = userRepository.getReferenceById(letterRequestDTO.toUserId());
        Letter letter = letterRepository.save(Letter.builder().content(letterRequestDTO.content())
                .reg(LocalDateTime.now()).isRead(false).from(userRepository.getReferenceById(userDTO.getId()))
                .to(toUser).stationery(letterRequestDTO.stationery())
                .build()
        );
        notificationService.sendNotification(new Notification(null,null, String.format(NotificationEnum.TodayLetterSentTome.getMessage(), userDTO.getNickname()),String.format(NotificationEnum.TodayLetterSentTome.getLink(), letter.getId()), userDTO.getProfileImg().getImage(),false,LocalDateTime.now()),
                List.of(letterRequestDTO.toUserId()));
        pointService.updatePoint(userDTO, CommonCodeEnum.LetterSentForEach.getCode());
        List<Letter> list = letterRepository.findByFrom_FamilyIdAndRegAfter(userDTO.getFamilyId(), LocalDateTime.now().toLocalDate().atTime(0, 0));
        if(list.get(0).getFrom().getFamily().getMemberNum()==list.size()){
            pointService.updatePoint(userDTO, CommonCodeEnum.LetterSentForFamily.getCode());
            notificationService.sendNotification(new Notification(null,null,String.format(NotificationEnum.TodayLetterMissionAccomplished.getMessage(), userDTO.getNickname()),NotificationEnum.TodayLetterMissionAccomplished.getLink(), userDTO.getProfileImg().getImage(),false,LocalDateTime.now()),
                    toUser.getFamily().getUsers().stream().map(User::getId).collect(Collectors.toList()) );
        }

    }

    @Override
    public LetterTodayResponseDTO getTodayLetter(UserDTO userDTO) {
        Optional<LetterFromAndTo> toUserId = letterFromAndToRepository.findById(userDTO.getId());
        if(toUserId.isPresent()){
            Optional<User> userTmp = userRepository.findById(toUserId.get().getTo());
            if(userTmp.isPresent()){
                UserResponseDTO user = UserResponseDTOMapStruct.INSTANCE.mapToUserResponseDTO(userTmp.get());

                List<Letter> list = letterRepository.findByFrom_FamilyIdAndRegAfter(userDTO.getFamilyId(), LocalDate.now().atTime(0, 0, 0));
                Boolean isSent = list.stream().anyMatch(l->l.getFrom().getId().equals(userDTO.getId()));
                return  new LetterTodayResponseDTO(user,list.size(),isSent);
            }
        }else throw new ResourceNotFoundException("편지를 보낼 수 있는 가족이 없습니다.", ErrorCode.NOT_FOUND);
        return null;
    }

    @Override
    public void resetLetterList() {
        scheduleLetterFromAndTo();
    }

    @Scheduled(cron = "1 0 0 * * *",zone = "Asia/Seoul")
    public void onSchedule(){
        scheduleLetterFromAndTo();
    }
    @Async
    @Transactional
    public void scheduleLetterFromAndTo(){
        System.out.println("Schecule Letter");
        letterFromAndToRepository.deleteAll();
        List<User> users = userRepository.findAll();
        Map<Long, List<User>> map = new HashMap<>();
        users.forEach(o->{
            if (o.getFamily() != null) {
                List<User> list = map.getOrDefault(o.getFamily().getId(), new ArrayList<>());
                list.add(o);
                map.put(o.getFamily().getId(), list);
            }
        });
        List<LetterFromAndTo> saveList = new ArrayList<>();
        for(Long famId : map.keySet()){
            List<User> list = map.get(famId);
            if(list.size()<=1) continue;
            for(User user : list){
                Long num;
                do{
                    num = list.get((int)(Math.random()* list.size())).getId();
                }while (num.equals(user.getId()));
                saveList.add(new LetterFromAndTo(user.getId(),num));
            }
        }
        letterFromAndToRepository.saveAll(saveList);
    }
}
