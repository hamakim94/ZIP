package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.entity.User;
import org.mapstruct.Mapper;
import org.mapstruct.Mapping;
import org.mapstruct.factory.Mappers;

@Mapper(uses = {FamilyResponseDTOMapStruct.class})
public interface UserResponseDTOMapStruct {
    UserResponseDTOMapStruct INSTANCE = Mappers.getMapper(UserResponseDTOMapStruct.class);
    @Mapping(expression = "java(user.getFamily()!=null&&user.getFamily().getId()>0)",target = "hasFamily")
    UserResponseDTO mapToUserResponseDTO(User user);
}
