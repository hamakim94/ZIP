package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.LetterResponseDTO;
import com.ssafy.zip.entity.Letter;
import org.mapstruct.Mapper;
import org.mapstruct.factory.Mappers;

@Mapper(uses = {UserResponseDTOMapStruct.class})
public interface LetterDTOMapStruct {
    LetterDTOMapStruct INSTANCE = Mappers.getMapper(LetterDTOMapStruct.class);
    LetterResponseDTO mapToLetterResponseDTO(Letter letter);
}
