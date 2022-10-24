package com.ssafy.zip.service;

import com.ssafy.zip.dto.request.UserFindPWRequestDTO;
import com.ssafy.zip.dto.request.UserLoginRequestDTO;
import com.ssafy.zip.dto.request.UserSignupRequestDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.repository.UserRepository;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.stereotype.Service;
import org.springframework.validation.Errors;
import org.springframework.web.multipart.MultipartFile;

import java.util.Map;

@Slf4j
@RequiredArgsConstructor
@Service
public class UserServiceImpl implements UserService{
    private final UserRepository userRepository;
//    private final


    @Override
    public Map<String, String> validateHandling(Errors errors) {
        return null;
    }

    @Override
    public void signup(UserSignupRequestDTO userSignupRequestDTO, MultipartFile profileImg, PasswordEncoder passwordEncoder) {

    }

    @Override
    public UserResponseDTO login(UserLoginRequestDTO userLoginRequestDTO, PasswordEncoder passwordEncoder) {
        return null;
    }

    @Override
    public boolean checkEmailDuplicate(String email) {
        return false;
    }

    @Override
    public UserResponseDTO modifyUser(Long id, String nickname, MultipartFile profileImg) {
        return null;
    }

    @Override
    public void updatePassword(UserFindPWRequestDTO userFindPWRequestDTO, PasswordEncoder passwordEncoder) {

    }

    @Override
    public void findPassword(String email, String name, PasswordEncoder passwordEncoder) {

    }

    @Override
    public void confirmEmail(String email, String authToken) {

    }

    @Override
    public void reissueEmailAuth(String email, String authToken) {

    }
}
