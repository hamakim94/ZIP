package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Board;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface BoardRepository extends JpaRepository<Board, Long> {
    List<Board> findByFamilyId(Long familyId);
}
