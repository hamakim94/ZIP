package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Family;
import org.springframework.data.jpa.repository.JpaRepository;

public interface FamilyRepository extends JpaRepository<Family, Long> {
    Family findByCode(Integer code);
}
