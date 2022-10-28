package com.ssafy.zip.dto.response;

public record LetterTodayResponseDTO(UserResponseDTO user, Integer today, Boolean isSent) {
}
