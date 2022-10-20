package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Letter;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface LetterRepository extends JpaRepository<Letter, Long> {
    List<Letter> findByUserIdOrTo(Long fromUserId, Long toUserId);
}
