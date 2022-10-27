package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.PictureRequestDTO;
import com.ssafy.zip.dto.response.AlbumResponseDTO;
import com.ssafy.zip.dto.response.PictureResponseDTO;
import com.ssafy.zip.entity.User;
import org.springframework.web.multipart.MultipartFile;

import java.util.List;

public interface AlbumService {
    void createFolder(long  userId, String name) throws Exception;
    void deleteFolder(UserDTO user, long albumId) throws Exception;

    List<PictureResponseDTO> uploadPictures(PictureRequestDTO pictureRequestDTO, List<MultipartFile> pictures) throws Exception;

    void deletePictures(List<PictureRequestDTO> pictures) throws Exception;
    List<AlbumResponseDTO> listAll(long userId) throws Exception;

    List<PictureResponseDTO> movePictures(List<PictureRequestDTO> pictures, long toAlbumId) throws Exception;

    AlbumResponseDTO listAlbum(UserDTO userDTO, Long albumId) throws Exception;
    PictureResponseDTO pictureDetail(UserDTO userDTO, Long pictureId) throws Exception;
}
