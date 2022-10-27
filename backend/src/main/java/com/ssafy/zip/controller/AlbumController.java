package com.ssafy.zip.controller;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.PictureRequestDTO;
import com.ssafy.zip.dto.response.AlbumResponseDTO;
import com.ssafy.zip.dto.response.PictureResponseDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.service.AlbumService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.security.authentication.UsernamePasswordAuthenticationToken;
import org.springframework.security.core.Authentication;
import org.springframework.security.core.annotation.AuthenticationPrincipal;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.multipart.MultipartFile;
import springfox.documentation.annotations.ApiIgnore;

import java.util.List;

@Slf4j
@Api(value = "앨범 API",tags = {"앨범 API"})
@RequiredArgsConstructor
@RestController
@RequestMapping("/api/album")
public class AlbumController {
    private final AlbumService albumService;

    @PostMapping("/")
    @ApiOperation(value = "앨범 생성")
    public ResponseEntity<?> createFolder(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestParam String name) {
        try{
            albumService.createFolder(user.getId(), name);
            return new ResponseEntity<>(HttpStatus.OK);
        } catch (Exception e){
            log.error("앨범 생성 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @DeleteMapping("/")
    @ApiOperation(value = "폴더 삭제")
    public ResponseEntity<?> deleteFolder(@ApiIgnore @AuthenticationPrincipal UserDTO user,@RequestParam Long albumId) {
        try{
            albumService.deleteFolder(user, albumId);
            return new ResponseEntity<>(HttpStatus.OK);
        } catch (Exception e){
            log.error("앨범 삭제 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @PostMapping("/pictures")
    @ApiOperation(value = "사진 등록")
    public ResponseEntity<List<PictureResponseDTO>> uploadPictures(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestPart PictureRequestDTO pictureRequestDTO, @RequestPart List<MultipartFile> files) {
        try{
            pictureRequestDTO.setUserId(user.getId());
            List<PictureResponseDTO> results = albumService.uploadPictures(pictureRequestDTO, files);
            return new ResponseEntity<>(results, HttpStatus.OK);
        } catch (Exception e){
            log.error("사진 등록 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @DeleteMapping("/pictures")
    @ApiOperation(value = "사진 삭제")
    public ResponseEntity<?> deletePictures(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestBody List<PictureRequestDTO> pictures ) {
        try{
            albumService.deletePictures(pictures);
            return new ResponseEntity<>(HttpStatus.OK);
        } catch (Exception e){
            log.error("사진 삭제 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @GetMapping("/")
    @ApiOperation(value = "전체 조회")
    public ResponseEntity<List<AlbumResponseDTO>> listAll(@ApiIgnore @AuthenticationPrincipal UserDTO user) {
        try{
            List<AlbumResponseDTO> results = albumService.listAll(user.getId());
            return new ResponseEntity<>(results, HttpStatus.OK);
        } catch (Exception e){
            log.error("전체 조회 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @PutMapping("/pictures")
    @ApiOperation(value = "사진 이동(앨범 이동)")
    public ResponseEntity<List<PictureResponseDTO>> movePictures(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestBody List<PictureRequestDTO> pictures, @RequestBody Long toAlbumId) {
        try{
            List<PictureResponseDTO> results = albumService.movePictures(pictures, toAlbumId);
            return new ResponseEntity<>(results, HttpStatus.OK);
        } catch (Exception e){
            log.error("사진 이동 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @GetMapping("/{albumId}")
    @ApiOperation(value = "특정폴더 조회")
    public ResponseEntity<AlbumResponseDTO> listAlbum(@ApiIgnore @AuthenticationPrincipal UserDTO user, @PathVariable long albumId) {
        try{
            AlbumResponseDTO result = albumService.listAlbum(user, albumId);
            return new ResponseEntity<>(result, HttpStatus.OK);
        } catch (Exception e){
            log.error("사진 이동 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @GetMapping("/pictures/{pictureId}")
    @ApiOperation(value = "사진 세부사항 조회")
    public ResponseEntity<PictureResponseDTO> pictureDetail(@ApiIgnore @AuthenticationPrincipal UserDTO user, @PathVariable long pictureId) {
        try{
            PictureResponseDTO result = albumService.pictureDetail(user, pictureId);
            return new ResponseEntity<>(result, HttpStatus.OK);
        } catch (Exception e){
            log.error("사진 이동 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }
}
