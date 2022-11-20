package com.ssafy.zip.dto.response;

import java.time.LocalDateTime;
import java.util.List;

public record QnaDTO(Long id, String question, LocalDateTime reg, Integer answerCnt) implements PostResponseDTO {
}
