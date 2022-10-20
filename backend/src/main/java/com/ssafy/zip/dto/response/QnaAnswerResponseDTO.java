package com.ssafy.zip.dto.response;

import java.time.LocalDateTime;

public record QnaAnswerResponseDTO(Long id, String content, UserResponseDTO user, LocalDateTime reg) {
}
