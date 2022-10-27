package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.UserFindPWRequestDTO;
import com.ssafy.zip.dto.request.UserLoginRequestDTO;
import com.ssafy.zip.dto.request.UserSignupRequestDTO;
import com.ssafy.zip.dto.response.FamilyResponseDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import org.springframework.security.core.userdetails.UsernameNotFoundException;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.validation.Errors;
import org.springframework.web.multipart.MultipartFile;

import javax.mail.MessagingException;
import javax.security.auth.message.AuthException;
import java.io.UnsupportedEncodingException;
import java.util.Map;

public interface UserService {
    Map<String, String> validateHandling(Errors errors);
    void signup(UserSignupRequestDTO userSignupRequestDTO, MultipartFile profileImg, PasswordEncoder passwordEncoder) throws Exception;
    UserResponseDTO login(UserLoginRequestDTO userLoginRequestDTO, PasswordEncoder passwordEncoder) throws AuthException, Exception;
    boolean checkEmailDuplicate(String email);
    UserResponseDTO modifyUser(Long id, String nickname, MultipartFile profileImg) throws Exception;
    void updatePassword(UserFindPWRequestDTO userFindPWRequestDTO, PasswordEncoder passwordEncoder) throws Exception;
    void findPassword(String email, String name, PasswordEncoder passwordEncoder) throws Exception;
    void confirmEmail(String email, String authToken);
    void reissueEmailAuth(String email, String authToken) throws MessagingException, UnsupportedEncodingException;
    FamilyResponseDTO getFamily(Long familyId) throws Exception;
    UserDTO loadUserByUsername(String userId) throws UsernameNotFoundException;
}
