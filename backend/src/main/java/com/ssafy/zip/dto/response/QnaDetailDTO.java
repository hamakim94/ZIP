package com.ssafy.zip.dto.response;

import java.util.List;

public record QnaDetailDTO(Long Id, String question, List<QnaAnswerResponseDTO> answers) {
}
