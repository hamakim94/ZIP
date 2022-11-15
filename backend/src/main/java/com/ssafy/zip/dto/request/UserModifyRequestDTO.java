package com.ssafy.zip.dto.request;

import javax.validation.Valid;
import javax.validation.constraints.NotNull;

public record UserModifyRequestDTO(@Valid String nickname, @Valid String familyName, @NotNull Long characterId) {
}
