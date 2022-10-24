package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Letter;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.util.List;
@Repository
public interface LetterRepository extends JpaRepository<Letter, Long> {
    List<Letter> findByUser_IdOrTo(Long fromUserId, Long toUserId);
    List<Letter> findByUser_FamilyIdAndDateSentEquals(Long familyId, LocalDate today);
}
