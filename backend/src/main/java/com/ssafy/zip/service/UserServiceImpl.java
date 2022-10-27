package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.UserFindPWRequestDTO;
import com.ssafy.zip.dto.request.UserLoginRequestDTO;
import com.ssafy.zip.dto.request.UserSignupRequestDTO;
import com.ssafy.zip.dto.response.FamilyResponseDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.entity.EmailAuth;
import com.ssafy.zip.entity.Family;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.repository.EmailAuthRepository;
import com.ssafy.zip.repository.EmailAuthRepositoryCustom;
import com.ssafy.zip.repository.FamilyRepository;
import com.ssafy.zip.repository.UserRepository;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.security.core.userdetails.UsernameNotFoundException;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;
import org.springframework.validation.Errors;
import org.springframework.validation.FieldError;
import org.springframework.web.multipart.MultipartFile;

import javax.mail.MessagingException;
import javax.security.auth.message.AuthException;
import java.io.UnsupportedEncodingException;
import java.security.SecureRandom;
import java.time.LocalDateTime;
import java.util.*;

@Slf4j
@RequiredArgsConstructor
@Service
public class UserServiceImpl implements UserService{
    private final UserRepository userRepository;
    private final EmailAuthRepository emailAuthRepository;
    private final EmailAuthRepositoryCustom emailAuthRepositoryCustom;
    private final EmailService emailService;
    private final AwsS3Service awsS3Service;
    private final FamilyRepository familyRepository;


    @Override
    @Transactional(readOnly = true)
    public Map<String, String> validateHandling(Errors errors) {
        Map<String, String> validatorResult = new HashMap<>();

        // 유효성 검사에 실패한 필드 목록을 받음
        for (FieldError error : errors.getFieldErrors()) {
            String validKeyName = String.format("valid_%s", error.getField());
            validatorResult.put(validKeyName, error.getDefaultMessage());
        }

        return validatorResult;
    }

    @Override
    public void signup(UserSignupRequestDTO userSignupRequestDTO, MultipartFile profileImg, PasswordEncoder passwordEncoder) throws Exception {
        User user = null;

        if(userSignupRequestDTO.getEmail() == null || userSignupRequestDTO.getPassword() == null){ // email, password null check
            log.info("email, password null");
            throw new Exception();
        }

        if(userRepository.existsByEmail(userSignupRequestDTO.getEmail())){ // email 중복 check
            log.info("email, nickname 중복");
            throw new Exception();
        }

        userSignupRequestDTO.setPassword(passwordEncoder.encode(userSignupRequestDTO.getPassword()));

        log.info("회원가입");
        String profileImgUrl = null;
        if (profileImg != null){
            List<MultipartFile> files = new ArrayList<>();
            files.add(profileImg);
            profileImgUrl = awsS3Service.uploadFiles("profiles", files).get(0)[0];
        }
        user = User.builder()
                .name(userSignupRequestDTO.getName())
                .nickname(userSignupRequestDTO.getNickname())

                .profileImg(profileImgUrl)
                .email(userSignupRequestDTO.getEmail())
                .password(userSignupRequestDTO.getPassword())
                .build();
        userRepository.save(user);

        // 이메일 verify 확인
        EmailAuth emailAuth = emailAuthRepository.save(
                new EmailAuth(userSignupRequestDTO.getEmail(), UUID.randomUUID().toString(), false)
        );

        emailService.sendVerifyMail(emailAuth.getEmail(), emailAuth.getAuthToken()); // 이메일 인증 메일 보내기

    }

    @Override
    public UserResponseDTO login(UserLoginRequestDTO userLoginRequestDTO, PasswordEncoder passwordEncoder) throws AuthException, Exception {
        User user = userRepository.findByEmail(userLoginRequestDTO.getEmail())
                .orElseThrow(() -> new NoSuchElementException("User : " + userLoginRequestDTO.getEmail() + " was not found"));

        if(!passwordEncoder.matches(userLoginRequestDTO.getPassword(), user.getPassword())){ // 비밀번호가 일치하지 않는 경우
            log.error("login 오류: 비밀번호 틀림");
            throw new AuthException("wrong password");
        }
        if(!user.getIsEmailVerified()){ // 이메일 인증이 안된 경우
            log.error("login 오류: 이메일 인증 안됨");
            throw new AuthException("not verified");
        }


        return userToUserDto(user);
    }

    @Override
    public boolean checkEmailDuplicate(String email) {
        boolean isEmailDupliated = userRepository.existsByEmail(email);

        if(isEmailDupliated) return false;

        return true;
    }

    @Transactional
    @Override
    public UserResponseDTO modifyUser(Long id, String nickname, MultipartFile profileImg, String familyName) throws Exception{
        User user = userRepository.findById(id)
                .orElseThrow(() -> new NoSuchElementException("User : " + id + " was not found"));

        String profileImgUrl = null;
        if (profileImg != null){
            List<MultipartFile> files = new ArrayList<>();
            files.add(profileImg);
            profileImgUrl = awsS3Service.uploadFiles("profiles", files).get(0)[0];
        }
        user.setProfileImgAndNickname(profileImgUrl, nickname);
        Family family = user.getFamily();
        family.modifyFamily(familyName, family.getMemberNum());
        familyRepository.save(family); // family update
        userRepository.save(user); // user update

        return userToUserDto(user);
    }

