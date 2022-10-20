package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Qna;
import com.ssafy.zip.entity.QnaLog;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface QnaLogRepository extends JpaRepository<QnaLog, Long> {
    List<QnaLog> findByFamilyId(Long familyId);
    List<QnaLog> findByFamilyIdAndQnaId(Long familyId, Long QnaId);
}
