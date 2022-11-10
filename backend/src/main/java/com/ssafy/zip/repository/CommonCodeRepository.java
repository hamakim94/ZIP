package com.ssafy.zip.repository;

import com.ssafy.zip.entity.CommonCode;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.Optional;

@Repository
public interface CommonCodeRepository extends JpaRepository<CommonCode,Long> {
    Optional<CommonCode> findByCode(String code);
}
