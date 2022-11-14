package com.ssafy.zip.controller;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.UnityAlbumRequestDTO;
import com.ssafy.zip.dto.request.UnityUseItemRequestDTO;
import com.ssafy.zip.service.UnityService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.http.ResponseEntity;
import org.springframework.security.core.annotation.AuthenticationPrincipal;
import org.springframework.web.bind.annotation.*;
import springfox.documentation.annotations.ApiIgnore;

@Slf4j
@Api(value = "유니티 API",tags = {"유니티 API"})
@RequiredArgsConstructor
@RestController
@RequestMapping("/api/unity")
public class UnityController {
    private final UnityService unityService;

    @GetMapping("/create")
    @ApiOperation(value = "인벤토리 정보")
    ResponseEntity<String> getInventory(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO){

        return ResponseEntity.ok(unityService.getSerializedFurnitureInfo(userDTO));
    }

    @PostMapping("/use")
    @ApiOperation(value = "가구 선택")
    ResponseEntity<?> useInventory(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @RequestBody UnityUseItemRequestDTO unityUseItemRequestDTO){
        unityService.useFurniture(userDTO, unityUseItemRequestDTO);
        return ResponseEntity.ok().build();
    }

    @PostMapping("/shop/{furnitureId}")
    @ApiOperation(value = "가구 구매")
    ResponseEntity<?> buyFurniture(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO,@PathVariable Long furnitureId){
        unityService.purchaseFurniture(userDTO, furnitureId);
        return ResponseEntity.ok().build();
    }

    @GetMapping("/album")
    @ApiOperation(value = "앨범 정보 가져오기")
    ResponseEntity<String> getAlbums(@ApiIgnore@AuthenticationPrincipal UserDTO userDTO){
        return ResponseEntity.ok(unityService.getUnityAlbumInfo(userDTO));
    }

    @PostMapping("/album")
    @ApiOperation(value = "앨범 사진 선택")
    ResponseEntity<?> chooseAlbum(@ApiIgnore@AuthenticationPrincipal UserDTO userDTO, @RequestBody UnityAlbumRequestDTO unityAlbumRequestDTO){
        unityService.selectUnityAlbum(userDTO, unityAlbumRequestDTO);
        return ResponseEntity.ok().build();
    }

    @GetMapping("/character")
    @ApiOperation(value = "캐릭터 에셋 파일명")
    ResponseEntity<String> getCharacterAsset(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO){
        return ResponseEntity.ok(unityService.getCharacterAsset(userDTO));
    }
}
