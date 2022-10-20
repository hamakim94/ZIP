package com.ssafy.zip.dto.response;

import com.ssafy.zip.entity.Board;
import com.ssafy.zip.entity.Comment;

import java.util.List;

public record BoardDetailDTO(BoardDTO board, List<CommentDTO> comments) {
}
