package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.QnaAnswerResponseDTO;
import com.ssafy.zip.entity.QnaLog;
import org.mapstruct.Mapper;
import org.mapstruct.Mapping;
import org.mapstruct.factory.Mappers;

@Mapper(uses = {UserResponseDTOMapStruct.class})
public interface QnaAnswerMapStruct {
    QnaAnswerMapStruct INSTANCE = Mappers.getMapper(QnaAnswerMapStruct.class);
    QnaAnswerResponseDTO mapToQnaAnswerDTO(QnaLog qnaLog);
}
