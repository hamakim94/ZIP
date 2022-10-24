package com.ssafy.zip.dto.response;

import java.time.LocalDateTime;

public record CommentDTO(Long id, UserResponseDTO user, String content, LocalDateTime reg) {
}
