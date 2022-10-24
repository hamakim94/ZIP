package com.ssafy.zip.service;

import com.ssafy.zip.dto.request.PictureRequestDTO;
import com.ssafy.zip.dto.response.AlbumResponseDTO;
import com.ssafy.zip.dto.response.PictureResponseDTO;

import java.util.List;

public interface AlbumService {
    void createFolder(long  userId, String name) throws Exception;
    void deleteFolder(long albumId) throws Exception;
    List<PictureResponseDTO> uploadPictures(List<PictureRequestDTO> pictures) throws Exception; //유저id, 앨범id, 사진 파일, uuid 생성, 파일 이름
    void deletePictures(List<PictureRequestDTO> pictures) throws Exception;
    List<AlbumResponseDTO> listAll(long userId) throws Exception;
    List<PictureResponseDTO> movePictures(List<PictureRequestDTO> pictures, long fromAlbumId, long toAlbumId) throws Exception;
    List<PictureResponseDTO> listFolder() throws Exception;
    PictureResponseDTO pictureDetail() throws Exception;
}
