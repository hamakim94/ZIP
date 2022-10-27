package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Album;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface AlbumRepository extends JpaRepository<Album, Long> {
    List<Album> findAllByFamily_Id(Long familyId);
    Album findByFamily_IdAndId(Long familyId, Long id);
}
