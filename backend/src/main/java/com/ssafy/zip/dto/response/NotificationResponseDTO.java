package com.ssafy.zip.dto.response;

public record NotificationResponseDTO(Long id, String message, String link, String image, Boolean isRead) {
}
