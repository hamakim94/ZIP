package com.ssafy.zip.dto.response;

import java.time.LocalDateTime;

public record FamilyResponseDTO(Long id, Integer code, String familyName, Integer memberNum, LocalDateTime reg, Long qnaId) {
}
