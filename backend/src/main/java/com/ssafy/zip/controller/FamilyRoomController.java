package com.ssafy.zip.controller;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.FamilyRequestDTO;
import com.ssafy.zip.dto.response.FamilyMemberResponseDTO;
import com.ssafy.zip.dto.response.FamilyResponseDTO;
import com.ssafy.zip.service.FamilyService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.security.core.annotation.AuthenticationPrincipal;
import org.springframework.web.bind.annotation.*;
import springfox.documentation.annotations.ApiIgnore;

@Slf4j
@Api(value = "가족방 API",tags = {"가족방 API"})
@RequiredArgsConstructor
@RestController
@RequestMapping("/api/rooms")
public class FamilyRoomController {
    private final FamilyService familyService;

    @PostMapping("/create")
    @ApiOperation(value = "가족방 생성") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<FamilyResponseDTO> createFamilyRoom(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestBody FamilyRequestDTO familyRequestDTO){
        try {
            FamilyResponseDTO familyResponseDTO = familyService.createFamilyRoom(user,familyRequestDTO);
            return new ResponseEntity<>(familyResponseDTO, HttpStatus.OK);
        } catch (Exception e) {
            log.error("가족방 생성 실패 : " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @PutMapping("/enter")
    @ApiOperation(value = "가족방 입장") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<FamilyResponseDTO> enterFamilyRoom(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestBody Integer code) {
        try {
            FamilyResponseDTO familyResponseDTO = familyService.enterFamilyRoom(user, code);
            return new ResponseEntity<>(familyResponseDTO, HttpStatus.OK);
        } catch (Exception e) {
            log.error("가족방 입장 실패 : " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @PutMapping("/modify")
    @ApiOperation(value = "가족방 수정") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<FamilyResponseDTO> modifyFamilyRoom(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestBody FamilyRequestDTO familyRequestDTO){
        try {
            FamilyResponseDTO familyResponseDTO = familyService.modifyFamilyRoom(user,familyRequestDTO);
            return new ResponseEntity<>(familyResponseDTO, HttpStatus.OK);
        } catch (Exception e) {
            log.error("가족방 수정 실패 : " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @GetMapping
    @ApiOperation(value = "가족 조회")
    public ResponseEntity<FamilyMemberResponseDTO> getFamilyMembers(@ApiIgnore @AuthenticationPrincipal UserDTO user){
        try {
            FamilyMemberResponseDTO familyMemberResponseDTO = familyService.getFamilyMembers(user);
            return new ResponseEntity<>(familyMemberResponseDTO, HttpStatus.OK);
        } catch (Exception e) {
            log.error("가족 조회 실패 : " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }
}
