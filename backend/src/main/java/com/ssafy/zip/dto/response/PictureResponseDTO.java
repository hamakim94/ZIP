package com.ssafy.zip.dto.response;

public record PictureResponseDTO(Long id, Long userId, Long albumId, String fileName, String url) {
}
