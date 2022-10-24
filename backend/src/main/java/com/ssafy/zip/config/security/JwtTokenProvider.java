package com.ssafy.zip.config.security;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.service.UserService;
import io.jsonwebtoken.*;
import io.jsonwebtoken.security.Keys;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.data.redis.core.RedisTemplate;
import org.springframework.data.redis.core.ValueOperations;
import org.springframework.security.authentication.UsernamePasswordAuthenticationToken;
import org.springframework.security.core.Authentication;
import org.springframework.stereotype.Component;

import javax.annotation.PostConstruct;
import javax.servlet.http.HttpServletRequest;
import java.security.Key;
import java.time.Duration;
import java.util.Date;

@Slf4j
@RequiredArgsConstructor
@Component
public class JwtTokenProvider {
    @Value("${jwt.secret}")
    private  String JWT_SECRET;
    private Key key;

    private long accessExpirationInMs = 60 * 10 * 1000L;
    private long refreshExpirationInMs = 60 * 60 * 24 * 180 * 1000L;


    private final UserService userService;
    private final RedisTemplate redisTemplate;

    @PostConstruct
    protected void init() {
        key = Keys.hmacShaKeyFor(JWT_SECRET.getBytes());
    }

    public String createAccessToken(Authentication auth) {

        Date now = new Date();
        Date validity = new Date(now.getTime() + accessExpirationInMs);

        return Jwts.builder()
                .setSubject(auth.getName())
                .setIssuedAt(now) // 발행시간
                .signWith(key, SignatureAlgorithm.HS256) // 암호화
                .setExpiration(validity) // 만료
                .compact();
    }

    public String createRefreshToken(Authentication auth){
        Date now = new Date();
        Date validity = new Date(now.getTime() + refreshExpirationInMs);

        String refreshToken = Jwts.builder()
                .setSubject(auth.getName())
                .setIssuedAt(now) // 발행시간
                .signWith(key, SignatureAlgorithm.HS256) // 암호화
                .setExpiration(validity) // 만료
                .compact();

        // redis에 저장
        ValueOperations<String, String> values = redisTemplate.opsForValue();
        values.set(auth.getName(), refreshToken, Duration.ofMillis(refreshExpirationInMs));
//        redisTemplate.setValues(userId.toString(), refreshToken, Duration.ofMillis(refreshTokenValidMilisecond));


        return refreshToken;
    }

    public String getTokenFromRequest(HttpServletRequest request, String tokenName) {
        return request.getHeader(tokenName);
    }

    public boolean validateToken(String token) {
        try {
            Jwts.parserBuilder().setSigningKey(key).build().parseClaimsJws(token);

            if (redisTemplate.opsForValue().get(token) != null && redisTemplate.opsForValue().get(token).equals("logout")){
                log.error("access token 만료 (logout된 token)");
                return false;
            }

            return true;
        } catch (MalformedJwtException e) {
            log.error("Invalid JWT token: {}", e.getMessage());
        } catch (ExpiredJwtException e) {
            log.error("Expired JWT token: {}", e.getMessage());
        } catch (UnsupportedJwtException e) {
            log.error("Unsupported JWT token: {}", e.getMessage());
        } catch (IllegalArgumentException e) {
            log.error("JWT claims string is empty.: {}", e.getMessage());
        }
        return false;
    }

    public String getUserPk(String token) {
        JwtParser jwtParser = Jwts.parserBuilder().setSigningKey(key).build();
        try {
            return jwtParser.parseClaimsJws(token).getBody().getSubject();
        } catch (ExpiredJwtException e) {
            return e.getClaims().getSubject();
        }
    }

    public Authentication getAuthentication(String token) {
        try{
            UserDTO userDTO = userService.loadUserByUsername(getUserPk(token));
            log.info("getAuthentication user: " + userDTO);

            return new UsernamePasswordAuthenticationToken(userDTO, null, userDTO.getAuthorities()); // 우리는 jwt 사용 -> credentials: null
        } catch (Exception e){
            log.error("getAuthentication user 못 가져옴");

            return null;
        }
    }

    public Long getExpiration(String accessToken) {
        try {
            Jws<Claims> claims = Jwts.parserBuilder().setSigningKey(key).build().parseClaimsJws(accessToken);
            // accessToken 남은 유효시간
            Date expiration = claims.getBody().getExpiration();
            // 현재 시간
            Long now = new Date().getTime();

            return (expiration.getTime() - now);
        } catch (MalformedJwtException e) {
            log.error("Invalid JWT token: {}", e.getMessage());
        } catch (ExpiredJwtException e) {
            log.error("Expired JWT token: {}", e.getMessage());
        } catch (UnsupportedJwtException e) {
            log.error("Unsupported JWT token: {}", e.getMessage());
        } catch (IllegalArgumentException e) {
            log.error("JWT claims string is empty.: {}", e.getMessage());
        }

        return -1L;
    }
}
