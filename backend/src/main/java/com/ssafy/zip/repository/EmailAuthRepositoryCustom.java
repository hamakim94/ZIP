package com.ssafy.zip.repository;

import com.ssafy.zip.entity.EmailAuth;

import java.time.LocalDateTime;
import java.util.Optional;

public interface EmailAuthRepositoryCustom {
    Optional<EmailAuth> findValidAuthByEmail(String email, String authToken, LocalDateTime currentTime);
}
