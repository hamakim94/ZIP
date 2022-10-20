package com.ssafy.zip.dto.response;

import com.ssafy.zip.entity.Board;

import java.time.LocalDateTime;

public record LetterResponseDTO(Long id, String content, Boolean isRead, LocalDateTime dateSent, UserResponseDTO from, UserResponseDTO to, String stationery) {
}
