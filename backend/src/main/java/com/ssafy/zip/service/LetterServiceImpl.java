package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.LetterRequestDTO;
import com.ssafy.zip.dto.response.LetterResponseDTO;
import com.ssafy.zip.entity.Letter;
import com.ssafy.zip.repository.CommonCodeRepository;
import com.ssafy.zip.repository.LetterRepository;
import com.ssafy.zip.repository.UserRepository;
import com.ssafy.zip.util.LetterDTOMapStruct;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;

import java.time.LocalDateTime;
import java.util.List;
import java.util.stream.Collectors;
@Service
@RequiredArgsConstructor
public class LetterServiceImpl implements LetterService {
    private final LetterRepository letterRepository;
    private final UserRepository userRepository;
    private final CommonCodeRepository commonCodeRepository;
    @Override
    public List<LetterResponseDTO> listLetters(UserDTO userDTO) {
        return letterRepository.findByUserIdOrTo(userDTO.getId(), userDTO.getId())
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
}
