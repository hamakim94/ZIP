package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.response.BoardDTO;
import com.ssafy.zip.dto.response.BoardDetailDTO;
import com.ssafy.zip.entity.Board;
import com.ssafy.zip.entity.Comment;
import com.ssafy.zip.entity.Notification;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.exception.ResourceNotFoundException;
import com.ssafy.zip.exception.UnauthorizedRequestException;
import com.ssafy.zip.repository.BoardRepository;
import com.ssafy.zip.repository.CommentRepository;
import com.ssafy.zip.repository.UserRepository;
import com.ssafy.zip.util.BoardMapStruct;
import com.ssafy.zip.util.CommentDTOMapStruct;
import com.ssafy.zip.exception.ErrorCode;
import com.ssafy.zip.util.NotificationEnum;
import lombok.RequiredArgsConstructor;
import lombok.SneakyThrows;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;
import org.springframework.web.multipart.MultipartFile;

import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import java.util.stream.Collectors;

@Service
@RequiredArgsConstructor
public class BoardServiceImpl implements BoardService {
    private final UserRepository userRepository;
    private final BoardRepository boardRepository;
    private final CommentRepository commentRepository;
    private final AwsS3Service awsS3Service;
    private final NotificationServiceImpl notificationService;

    @Override
    public List<BoardDTO> listBoard(UserDTO userDTO) {
        return boardRepository.findByFamilyId(userDTO.getFamilyId()).stream()
                .map(BoardMapStruct.INSTANCE::mapToBoardDTO).sorted((o1, o2) -> o2.reg().compareTo(o1.reg())).collect(Collectors.toList());
    }

    @SneakyThrows
    @Override
    public BoardDetailDTO getBoard(UserDTO userDTO, Long boardId) {
        Optional<Board> boardOpt = boardRepository.findById(boardId);
        if(boardOpt.isPresent()){
            Board board = boardOpt.get();
            List<Comment> commentList = commentRepository.findByBoardId(boardId);
            notificationService.sendNotification(new Notification(null,null, String.format(NotificationEnum.BoardUploaded.getMessage(), userDTO.getNickname()),NotificationEnum.BoardUploaded.getLink(), userDTO.getProfileImg(),false),
                            userRepository.findByFamily_Id(userDTO.getFamilyId()).stream().filter(o->!o.getId().equals(userDTO.getId())).map(User::getId).collect(Collectors.toList()));
            return new BoardDetailDTO(BoardMapStruct.INSTANCE.mapToBoardDTO(board),
                    commentList.stream().map(CommentDTOMapStruct.INSTANCE::mapToCommentDTO).collect(Collectors.toList()));
        }
        throw new ResourceNotFoundException("게시글을 찾을 수 없습니다.", ErrorCode.RESOURCE_GONE);
    }
    @Transactional
    @Override
    public void writeBoard(UserDTO userDTO, String content, MultipartFile image) throws Exception {
        User user = userRepository.getReferenceById(userDTO.getId());
        String imageUrl = null;
        if(image!=null&&!image.isEmpty()){
            List<MultipartFile> files = new ArrayList<>();
            files.add(image);
            imageUrl = awsS3Service.uploadFiles("board", files).get(0)[0];
        }

        boardRepository.save(Board.builder().user(user).familyId(userDTO.getFamilyId()).content(content).image(imageUrl).reg(LocalDateTime.now()).build());

    }
    @Transactional
    @Override
    public BoardDetailDTO modifyBoard(UserDTO userDTO, Long boardId, String content, MultipartFile image) throws Exception {

        Board board = boardRepository.getReferenceById(boardId);
        if(board.getUser().getId().equals(userDTO.getId())){
            if(content!=null&&!content.isBlank())board.setContent(content);
            if(image!=null&&!image.isEmpty()){
                List<MultipartFile> files = new ArrayList<>();
                files.add(image);
                board.setImage(awsS3Service.uploadFiles("board", files).get(0)[0]);
            }
            List<Comment> commentList = commentRepository.findByBoardId(boardId);
            return new BoardDetailDTO(BoardMapStruct.INSTANCE.mapToBoardDTO(board),
                    commentList.stream().map(CommentDTOMapStruct.INSTANCE::mapToCommentDTO).collect(Collectors.toList()));
        }else{
            throw new UnauthorizedRequestException("작성자만 게시글을 수정할 수 있습니다.", ErrorCode.MODIFY_ONLY_MINE_ERROR);
        }
    }

    @Override
    public void deleteBoard(UserDTO userDTO, Long boardId) {
        Board board = boardRepository.getReferenceById(boardId);
        if(board.getUser().getId().equals(userDTO.getId())){
            boardRepository.delete(board);
        }else {
            throw new UnauthorizedRequestException("작성자만 게시글을 삭제할 수 있습니다.", ErrorCode.MODIFY_ONLY_MINE_ERROR);
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
        if(comment.getUser().getId().equals(userDTO.getId()))comment.setContent(content);
        else {
            throw new UnauthorizedRequestException("작성자만 댓글을 수정할 수 있습니다.", ErrorCode.MODIFY_ONLY_MINE_ERROR);
        }
    }

    @Override
    public void deleteComment(UserDTO userDTO, Long commentId) {
        Comment comment = commentRepository.getReferenceById(commentId);
        if(comment.getUser().getId().equals(userDTO.getId())){
            commentRepository.deleteById(commentId);
        }else{
            throw new UnauthorizedRequestException("작성자만 댓글을 삭제할 수 있습니다.", ErrorCode.MODIFY_ONLY_MINE_ERROR);
        }

    }
}
