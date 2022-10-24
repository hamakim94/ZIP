package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.BoardDTO;
import com.ssafy.zip.dto.response.CommentDTO;
import com.ssafy.zip.entity.Board;
import com.ssafy.zip.entity.Comment;
import org.mapstruct.Mapper;
import org.mapstruct.factory.Mappers;

@Mapper(uses = {UserResponseDTOMapStruct.class})
public interface CommentDTOMapStruct {
    CommentDTOMapStruct INSTANCE = Mappers.getMapper(CommentDTOMapStruct.class);
    CommentDTO mapToCommentDTO(Comment comment);
}
