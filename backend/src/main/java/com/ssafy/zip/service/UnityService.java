package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.UnityAlbumRequestDTO;
import com.ssafy.zip.dto.request.UnityUseItemRequestDTO;
import org.mapstruct.control.MappingControl;

public interface UnityService {
    String getSerializedFurnitureInfo(UserDTO userDTO);
    void purchaseFurniture(UserDTO userDTO, Long furnitureId);
    void useFurniture(UserDTO userDTO, UnityUseItemRequestDTO unityUseItemRequestDTO);
    String getUnityAlbumInfo(UserDTO userDTO);
    void selectUnityAlbum(UserDTO userDTO, UnityAlbumRequestDTO unityAlbumRequestDTO);
    String getCharacterAsset(UserDTO userDTO);
}
