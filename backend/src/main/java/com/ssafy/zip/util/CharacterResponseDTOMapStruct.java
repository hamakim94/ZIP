package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.CharacterResponseDTO;
import com.ssafy.zip.entity.Character;
import org.mapstruct.Mapper;
import org.mapstruct.factory.Mappers;

@Mapper
public interface CharacterResponseDTOMapStruct {
    CharacterResponseDTOMapStruct INSTANCE = Mappers.getMapper(CharacterResponseDTOMapStruct.class);
    CharacterResponseDTO mapToCharacterResponseDTO(Character character);
}
