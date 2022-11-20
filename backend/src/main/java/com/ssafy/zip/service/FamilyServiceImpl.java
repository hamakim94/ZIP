package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.FamilyRequestDTO;
import com.ssafy.zip.dto.response.FamilyMemberResponseDTO;
import com.ssafy.zip.dto.response.FamilyResponseDTO;
import com.ssafy.zip.dto.response.SimpleUserResponseDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.entity.Family;
import com.ssafy.zip.entity.LetterFromAndTo;
import com.ssafy.zip.entity.Notification;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.repository.FamilyRepository;
import com.ssafy.zip.repository.LetterFromAndToRepository;
import com.ssafy.zip.repository.UserRepository;
import com.ssafy.zip.util.NotificationEnum;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.apache.catalina.Loader;
import org.springframework.stereotype.Service;

import javax.transaction.Transactional;
import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.stream.Collectors;

@Slf4j
@Service
@RequiredArgsConstructor
public class FamilyServiceImpl implements FamilyService{
    private final FamilyRepository familyRepository;
    private final UserRepository userRepository;
    private final NotificationServiceImpl notificationService;
    private final LetterFromAndToRepository letterFromAndToRepository;
    private final PointService pointService;
    @Transactional
    @Override
    public FamilyResponseDTO createFamilyRoom(UserDTO userDTO, FamilyRequestDTO familyRequestDTO) throws Exception {
        Family family = Family.builder()
                .code(generateCode())
                .familyName(familyRequestDTO.familyName())
                .memberNum(familyRequestDTO.memberNum())
                .build();
        User user = userRepository.findById(userDTO.getId()).get();
        user.setFamily(familyRepository.save(family));
        userRepository.save(user);
        FamilyResponseDTO familyResponseDTO = new FamilyResponseDTO(family.getId(), family.getCode(), family.getFamilyName(), family.getMemberNum(), family.getReg(), 1L);
        return familyResponseDTO;
    }
    @Transactional
    @Override
    public FamilyResponseDTO enterFamilyRoom(UserDTO userDTO, Integer code) throws Exception {
        Family family = familyRepository.findByCode(code);
        User user = userRepository.findById(userDTO.getId()).get();
        user.setFamily(family);
        userRepository.save(user);
        FamilyResponseDTO familyResponseDTO = new FamilyResponseDTO(family.getId(), family.getCode(), family.getFamilyName(), family.getMemberNum(), family.getReg(), family.getQna().getId());


        notificationService.sendNotification(new Notification(null,null, String.format(NotificationEnum.FamilyEnrolled.getMessage(), userDTO.getNickname()),NotificationEnum.FamilyEnrolled.getLink(), userDTO.getProfileImg().getImage(),false, LocalDateTime.now()),
                userRepository.findByFamily_Id(userDTO.getFamilyId()).stream().filter(o->!o.getId().equals(userDTO.getId())).map(o->o.getId()).collect(Collectors.toList()));
        // 편지 보낼 가족 선정!
        List<Long> usersIdList = family.getUsers().stream().map(User::getId).collect(Collectors.toList());
        if(usersIdList.size()==2){
            Long userA = usersIdList.get(0);
            Long userB = usersIdList.get(1);
            letterFromAndToRepository.saveAll(List.of(
                    new LetterFromAndTo(userA, userB),
                    new LetterFromAndTo(userB, userA)
            ));
        } else if (usersIdList.size()>2) {
            letterFromAndToRepository.save(new LetterFromAndTo(userDTO.getId(),
                    usersIdList.stream().filter(o->!o.equals(user.getId())).findAny().get()));
        }

        return familyResponseDTO;
    }
    @Transactional
    @Override
    public FamilyResponseDTO modifyFamilyRoom(UserDTO userDTO, FamilyRequestDTO familyRequestDTO) throws Exception {
        Family family = familyRepository.findById(userDTO.getFamilyId()).get();
        User user = userRepository.findById(userDTO.getId()).get();
        family.modifyFamily(familyRequestDTO.familyName(), familyRequestDTO.memberNum());
        familyRepository.save(family);
        FamilyResponseDTO familyResponseDTO = new FamilyResponseDTO(family.getId(), family.getCode(), family.getFamilyName(), family.getMemberNum(), family.getReg(), family.getQna().getId());
        return familyResponseDTO;
    }

    @Override
    public FamilyMemberResponseDTO getFamilyMembers(UserDTO userDTO) throws Exception {
        Family family = familyRepository.findById(userDTO.getFamilyId()).get();
        List<SimpleUserResponseDTO> simpleUserResponseDTOList = new ArrayList<>();
        for (User user: family.getUsers()) {
            simpleUserResponseDTOList.add(SimpleUserResponseDTO.builder()
                    .id(user.getId())
                    .nickname(user.getNickname())
                    .name(user.getName())
                    .profileImg(user.getProfileImg())
                    /*.profileImg(user.getProfileImg().getImage())*/
                    .build());
        }
        FamilyMemberResponseDTO familyMemberResponseDTO = new FamilyMemberResponseDTO(family.getId(), family.getCode(), family.getFamilyName(), family.getMemberNum(), family.getReg(), family.getQna().getId(), pointService.getfamilyPoint(userDTO), simpleUserResponseDTOList);
        return familyMemberResponseDTO;
    }

    private int generateCode() throws NoSuchAlgorithmException, Exception {
        System.out.println(1);
        int code = 0;
        System.out.println(2);
        Random random = new Random();
        System.out.println(3);
        int temp = 0;
        System.out.println(4);
        while (temp<100) {
            code = random.nextInt(1000000);
            System.out.println(code);
            Family family = familyRepository.findByCode(code);
            if (family == null) break;
            temp++;
        }
        if (temp>=100) throw new Exception();
        System.out.println(5);
        return code;
    }
}
