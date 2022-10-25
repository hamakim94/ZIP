package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.FamilyRequestDTO;
import com.ssafy.zip.dto.response.FamilyResponseDTO;
import com.ssafy.zip.entity.Family;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.repository.FamilyRepository;
import com.ssafy.zip.repository.UserRepository;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Service;

import javax.transaction.Transactional;
import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;

@Slf4j
@Service
@RequiredArgsConstructor
public class FamilyServiceImpl implements FamilyService{
    private final FamilyRepository familyRepository;
    private final UserRepository userRepository;
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
        FamilyResponseDTO familyResponseDTO = new FamilyResponseDTO(family.getId(), family.getCode(), family.getFamilyName(), family.getMemberNum(), family.getReg(), family.getQna().getId());
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

    private int generateCode() throws NoSuchAlgorithmException {
        int code = 0;
        SecureRandom random = SecureRandom.getInstanceStrong();
        while (true) {
            code = random.nextInt(1000000);
            if (familyRepository.findByCode(code) == null) break;;
        }
        return code;
    }
}
