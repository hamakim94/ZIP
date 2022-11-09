package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.entity.CommonCode;

public interface PointService {
    void updatePoint(UserDTO userDTO, CommonCode code);

}
