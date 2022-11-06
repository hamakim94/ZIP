package com.ssafy.zip.repository;

import com.ssafy.zip.entity.FamilyFurniture;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.List;
@Repository
public interface FamilyFurnitureRepository extends JpaRepository<FamilyFurniture, Long> {
    List<FamilyFurniture> findAllByFamily_Id(Long familyId);
    Boolean existsByFurniture_Id(Long furnitureId);
    List<FamilyFurniture> findByFurniture_Position(Long position);
}
