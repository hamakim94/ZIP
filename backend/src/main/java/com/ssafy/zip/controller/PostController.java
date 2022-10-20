package com.ssafy.zip.controller;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.QnaAnswerRequestDTO;
import com.ssafy.zip.dto.response.BoardDTO;
import com.ssafy.zip.dto.response.BoardDetailDTO;
import com.ssafy.zip.dto.response.QnaDTO;
import com.ssafy.zip.dto.response.QnaDetailDTO;
import com.ssafy.zip.service.BoardService;
import com.ssafy.zip.service.QnaService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import lombok.RequiredArgsConstructor;
import org.springframework.http.ResponseEntity;
import org.springframework.security.core.annotation.AuthenticationPrincipal;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.multipart.MultipartFile;

import java.util.List;

@Api(value = "미션 및 게시물 관련 API")
@RestController
@RequestMapping("/api/post")
@RequiredArgsConstructor
public class PostController {

    private final QnaService qnaService;
    private final BoardService boardService;

    @PostMapping("/qna")
    @ApiOperation("질문 등록")
    ResponseEntity<?>  registerQuestion(String question){
        qnaService.saveQuestion(question);
        return ResponseEntity.ok().build();
    }

    @GetMapping("/qna")
    @ApiOperation("백문백답 목록")
    ResponseEntity<List<QnaDTO>> listQuestion(@AuthenticationPrincipal UserDTO user){
        return ResponseEntity.ok(qnaService.listQna(user));
    }

    @GetMapping("/qna/{qnaId}")
    @ApiOperation("백문백답 상세")
    ResponseEntity<QnaDetailDTO> getQnaDetail(@AuthenticationPrincipal UserDTO user, @PathVariable Long qnaId){
        return ResponseEntity.ok(qnaService.getQnaDetail(user, qnaId));
    }

    @PostMapping("/qna/answer")
    @ApiOperation("백문백답 답하기!")
    ResponseEntity<?> answerQna(@AuthenticationPrincipal UserDTO user, @RequestBody QnaAnswerRequestDTO qnaAnswerRequestDTO){
        qnaService.saveAnswer(user, qnaAnswerRequestDTO);
        return ResponseEntity.ok().build();
    }

    @GetMapping("/board")
    @ApiOperation("전체 게시글 조회")
    ResponseEntity<List<BoardDTO>> listBoard(@AuthenticationPrincipal UserDTO userDTO){

        return ResponseEntity.ok(boardService.listBoard(userDTO));
    }

    @GetMapping("/board/{boardId}")
    @ApiOperation("게시글 상세 조회")
    ResponseEntity<BoardDetailDTO> getBoardDetial(@AuthenticationPrincipal UserDTO userDTO, @PathVariable Long boardId){

        return ResponseEntity.ok(boardService.getBoard(userDTO, boardId));
    }

    @PostMapping("/board")
    @ApiOperation("알반 게시물 작성")
    ResponseEntity<?> writeBoard(@AuthenticationPrincipal UserDTO userDTO, @RequestPart String content, @RequestPart MultipartFile image){

        boardService.writeBoard(userDTO, content, image);

        return ResponseEntity.ok().build();
    }

    @PutMapping("/board/{boardId}")
    @ApiOperation("게시글 수정")
    ResponseEntity<BoardDetailDTO> modifyBoard(@AuthenticationPrincipal UserDTO userDTO,@PathVariable Long boardId, @RequestPart String content, @RequestPart MultipartFile image){

        return ResponseEntity.ok(boardService.modifyBoard(userDTO,boardId,content,image));
    }

    @DeleteMapping("/board/{boardId}")
    @ApiOperation("게시글 삭제")
    ResponseEntity<?> deleteBoard(@AuthenticationPrincipal UserDTO userDTO, @PathVariable Long boardId){

        boardService.deleteBoard(userDTO, boardId);
        return ResponseEntity.ok().build();
    }

    @PostMapping("/board/{boardId}")
    @ApiOperation("댓글 작성")
    ResponseEntity<?> writeComment(@AuthenticationPrincipal UserDTO userDTO,@PathVariable Long boardId, @RequestParam String content){

        boardService.writeComment(userDTO, boardId, content);
        return ResponseEntity.ok().build();
    }

    @PutMapping("/board/{boardId}/comment/{commentId}")
    @ApiOperation("댓글 수정")
    ResponseEntity<?> modifyComment(@AuthenticationPrincipal UserDTO userDTO, @PathVariable Long commentId, @RequestParam String comment){

        boardService.modifyComment(userDTO, commentId, comment);
        return ResponseEntity.ok().build();
    }

    @DeleteMapping("/board/{boardId}/comment/{commentId}")
    @ApiOperation("댓글 삭제")
    ResponseEntity<?> deleteComment(@AuthenticationPrincipal UserDTO userDTO, @PathVariable Long commentId){

        boardService.deleteComment(userDTO, commentId);
        return ResponseEntity.ok().build();
    }
}
