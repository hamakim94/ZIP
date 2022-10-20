package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.QnaAnswerResponseDTO;
import com.ssafy.zip.entity.QnaLog;
import org.mapstruct.Mapper;
import org.mapstruct.Mapping;
import org.mapstruct.factory.Mappers;

@Mapper
public interface QnaAnswerMapStruct {
    QnaAnswerMapStruct INSTANCE = Mappers.getMapper(QnaAnswerMapStruct.class);
    @Mapping(source = "qnaLog.user.profileImg", target = "user.profileImg")
    @Mapping(source = "qnaLog.user.nickname", target = "user.nickname")
    @Mapping(source = "qnaLog.user.name", target = "user.name")
    @Mapping(source = "qnaLog.user.id", target = "user.id")
    QnaAnswerResponseDTO mapToQnaAnswerDTO(QnaLog qnaLog);
}
