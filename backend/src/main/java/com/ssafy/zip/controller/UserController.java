package com.ssafy.zip.controller;

import com.ssafy.zip.config.security.JwtTokenProvider;
import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.UserModifyRequestDTO;
import com.ssafy.zip.dto.request.UserFindPWRequestDTO;
import com.ssafy.zip.dto.request.UserLoginRequestDTO;
import com.ssafy.zip.dto.request.UserSignupRequestDTO;
import com.ssafy.zip.dto.response.CharacterResponseDTO;
import com.ssafy.zip.dto.response.NotificationResponseDTO;
import com.ssafy.zip.dto.response.UserResponseDTO;
import com.ssafy.zip.service.NotificationService;
import com.ssafy.zip.service.PointService;
import com.ssafy.zip.service.UserService;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
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
import springfox.documentation.annotations.ApiIgnore;

import javax.security.auth.message.AuthException;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.validation.Valid;
import java.util.List;
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
    private final NotificationService notificationService;
    private final PointService pointService;

    @PostMapping("/signup")
    @ApiOperation(value = "사용자 회원가입") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<?> userSignup(@Valid @RequestBody UserSignupRequestDTO userSignupRequestDTO,@ApiIgnore Errors errors){
        if(errors.hasErrors()){ // 유효성 검사 실패
            Map<String, String> validatorResult = userService.validateHandling(errors);
            for (String key : validatorResult.keySet()) {
                log.error(key + ": " + validatorResult.get(key));
            }

            log.error("유효성 검사 실패");

            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }

        try{
            userService.signup(userSignupRequestDTO, passwordEncoder);
        } catch (Exception e){
            log.error("회원가입 오류");
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }

        log.info("회원가입 완료");
        return new ResponseEntity<>(HttpStatus.OK);
    }

    @PostMapping("/login")
    @ApiOperation(value = "로그인") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<UserResponseDTO> login(@RequestBody UserLoginRequestDTO userLoginRequestDTO){
        try{
            UserResponseDTO userDTO = userService.login(userLoginRequestDTO, passwordEncoder);

            Authentication auth = new UsernamePasswordAuthenticationToken(userDTO.getId(), userLoginRequestDTO.getPassword());
            String accessToken = jwtTokenProvider.createAccessToken(auth); // access token 발급
            String refreshToken = jwtTokenProvider.createRefreshToken(auth); // refresh token 발급

            return ResponseEntity.ok().header("ACCESSTOKEN", accessToken).header("REFRESHTOKEN", refreshToken).body(userDTO);
        } catch (AuthException e) {
            log.error("로그인 에러: " + e);
            if (e.getMessage().equals("not verified")) return new ResponseEntity<>(HttpStatus.NETWORK_AUTHENTICATION_REQUIRED);
            else if (e.getMessage().equals("wrong password")) return new ResponseEntity<>(HttpStatus.NON_AUTHORITATIVE_INFORMATION);
            else return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        } catch (Exception e){
            log.error("로그인 에러: " + e);
            return new ResponseEntity<>(HttpStatus.UNAUTHORIZED);
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
        notificationService.eraseToken(user);
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
    public ResponseEntity<UserResponseDTO> editProfiles(@ApiIgnore @AuthenticationPrincipal UserDTO user,
                                                        @RequestBody UserModifyRequestDTO userModifyRequestDTO){
        UserResponseDTO changedUserDTO;

        try {
            changedUserDTO = userService.modifyUser(user.getId(), userModifyRequestDTO.nickname(), userModifyRequestDTO.familyName(), userModifyRequestDTO.characterId());
        } catch (Exception e){
            log.error("userProfileEdit user 조회 실패 : " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }

        return new ResponseEntity<>(changedUserDTO, HttpStatus.OK);
    }

    @GetMapping("/profiles")
    @ApiOperation(value = "회원정보 조회") // 요청 URL에 매핑된 API에 대한 설명
    public ResponseEntity<UserResponseDTO> getProfiles(@ApiIgnore @AuthenticationPrincipal UserDTO user){
        try{
            ;
            UserResponseDTO userResponseDTO = UserResponseDTO.builder()
                    .id(user.getId())
                    .hasFamily(user.getFamilyId()==null?false:true)
                    .name(user.getName())
                    .profileImg(user.getProfileImg())
                    .nickname(user.getNickname())
                    .family(userService.getFamily(user.getFamilyId()))
                    .build();
            return new ResponseEntity<>(userResponseDTO, HttpStatus.OK);
        } catch (Exception e) {
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
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
        return new ResponseEntity<>(HttpStatus.GONE);
    }

    //TODO: 리다이렉트 위치 정하기 or 페이지 만들기
    @GetMapping("/confirm-email")
    @ApiOperation(value = "이메일 확인(계정 활성화)")
    public ResponseEntity<?> emailConfirm(@RequestParam(value = "email") String email, @RequestParam(value = "authToken") String authToken, HttpServletResponse response) {
        boolean confirm = true;

        try {
            userService.confirmEmail(email, authToken);
            response.sendRedirect("https://k7a407.p.ssafy.io/openApp");
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

    @PostMapping("/notification")
    @ApiOperation(value = "FCM 토큰 설정")
    ResponseEntity<?> setTokenForNotification(@ApiIgnore@AuthenticationPrincipal UserDTO userDTO, @RequestParam String token){
        notificationService.setToken(userDTO,token);
        return ResponseEntity.ok().build();
    }

    @GetMapping("/notification")
    @ApiOperation(value = "안 읽은 알림 리스트")
    ResponseEntity<List<NotificationResponseDTO>> getNotifications(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO){
        return ResponseEntity.ok(notificationService.getNotifications(userDTO));
    }

    @PostMapping("/notification/{notificationId}")
    @ApiOperation(value = "알림 읽음")
    ResponseEntity<?> readNotification(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO, @PathVariable Long notificationId){
        notificationService.readNotification(userDTO, notificationId);
        return ResponseEntity.ok().build();
    }

    @PostMapping("/notification/all")
    @ApiOperation(value = "알림 전체 읽음")
    ResponseEntity<?> readAllNotification(@ApiIgnore @AuthenticationPrincipal UserDTO userDTO){
        notificationService.readAllNotifications(userDTO);
        return ResponseEntity.ok().build();
    }

    @GetMapping("/points")
    @ApiOperation(value = "가족 보유 포인트 조회")
    ResponseEntity<Integer> getFamilyPoint(@ApiIgnore@AuthenticationPrincipal UserDTO userDTO){
        return ResponseEntity.ok(pointService.getfamilyPoint(userDTO));
    }

    @GetMapping("/characters")
    @ApiOperation(value = "캐릭터 리스트 가져오기")
    ResponseEntity<List<CharacterResponseDTO>> getCharacterList(){
        return ResponseEntity.ok(userService.getCharacterList());
    }
}
