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
    @Override
    public List<LetterResponseDTO> listLetters(UserDTO userDTO) {
        return letterRepository.findByUser_IdOrTo(userDTO.getId(), userDTO.getId())
                .stream().map(o-> LetterDTOMapStruct.INSTANCE.mapToLetterRequestDTO(o))
                .collect(Collectors.toList());
    }

    @Override
    public void sendLetter(UserDTO userDTO, LetterRequestDTO letterRequestDTO) {
        letterRepository.save(Letter.builder().content(letterRequestDTO.content())
                .dateSent(LocalDateTime.now()).user(userRepository.getReferenceById(userDTO.getId()))
                .to(letterRequestDTO.toUserId()).stationery(commonCodeRepository.findByCode(letterRequestDTO.stationery()))
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
                List<Letter> list = letterRepository.findByUser_FamilyIdAndDateSentEquals(userDTO.getFamilyId(), LocalDate.now());
                Boolean isSent = list.stream().anyMatch(l->l.getUser().getId().equals(userDTO.getId()));
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
            List<User> list = map.getOrDefault(o.getFamilyId(), new ArrayList<>());
            list.add(o);
            map.put(o.getFamilyId(), list);
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
