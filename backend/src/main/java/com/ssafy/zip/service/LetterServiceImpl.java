package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.LetterRequestDTO;
import com.ssafy.zip.dto.response.LetterResponseDTO;
import com.ssafy.zip.dto.response.LetterTodayResponseDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.entity.Letter;
import com.ssafy.zip.entity.LetterFromAndTo;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.repository.CommonCodeRepository;
import com.ssafy.zip.repository.LetterFromAndToRepository;
import com.ssafy.zip.repository.LetterRepository;
import com.ssafy.zip.repository.UserRepository;
import com.ssafy.zip.util.LetterDTOMapStruct;
import com.ssafy.zip.util.UserResponseDTOMapStruct;
import lombok.RequiredArgsConstructor;
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
    private final CommonCodeRepository commonCodeRepository;
    @PostConstruct
    private void initial(){
        scheduleLetterFromAndTo();
    }
    @Override
    public List<LetterResponseDTO> listLetters(UserDTO userDTO) {
        return letterRepository.findByFrom_IdOrTo_Id(userDTO.getId(), userDTO.getId())
                .stream().map(o-> LetterDTOMapStruct.INSTANCE.mapToLetterRequestDTO(o))
                .collect(Collectors.toList());
    }
    @Transactional
    @Override
    public void sendLetter(UserDTO userDTO, LetterRequestDTO letterRequestDTO) {
        User toUser = userRepository.getReferenceById(letterRequestDTO.toUserId());
        letterRepository.save(Letter.builder().content(letterRequestDTO.content())
                .reg(LocalDateTime.now()).isRead(false).from(userRepository.getReferenceById(userDTO.getId()))
                .to(toUser).stationery(commonCodeRepository.findByCode(letterRequestDTO.stationery()))
                .build()
        );

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
        }
        return null;
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
            //TODO: 현수야 getFamily가 null일때 오류나서 그냥 넘어가도록 임시로 넣어놨으니 확인하고 수정해줘!
            if (o.getFamily() != null) {
                List<User> list = map.getOrDefault(o.getFamily().getId(), new ArrayList<>());
                list.add(o);
                map.put(o.getFamily().getId(), list);
            }
        });
        List<LetterFromAndTo> saveList = new ArrayList<>();
        for(Long famId : map.keySet()){
            List<User> list = map.get(famId);
            for(User user : list){
                Integer num = (int)(Math.random()* list.size());
                saveList.add(new LetterFromAndTo(user.getId(),list.get(num).getId()));
            }
        }
        letterFromAndToRepository.saveAll(saveList);
    }
}
