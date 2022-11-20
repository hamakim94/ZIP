package com.ssafy.zip.controller;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.LetterRequestDTO;
import com.ssafy.zip.dto.request.QnaAnswerModifyRequestDTO;
import com.ssafy.zip.dto.request.QnaAnswerRequestDTO;
import com.ssafy.zip.dto.response.*;
import com.ssafy.zip.service.BoardService;
import com.ssafy.zip.service.LetterService;
import com.ssafy.zip.service.PostService;
import com.ssafy.zip.service.QnaService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import lombok.RequiredArgsConstructor;
import net.bytebuddy.implementation.bind.annotation.Default;
import org.springframework.beans.factory.annotation.Required;
import org.springframework.http.ResponseEntity;
import org.springframework.security.core.annotation.AuthenticationPrincipal;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.multipart.MultipartFile;
import springfox.documentation.annotations.ApiIgnore;

import java.util.List;

@Api(value = "미션 및 게시물 관련 API")
@RestController
@RequestMapping("/api/post")
@RequiredArgsConstructor
public class PostController {

    private final QnaService qnaService;
    private final BoardService boardService;
    private final LetterService letterService;
    private final PostService postService;

    @GetMapping("")
    @ApiOperation("전체 게시물 조회")
    ResponseEntity<List<PostAllResponseDTO>> getPosts(@ApiIgnore @AuthenticationPrincipal UserDTO user){

        return ResponseEntity.ok(postService.getAll(user));
    }

    @GetMapping("/missions")
    @ApiOperation("오늘의 미션 현황")
    ResponseEntity<TodayMissionResponseDTO> getTodayMission(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO){

        LetterTodayResponseDTO letterTodayResponseDTO = letterService.getTodayLetter(userDTO);
        QnaDTO qnaDTO = qnaService.getTodayQna(userDTO);

        return ResponseEntity.ok(new TodayMissionResponseDTO(qnaDTO,letterTodayResponseDTO));
    }

    @PostMapping("/qna")
    @ApiOperation("질문 등록")
    ResponseEntity<?>  registerQuestion(String question){
        qnaService.saveQuestion(question);
        return ResponseEntity.ok().build();
    }

    @GetMapping("/qna")
    @ApiOperation("백문백답 목록")
    ResponseEntity<List<QnaDTO>> listQuestion(@ApiIgnore @AuthenticationPrincipal UserDTO user){
        return ResponseEntity.ok(qnaService.listQna(user));
    }

    @GetMapping("/qna/{qnaId}")
    @ApiOperation("백문백답 상세")
    ResponseEntity<QnaDetailDTO> getQnaDetail(@ApiIgnore @AuthenticationPrincipal UserDTO user, @PathVariable Long qnaId){
        return ResponseEntity.ok(qnaService.getQnaDetail(user, qnaId));
    }

    @PostMapping("/qna/answer")
    @ApiOperation("백문백답 답하기!")
    ResponseEntity<?> answerQna(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestBody QnaAnswerRequestDTO qnaAnswerRequestDTO){
        qnaService.saveAnswer(user, qnaAnswerRequestDTO);
        return ResponseEntity.ok().build();
    }

    @PutMapping("/qna/answer")
    @ApiOperation("백문백답 수정")
    ResponseEntity<?> modifyQnaAnswer(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @RequestBody QnaAnswerModifyRequestDTO qnaAnswerModifyRequestDTO){
        qnaService.modifyAnswer(userDTO, qnaAnswerModifyRequestDTO);
        return ResponseEntity.ok().build();
    }


    @GetMapping("/board")
    @ApiOperation("일반 게시글 조회")
    ResponseEntity<List<BoardDTO>> listBoard(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO){

        return ResponseEntity.ok(boardService.listBoard(userDTO));
    }

    @GetMapping("/board/{boardId}")
    @ApiOperation("일반 게시글 상세 조회")
    ResponseEntity<BoardDetailDTO> getBoardDetial(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @PathVariable Long boardId){

        return ResponseEntity.ok(boardService.getBoard(userDTO, boardId));
    }

    @PostMapping("/board")
    @ApiOperation("알반 게시물 작성")
    ResponseEntity<?> writeBoard(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @RequestPart String content, @RequestPart(required = false) MultipartFile image) throws Exception {

        boardService.writeBoard(userDTO, content, image);

        return ResponseEntity.ok().build();
    }

    @PutMapping("/board/{boardId}")
    @ApiOperation("일반 게시글 수정")
    ResponseEntity<BoardDetailDTO> modifyBoard(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @PathVariable Long boardId, @RequestPart String content, @RequestPart(required = false) MultipartFile image) throws Exception {

        return ResponseEntity.ok(boardService.modifyBoard(userDTO,boardId,content,image));
    }

    @DeleteMapping("/board/{boardId}")
    @ApiOperation("일반 게시글 삭제")
    ResponseEntity<?> deleteBoard(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @PathVariable Long boardId){

        boardService.deleteBoard(userDTO, boardId);
        return ResponseEntity.ok().build();
    }

    @PostMapping("/board/{boardId}")
    @ApiOperation("일반 게시글 댓글 작성")
    ResponseEntity<?> writeComment(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @PathVariable Long boardId, @RequestParam String content){

        boardService.writeComment(userDTO, boardId, content);
        return ResponseEntity.ok().build();
    }

    @PutMapping("/board/{boardId}/comment/{commentId}")
    @ApiOperation("일반 게시글 댓글 수정")
    ResponseEntity<?> modifyComment(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @PathVariable Long commentId, @RequestParam String comment){

        boardService.modifyComment(userDTO, commentId, comment);
        return ResponseEntity.ok().build();
    }

    @DeleteMapping("/board/{boardId}/comment/{commentId}")
    @ApiOperation("일반 게시글 댓글 삭제")
    ResponseEntity<?> deleteComment(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @PathVariable Long commentId){

        boardService.deleteComment(userDTO, commentId);
        return ResponseEntity.ok().build();
    }
    @PostMapping("/letter/{letterId}")
    @ApiOperation("편지 읽음")
    ResponseEntity<?> readLetter(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @PathVariable Long letterId){
        letterService.readLetter(userDTO,letterId);
        return ResponseEntity.ok().build();
    }

    @GetMapping("/letter")
    @ApiOperation("편지 조회")
    ResponseEntity<List<LetterResponseDTO>> listLetter(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO){
        return ResponseEntity.ok(letterService.listLetters(userDTO));
    }

    @GetMapping("/letter/{letterId}")
    @ApiOperation("편지 개별 조회")
    ResponseEntity<LetterResponseDTO> getLetter(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @PathVariable Long letterId){
        return ResponseEntity.ok(letterService.getLetter(userDTO,letterId));
    }

    @PostMapping("/letter")
    @ApiOperation("편지 보내기")
    ResponseEntity<?> sendLetter(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @RequestBody LetterRequestDTO letterRequestDTO){

        letterService.sendLetter(userDTO, letterRequestDTO);
        return ResponseEntity.ok().build();
    }

    @GetMapping("/letter/today")
    @ApiOperation("오늘의 편지 조회")
    ResponseEntity<LetterTodayResponseDTO> todayLetter(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO){

        return ResponseEntity.ok(letterService.getTodayLetter(userDTO));
    }

    @PostMapping("/letter/reset")
    @ApiOperation("오늘의 편지 리셋")
    ResponseEntity<?> resetLetter(){
        letterService.resetLetterList();
        return ResponseEntity.ok().build();
    }
}
