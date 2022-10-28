package com.ssafy.zip.dto.response;

import java.time.LocalDateTime;

public record PictureResponseDTO(Long id, Long userId, Long albumId, String fileName, String url, LocalDateTime reg) {
}
