package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.LetterRequestDTO;
import com.ssafy.zip.dto.response.LetterResponseDTO;
import com.ssafy.zip.dto.response.LetterTodayResponseDTO;

import java.util.List;

public interface LetterService {

    List<LetterResponseDTO> listLetters(UserDTO userDTO);
    void sendLetter(UserDTO userDTO, LetterRequestDTO letterRequestDTO);
    LetterTodayResponseDTO getTodayLetter(UserDTO userDTO);
}
