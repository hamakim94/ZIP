package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.FamilyResponseDTO;
import com.ssafy.zip.entity.Family;
import org.mapstruct.Mapper;
import org.mapstruct.Mapping;
import org.mapstruct.factory.Mappers;

@Mapper
public interface FamilyResponseDTOMapStruct {
    FamilyResponseDTOMapStruct INSTANCE = Mappers.getMapper(FamilyResponseDTOMapStruct.class);
    @Mapping(source = "family.qna.id", target = "qnaId")
    FamilyResponseDTO mapToFamilyResponseDTO(Family family);
}
