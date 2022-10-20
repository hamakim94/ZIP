package com.ssafy.zip.repository;

import com.ssafy.zip.entity.CommonCode;
import org.springframework.data.jpa.repository.JpaRepository;

public interface CommonCodeRepository extends JpaRepository<CommonCode,Long> {
    CommonCode findByCode(String code);
}
