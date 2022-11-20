package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.response.BoardDTO;
import com.ssafy.zip.dto.response.BoardDetailDTO;
import org.springframework.web.multipart.MultipartFile;

import java.util.List;

public interface BoardService {
    List<BoardDTO> listBoard(UserDTO userDTO);
    BoardDetailDTO getBoard(UserDTO userDTO, Long boardId);
    void writeBoard(UserDTO userDTO, String content, MultipartFile image) throws Exception;
    BoardDetailDTO modifyBoard(UserDTO userDTO, Long boardId, String content, MultipartFile image) throws Exception;
    void deleteBoard(UserDTO userDTO, Long boardId);
    void writeComment(UserDTO userDTO, Long boardId, String content);
    void modifyComment(UserDTO userDTO, Long commentId, String content);
    void deleteComment(UserDTO userDTO, Long commentId);
}
