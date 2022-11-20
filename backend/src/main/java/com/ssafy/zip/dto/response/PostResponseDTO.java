package com.ssafy.zip.dto.response;

import java.time.LocalDateTime;

public sealed interface PostResponseDTO permits LetterResponseDTO,QnaDTO,BoardDTO {
    LocalDateTime reg();
}