    @Override
    public void updatePassword(UserFindPWRequestDTO userFindPWRequestDTO, PasswordEncoder passwordEncoder) throws Exception{
        User user = userRepository.findById(userFindPWRequestDTO.getUserId())
                .orElseThrow(() -> new NoSuchElementException("User : " + userFindPWRequestDTO.getUserId() + " was not found"));

        if(passwordEncoder.matches(userFindPWRequestDTO.getPassword(), user.getPassword())){
            user.setPassword(passwordEncoder.encode(userFindPWRequestDTO.getNewPassword()));
            userRepository.save(user);
        } else {
            throw new Exception();
        }
    }

    @Override
    public void findPassword(String email, String name, PasswordEncoder passwordEncoder) throws Exception {
        User user = userRepository.findByEmail(email)
                .orElseThrow(() -> new NoSuchElementException("해당 이메일을 가진 사용자가 존재하지 않습니다."));

        if(user.getName().equals(name)){
            String newPassword = getRamdomPassword(10);
            user.setPassword(passwordEncoder.encode(newPassword));
            userRepository.save(user);
            emailService.sendNewPasswordMail(email, newPassword);
        } else {
            throw new Exception("사용자 이름이 일치하지 않습니다.");
        }
    }

    @Override
    public void confirmEmail(String email, String authToken) {
        EmailAuth emailAuth = emailAuthRepositoryCustom.findValidAuthByEmail(email, authToken, LocalDateTime.now()) // 이메일, authToken, 기간, 만료여부 check
                .orElseThrow(() -> new NoSuchElementException("EmailAuth : " + email + " was not found"));
        User user = userRepository.findByEmail(email).orElseThrow(() -> new NoSuchElementException("User : " + email + " was not found"));

        emailAuth.useToken(); // 토큰 만료시킴
        user.emailVerifiedSuccess(); // 유저 이메일 인증 완료 체크
        emailAuthRepository.save(emailAuth);
        userRepository.save(user);

    }

    @Override
    public void reissueEmailAuth(String email, String authToken) throws MessagingException, UnsupportedEncodingException {
        EmailAuth emailAuth = emailAuthRepository.findByEmailAndAuthToken(email, authToken)
                .orElseThrow(() -> new NoSuchElementException("EmailAuth : " + email + " was not found"));

        emailAuthRepository.delete(emailAuth); // 원래 있던 거 삭제

        EmailAuth newEmailAuth = emailAuthRepository.save(
                new EmailAuth(email, UUID.randomUUID().toString(), false)
        );

        emailService.sendVerifyMail(newEmailAuth.getEmail(), newEmailAuth.getAuthToken()); // 이메일 인증 메일 보내기

    }

    @Override
    public UserDTO loadUserByUsername(String userId) throws UsernameNotFoundException {
        User user = userRepository.findById(Long.parseLong(userId))
                .orElseThrow(() -> new NoSuchElementException("User : " + userId + " was not found"));

        return UserDTO.builder()
                .id(user.getId())
                .name(user.getName())
                .nickname(user.getNickname())
                .profileImg(user.getProfileImg())
                .email(user.getEmail())
                .familyId(user.getFamily()==null?null:user.getFamily().getId())
                .build();
    }

    @Override
    public FamilyResponseDTO getFamily(Long familyId) throws Exception {
        Family family = familyRepository.findById(familyId).get();
        return new FamilyResponseDTO(family.getId(), family.getCode(), family.getFamilyName(), family.getMemberNum(), family.getReg(),family.getQna().getId());
    }

    private UserResponseDTO userToUserDto(User user){
        Family family = user.getFamily();
        return UserResponseDTO.builder()
                .id(user.getId())
                .name(user.getName())
                .nickname(user.getNickname())
                .profileImg(user.getProfileImg())
                .hasFamily(user.getFamily()==null?false:true)
                .familyResponseDTO(new FamilyResponseDTO(family.getId(), family.getCode(), family.getFamilyName(), family.getMemberNum(), family.getReg(), family.getQna().getId()))
                .build();
    }

    public static String getRamdomPassword(int size) {
        char[] charSet1 = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        char[] charSet2 = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        char[] charSet3 = {'!', '@', '#', '$', '%', '^', '&' };

        StringBuffer sb = new StringBuffer();
        SecureRandom sr = new SecureRandom();
        sr.setSeed(new Date().getTime());

        int idx = 0;
        int len = charSet1.length;
        int size1 = sr.nextInt(size-2)+1;
        size-=size1;
        for (int i=0; i<size1; i++) {
            idx = sr.nextInt(len);
            sb.append(charSet1[idx]);
        }
        len = charSet2.length;
        size1 = sr.nextInt(size-1)+1;
        size-=size1;
        for (int i=0; i<size1; i++) {
            idx = sr.nextInt(len);
            sb.append(charSet2[idx]);
        }
        len = charSet3.length;
        for (int i=0; i<size; i++) {
            idx = sr.nextInt(len);
            sb.append(charSet3[idx]);
        }
        List<String> list = Arrays.asList(sb.toString().split(""));
        Collections.shuffle(list);
        sb = new StringBuffer();
        for (int i=0, n = list.size(); i<n; i++){
            sb.append(list.get(i));
        }
        return sb.toString();
    }
}
