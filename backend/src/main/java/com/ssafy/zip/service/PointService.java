package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.entity.CommonCode;
import com.ssafy.zip.util.CommonCodeEnum;

public interface PointService {
    void updatePoint(UserDTO userDTO, String code);
    void updatePoint(UserDTO userDTO, Long furnitureId);
    Integer getfamilyPoint(UserDTO userDTO);
}
