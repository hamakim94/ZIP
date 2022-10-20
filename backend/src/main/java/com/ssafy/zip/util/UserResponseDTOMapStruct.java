package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.entity.User;
import org.mapstruct.Mapper;
import org.mapstruct.factory.Mappers;

@Mapper
public interface UserResponseDTOMapStruct {
    UserResponseDTOMapStruct INSTANCE = Mappers.getMapper(UserResponseDTOMapStruct.class);
    UserResponseDTO mapToUserResponseDTO(User user);
}
