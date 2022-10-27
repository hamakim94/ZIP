package com.ssafy.zip.dto.response;

import java.util.List;

public record AlbumResponseDTO(Long id, String name, List<PictureResponseDTO> pictures) {
}
