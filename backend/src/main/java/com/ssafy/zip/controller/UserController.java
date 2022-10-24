package com.ssafy.zip.controller;

import com.ssafy.zip.config.security.JwtTokenProvider;
import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.UserFindPWRequestDTO;
import com.ssafy.zip.dto.request.UserLoginRequestDTO;
import com.ssafy.zip.dto.request.UserSignupRequestDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.service.UserService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import lombok.Getter;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.data.redis.core.RedisTemplate;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.security.authentication.UsernamePasswordAuthenticationToken;
import org.springframework.security.core.Authentication;
import org.springframework.security.core.annotation.AuthenticationPrincipal;
import org.springframework.security.core.context.SecurityContextHolder;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.validation.Errors;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.multipart.MultipartFile;
import springfox.documentation.annotations.ApiIgnore;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.validation.Valid;
import java.util.Map;
import java.util.concurrent.TimeUnit;

@Slf4j
@Api(value = "사용자 API",tags = {"사용자 API"})
@RequiredArgsConstructor
@RestController
@RequestMapping("/api/users")
public class UserController {

    private final PasswordEncoder passwordEncoder;
    private final JwtTokenProvider jwtTokenProvider;
    private final UserService userService;
    private final RedisTemplate redisTemplate;

    @PostMapping("/signup")
    @ApiOperation(value = "사용자 회원가입") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<?> userSignup(@RequestPart(value = "profileImg", required = false) MultipartFile profileImg, @Valid @RequestPart(value="userDTO") UserSignupRequestDTO userSignupRequestDTO, Errors errors){
        if(errors.hasErrors()){ // 유효성 검사 실패
            Map<String, String> validatorResult = userService.validateHandling(errors);
            for (String key : validatorResult.keySet()) {
                log.error(key + ": " + validatorResult.get(key));
            }

            log.error("유효성 검사 실패");

            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }

        try{
            userService.signup(userSignupRequestDTO, profileImg, passwordEncoder);
        } catch (Exception e){
            log.error("회원가입 오류");
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }

        log.info("회원가입 완료");
        return new ResponseEntity<>(HttpStatus.OK);
    }

    @PostMapping("/login")
    @ApiOperation(value = "로그인") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<?> login(@RequestBody UserLoginRequestDTO userLoginRequestDTO){
        try{
            UserResponseDTO userDTO = userService.login(userLoginRequestDTO, passwordEncoder);

            Authentication auth = new UsernamePasswordAuthenticationToken(userDTO.getId(), userLoginRequestDTO.getPassword());
            String accessToken = jwtTokenProvider.createAccessToken(auth); // access token 발급
            String refreshToken = jwtTokenProvider.createRefreshToken(auth); // refresh token 발급

            return ResponseEntity.ok().header("ACCESSTOKEN", accessToken).header("REFRESHTOKEN", refreshToken).body(userDTO);
        } catch (Exception e){
            log.error("로그인 에러: " + e);
            return new ResponseEntity<>("invalid ID", HttpStatus.UNAUTHORIZED);
        }
    }

    @GetMapping("/logout")
    @ApiOperation(value = "로그아웃") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<?> logout(HttpServletRequest request,@ApiIgnore @AuthenticationPrincipal UserDTO user){
        // Redis에 해당 user id로 저장된 refresh token이 있을 경우 삭제
        if (redisTemplate.opsForValue().get(user.getId().toString()) != null) {

            redisTemplate.delete(user.getId().toString());
        }

        String accessToken = jwtTokenProvider.getTokenFromRequest(request, "ACCESSTOKEN");

        // 해당 access token의 유효시간 가지고 와서 logout된 access token 저장
        Long expiration = jwtTokenProvider.getExpiration(accessToken);
        redisTemplate.opsForValue().set(accessToken, "logout", expiration, TimeUnit.MILLISECONDS);

        return ResponseEntity.ok().build();
    }

    @GetMapping("/duplication-check")
    @ApiOperation(value = "이메일 중복 체크") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<?> duplicationCheck(@RequestParam String email){
        if(userService.checkEmailDuplicate(email)) return new ResponseEntity<>(HttpStatus.OK);

        log.error("email 중복");
        return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
    }

