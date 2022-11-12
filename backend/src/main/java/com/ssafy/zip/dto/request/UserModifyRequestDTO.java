package com.ssafy.zip.dto.request;

import javax.validation.Valid;

public record UserModifyRequestDTO(@Valid String nickname, @Valid String familyName, @Valid Long characterId) {
}
