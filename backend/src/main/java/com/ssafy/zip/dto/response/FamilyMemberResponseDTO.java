package com.ssafy.zip.dto.response;

import java.time.LocalDateTime;
import java.util.List;

public record FamilyMemberResponseDTO(Long id, Integer code, String familyName, Integer memberNum, LocalDateTime reg, Long qnaId, List<UserResponseDTO> userResponseDTOList) {
}
