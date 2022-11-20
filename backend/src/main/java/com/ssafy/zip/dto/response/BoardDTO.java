package com.ssafy.zip.dto.response;

import java.time.LocalDateTime;

public record BoardDTO(Long id, Long familyId, UserResponseDTO user, String content, String image, LocalDateTime reg,Integer commentCnt) implements PostResponseDTO {
}
