package com.ssafy.zip.controller;

import com.ssafy.zip.service.AlbumService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@Slf4j
@Api(value = "앨범 API",tags = {"앨범 API"})
@RequiredArgsConstructor
@RestController
@RequestMapping("/api/album")
public class AlbumController {
    private final AlbumService albumService;

    @PostMapping("/folders")
    @ApiOperation(value = "폴더 생성")
    public ResponseEntity<?> createFolder() {
        return null;
    }

    @DeleteMapping("/folders")
    @ApiOperation(value = "폴더 삭제")
    public ResponseEntity<?> deleteFolder() {
        return null;
    }

    @PostMapping("/pictures")
    @ApiOperation(value = "사진 등록")
    public ResponseEntity<?> uploadPictures() {
        return null;
    }

    @DeleteMapping("/pictures")
    @ApiOperation(value = "사진 삭제")
    public ResponseEntity<?> deletePictures() {
        return null;
    }

    @GetMapping("/pictures")
    @ApiOperation(value = "전체 조회")
    public ResponseEntity<?> listAll() {
        return null;
    }

    @PutMapping("/pictures")
    @ApiOperation(value = "사진 이동(앨범 이동)")
    public ResponseEntity<?> movePictures() {
        return null;
    }

    @GetMapping("/folders/{folderId}")
    @ApiOperation(value = "특정폴더 조회")
    public ResponseEntity<?> listFolder() {
        return null;
    }

    @GetMapping("/pictures/{pictureId}")
    @ApiOperation(value = "사진 세부사항 조회")
    public ResponseEntity<?> pictureDetail() {
        return null;
    }
}
