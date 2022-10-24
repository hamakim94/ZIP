package com.ssafy.zip.service;

import com.ssafy.zip.dto.request.UserFindPWRequestDTO;
import com.ssafy.zip.dto.request.UserLoginRequestDTO;
import com.ssafy.zip.dto.request.UserSignupRequestDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.validation.Errors;
import org.springframework.web.multipart.MultipartFile;

import java.util.Map;

public interface UserService {
    Map<String, String> validateHandling(Errors errors);
    void signup(UserSignupRequestDTO userSignupRequestDTO, MultipartFile profileImg, PasswordEncoder passwordEncoder);
    UserResponseDTO login(UserLoginRequestDTO userLoginRequestDTO, PasswordEncoder passwordEncoder);
    boolean checkEmailDuplicate(String email);
    UserResponseDTO modifyUser(Long id, String nickname, MultipartFile profileImg);
    void updatePassword(UserFindPWRequestDTO userFindPWRequestDTO, PasswordEncoder passwordEncoder);
    void findPassword(String email, String name, PasswordEncoder passwordEncoder);
    void confirmEmail(String email, String authToken);
    void reissueEmailAuth(String email, String authToken);
}
