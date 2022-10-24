package com.ssafy.zip.repository;

import com.ssafy.zip.entity.EmailAuth;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.Optional;

@Repository
public interface EmailAuthRepository  extends JpaRepository<EmailAuth, Long> {
    Optional<EmailAuth> findByEmailAndAuthToken(String email, String authToken);
}
