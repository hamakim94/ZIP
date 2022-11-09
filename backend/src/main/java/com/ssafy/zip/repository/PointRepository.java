package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Point;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.stereotype.Repository;

@Repository
public interface PointRepository extends JpaRepository<Point,Long> {
    @Query("select sum(c.point) from Point p join CommonCode c on p.code=c.code where p.familyId=:familyId")
    Integer getFamilyTotalPoint(Long familyId);
}
