package com.ssafy.zip.dto.request;

import javax.validation.Valid;
import javax.validation.constraints.NotNull;

public record UserModifyRequestDTO(@Valid String nickname, @Valid String familyName, @NotNull(message = "여기가 문제다?") Long characterId) {
}
