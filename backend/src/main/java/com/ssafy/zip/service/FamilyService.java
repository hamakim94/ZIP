package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.FamilyRequestDTO;
import com.ssafy.zip.dto.response.FamilyResponseDTO;

public interface FamilyService {
    FamilyResponseDTO createFamilyRoom(UserDTO user, FamilyRequestDTO familyRequestDTO) throws Exception;
    FamilyResponseDTO enterFamilyRoom(UserDTO user, Integer code) throws Exception;
    FamilyResponseDTO modifyFamilyRoom(UserDTO user, FamilyRequestDTO familyRequestDTO) throws Exception;
}
