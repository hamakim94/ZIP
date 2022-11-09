package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.UnityUseItemRequestDTO;

public interface UnityService {
    String getSerializedFurnitureInfo(UserDTO userDTO);
    void purchaseFurniture(UserDTO userDTO, Long furnitureId);
    void useFurniture(UserDTO userDTO, UnityUseItemRequestDTO unityUseItemRequestDTO);
    String getUnityAlbumInfo(UserDTO userDTO);
}
