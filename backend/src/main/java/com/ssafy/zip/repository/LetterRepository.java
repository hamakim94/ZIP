package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Letter;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.time.LocalDateTime;
import java.util.List;
@Repository
public interface LetterRepository extends JpaRepository<Letter, Long> {
    List<Letter> findByFrom_IdOrTo_Id(Long fromUserId, Long toUserId);
    List<Letter> findByFrom_FamilyIdAndRegAfter(Long familyId, LocalDateTime today);
}
