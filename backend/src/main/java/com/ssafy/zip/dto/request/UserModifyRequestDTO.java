package com.ssafy.zip.dto.request;

import javax.validation.Valid;
import javax.validation.constraints.NotNull;

public record UserModifyRequestDTO(@Valid String nickname, @Valid String familyName, @NotNull(message = "캐릭터 선택은 필수입니다.") Long characterId) {
}
