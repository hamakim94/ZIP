package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Point;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.stereotype.Repository;

import java.util.List;

@Repository
public interface PointRepository extends JpaRepository<Point,Long> {
    List<Point> findByFamilyId(Long familyId);
}
