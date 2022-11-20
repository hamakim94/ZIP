package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.UnityItemResponseDTO;
import com.ssafy.zip.entity.FamilyFurniture;
import org.mapstruct.Mapper;
import org.mapstruct.Mapping;
import org.mapstruct.factory.Mappers;

@Mapper
public interface UnityItemResponseDTOMapStruct {
    UnityItemResponseDTOMapStruct INSTANCE = Mappers.getMapper(UnityItemResponseDTOMapStruct.class);
    @Mapping(source = "familyFurniture.furniture.id",target = "id")
    UnityItemResponseDTO mapToUnityItem(FamilyFurniture familyFurniture);
}