    @PutMapping("/profiles")
    @ApiOperation(value = "회원정보 수정") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<?> editProfiles(@ApiIgnore @AuthenticationPrincipal UserDTO user,
                                          @RequestPart(value = "profileImg", required = false) MultipartFile profileImg, @Valid @RequestPart String nickname){
        UserResponseDTO changedUserDTO;

        try {
            changedUserDTO = userService.modifyUser(user.getId(), nickname, profileImg);
        } catch (Exception e){
            log.error("userProfileEdit user 조회 실패");
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }

        return new ResponseEntity<>(changedUserDTO, HttpStatus.OK);
    }

    @GetMapping("/profiles")
    @ApiOperation(value = "회원정보 조회") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<?> getProfiles(@ApiIgnore @AuthenticationPrincipal UserDTO user){
        UserResponseDTO userResponseDTO = UserResponseDTO.builder()
                .id(user.getId())
                .hasFamily(user.getFamilyId()==null?false:true)
                .name(user.getName())
                .profileImg(user.getProfileImg())
                .nickname(user.getNickname())
                .build();
        return new ResponseEntity<>(userResponseDTO, HttpStatus.OK);
    }

    @PutMapping("/password")
    @ApiOperation(value = "비밀번호 변경") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<?> changePassword(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestBody UserFindPWRequestDTO userFindPWRequestDTO){
        if(user.getId() == userFindPWRequestDTO.getUserId()){
            try {
                userService.updatePassword(userFindPWRequestDTO, passwordEncoder);
                return new ResponseEntity<>(HttpStatus.OK);
            } catch (Exception e){
                log.error("비밀번호 변경 오류: 비밀번호가 일치하지 않음");
                return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
            }
        }
        log.error("사용자 id가 일치하지 않습니다.");
        return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
    }

    @GetMapping("/password")
    @ApiOperation(value = "비밀번호 찾기") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<?> findPassword(@RequestParam String email, @RequestParam String name){
        try {
            userService.findPassword(email, name, passwordEncoder);
            return new ResponseEntity<>(HttpStatus.OK);
        } catch (Exception e){
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }

    @PostMapping("/reissue")
    @ApiOperation(value = "토큰 재발행") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<?> reissue(HttpServletRequest request, HttpServletResponse response){
        String accessToken = jwtTokenProvider.getTokenFromRequest(request, "ACCESSTOKEN");
        String refreshToken = jwtTokenProvider.getTokenFromRequest(request, "REFRESHTOKEN");
        String userId = jwtTokenProvider.getUserPk(accessToken);

        if(refreshToken.equals(redisTemplate.opsForValue().get(userId)) && jwtTokenProvider.validateToken(refreshToken)){ // refresh token이 유효하면
            Authentication auth = jwtTokenProvider.getAuthentication(accessToken);
            accessToken = jwtTokenProvider.createAccessToken(auth); // accessToken 재발급
            response.setHeader("accesstoken", accessToken);
            auth = jwtTokenProvider.getAuthentication(accessToken);
            SecurityContextHolder.getContext().setAuthentication(auth); // authentication 재저장

            log.info("token 재발급 성공");
            return new ResponseEntity<>(HttpStatus.OK);
        }
        log.error("token 재발급 실패");
        return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
    }

    //TODO: 리다이렉트 위치 정하기 or 페이지 만들기
    @GetMapping("/confirm-email")
    @ApiOperation(value = "이메일 확인(계정 활성화)")
    public ResponseEntity<?> emailConfirm(@RequestParam(value = "email") String email, @RequestParam(value = "authToken") String authToken, HttpServletResponse response) {
        boolean confirm = true;

        try {
            userService.confirmEmail(email, authToken);
//            response.sendRedirect("https://j7a708.p.ssafy.io/success");
        } catch (Exception e){
            try {
//                response.sendRedirect("https://j7a708.p.ssafy.io/fail");
                log.error("email auth token 기간 만료");
                confirm = false;
            } catch (Exception e2){
                log.error("fail page redirect 실패: " + e2);
                return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
            }
        }

        if(!confirm){
            try {
                log.info("이메일 재전송");
                userService.reissueEmailAuth(email, authToken);
            } catch (Exception e){
                log.error("이메일 재전송 실패");
                return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
            }
        }

        return new ResponseEntity<>(HttpStatus.OK);
    }
}
