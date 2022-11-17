package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.LetterRequestDTO;
import com.ssafy.zip.dto.response.LetterResponseDTO;
import com.ssafy.zip.dto.response.LetterTodayResponseDTO;
import com.ssafy.zip.entity.User;

import java.util.List;

public interface LetterService {
    void readLetter(UserDTO userDTO,Long letterId);
    List<LetterResponseDTO> listLetters(UserDTO userDTO);
    LetterResponseDTO getLetter(UserDTO userDTO, Long letterId);
    void sendLetter(UserDTO userDTO, LetterRequestDTO letterRequestDTO);
    LetterTodayResponseDTO getTodayLetter(UserDTO userDTO);
    void resetLetterList();
}
