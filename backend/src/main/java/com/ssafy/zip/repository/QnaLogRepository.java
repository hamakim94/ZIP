package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Qna;
import com.ssafy.zip.entity.QnaLog;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.List;
@Repository
public interface QnaLogRepository extends JpaRepository<QnaLog, Long> {
    List<QnaLog> findByFamilyId(Long familyId);
    List<QnaLog> findByFamilyIdAndQnaId(Long familyId, Long anaId);
    Boolean existsByUser_IdAndQna_id(Long userId, Long qnaId);
}
