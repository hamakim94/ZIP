package com.ssafy.zip.dto.response;

import java.time.LocalDateTime;

public record NotificationResponseDTO(Long id, String message, String link, String image, Boolean isRead, LocalDateTime reg) {
}