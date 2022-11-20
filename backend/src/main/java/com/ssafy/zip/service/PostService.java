package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.response.PostAllResponseDTO;

import java.util.List;

public interface PostService {

    List<PostAllResponseDTO> getAll(UserDTO userDTO);
}
