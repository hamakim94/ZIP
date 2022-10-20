package com.ssafy.zip.config.security;


import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.security.core.Authentication;
import org.springframework.security.core.context.SecurityContextHolder;
import org.springframework.stereotype.Component;
import org.springframework.web.filter.OncePerRequestFilter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import java.io.IOException;

@Slf4j
@RequiredArgsConstructor
@Component
public class JwtAuthenticationFilter extends OncePerRequestFilter {
    private final JwtTokenProvider jwtTokenProvider;

    @Override
    protected void doFilterInternal(HttpServletRequest request, javax.servlet.http.HttpServletResponse response, javax.servlet.FilterChain filterChain) throws ServletException, IOException {
        String accessToken = jwtTokenProvider.getTokenFromRequest(request, "ACCESSTOKEN"); // request header에서 access token을 획득
        if (accessToken != null && jwtTokenProvider.validateToken(accessToken)) { // access token이 존재하고 유효하면
            Authentication authentication = jwtTokenProvider.getAuthentication(accessToken); // 인증처리된 Authentication을 생성
            SecurityContextHolder.getContext().setAuthentication(authentication); // 생성한 Authentication을 SecurityContextHolder에 저장
        }
    }
}
