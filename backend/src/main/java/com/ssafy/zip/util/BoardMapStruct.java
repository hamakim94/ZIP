package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.BoardDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.entity.Board;
import org.mapstruct.Mapper;
import org.mapstruct.Mapping;
import org.mapstruct.factory.Mappers;

@Mapper(uses = {UserResponseDTOMapStruct.class})
public interface BoardMapStruct {
    BoardMapStruct INSTANCE = Mappers.getMapper(BoardMapStruct.class);
    BoardDTO mapToBoardDTO(Board board);
}
