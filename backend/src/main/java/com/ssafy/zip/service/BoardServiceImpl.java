package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.response.BoardDTO;
import com.ssafy.zip.dto.response.BoardDetailDTO;
import com.ssafy.zip.entity.Board;
import com.ssafy.zip.entity.Comment;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.repository.BoardRepository;
import com.ssafy.zip.repository.CommentRepository;
import com.ssafy.zip.repository.UserRepository;
import com.ssafy.zip.util.BoardMapStruct;
import com.ssafy.zip.util.CommentDTOMapStruct;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;
import org.springframework.web.multipart.MultipartFile;

import java.time.LocalDateTime;
import java.util.List;
import java.util.Optional;
import java.util.stream.Collectors;

@Service
@RequiredArgsConstructor
public class BoardServiceImpl implements BoardService {
    private final UserRepository userRepository;
    private final BoardRepository boardRepository;
    private final CommentRepository commentRepository;

    @Override
    public List<BoardDTO> listBoard(UserDTO userDTO) {
        return boardRepository.findByFamilyId(userDTO.getFamilyId()).stream()
                .map(o->BoardMapStruct.INSTANCE.mapToBoardDTO(o)).collect(Collectors.toList());
    }

    @Override
    public BoardDetailDTO getBoard(UserDTO userDTO, Long boardId) {
        Optional<Board> boardOpt = boardRepository.findById(boardId);
        if(boardOpt.isPresent()){
            Board board = boardOpt.get();
            List<Comment> commentList = commentRepository.findByBoardId(boardId);
            return new BoardDetailDTO(BoardMapStruct.INSTANCE.mapToBoardDTO(board),
                    commentList.stream().map(o-> CommentDTOMapStruct.INSTANCE.mapToCommentDTO(o)).collect(Collectors.toList()));
        }
        return null;
    }
    // TODO : S3 연결 후 이미지 연결 로직 추가!!!!1
    @Override
    public void writeBoard(UserDTO userDTO, String content, MultipartFile image) {
        User user = userRepository.getReferenceById(userDTO.getId());
        boardRepository.save(new Board(null,userDTO.getFamilyId(),user,content,null, LocalDateTime.now()));
    }
    // TODO : S3 연결 후 이미지 연결 로직 추가!!!!1
    @Transactional
    @Override
    public BoardDetailDTO modifyBoard(UserDTO userDTO,Long boardId, String content, MultipartFile image) {

        Board board = boardRepository.getReferenceById(boardId);
        if(board.getUser().getId()==userDTO.getId()){
            if(!content.isBlank())
            board.setContent(content);
            if(!image.isEmpty());//TODO 이미지 관련 처리
            List<Comment> commentList = commentRepository.findByBoardId(boardId);
            return new BoardDetailDTO(BoardMapStruct.INSTANCE.mapToBoardDTO(board),
                    commentList.stream().map(o->CommentDTOMapStruct.INSTANCE.mapToCommentDTO(o)).collect(Collectors.toList()));
        }else{
         // TODO : 인가 관련 예외 처리.....
            return null;
        }
    }

    @Override
    public void deleteBoard(UserDTO userDTO, Long boardId) {
        Board board = boardRepository.getReferenceById(boardId);
        if(board.getUser().getId()==userDTO.getId()){
            boardRepository.delete(board);
        }else {
            // TODO : 인가 관련 예외 처리.....
        }
    }

    @Override
    public void writeComment(UserDTO userDTO, Long boardId, String content) {
        User user = userRepository.getReferenceById(userDTO.getId());
        commentRepository.save(new Comment(null,boardId,user,content,LocalDateTime.now()));
    }
    @Transactional
    @Override
    public void modifyComment(UserDTO userDTO, Long commentId, String content) {
        Comment comment = commentRepository.getReferenceById(commentId);
        if(comment.getUser().getId()==userDTO.getId())comment.setContent(content);
        else {
            // TODO : 인가 관련 예외 처리.....
        }
    }

    @Override
    public void deleteComment(UserDTO userDTO, Long commentId) {
        Comment comment = commentRepository.getReferenceById(commentId);
        if(comment.getUser().getId()==userDTO.getId()){
            commentRepository.deleteById(commentId);
        }else{
            // TODO : 인가 관련 예외 처리.....
        }

    }
}
