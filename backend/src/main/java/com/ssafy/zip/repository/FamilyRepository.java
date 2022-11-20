package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Family;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;
import org.springframework.transaction.annotation.Transactional;

public interface FamilyRepository extends JpaRepository<Family, Long> {
    Family findByCode(Integer code);
    @Transactional
    @Modifying
    @Query("update Family f set f.qna.id = f.qna.id+1")
    void UpdateQnaId();
}
