package com.ssafy.zip.dto.response;

import java.time.LocalDateTime;
import java.util.List;

public record QnaDetailDTO(Long Id, String question, LocalDateTime reg, List<QnaAnswerResponseDTO> answers) {
}
