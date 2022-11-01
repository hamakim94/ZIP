package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.QnaAnswerModifyRequestDTO;
import com.ssafy.zip.dto.request.QnaAnswerRequestDTO;
import com.ssafy.zip.dto.response.QnaDTO;
import com.ssafy.zip.dto.response.QnaDetailDTO;
import com.ssafy.zip.entity.Qna;
import com.ssafy.zip.entity.QnaLog;

import java.util.List;

public interface QnaService {
    Qna saveQuestion(String question);
    void saveAnswer(UserDTO user, QnaAnswerRequestDTO qnaAnswerRequestDTO);
    List<QnaDTO> listQna(UserDTO user);
    QnaDTO getTodayQna(UserDTO user);
    QnaDetailDTO getQnaDetail(UserDTO user, Long QnaId);
    void modifyAnswer(UserDTO userDTO, QnaAnswerModifyRequestDTO qnaAnswerModifyRequestDTO);
}
