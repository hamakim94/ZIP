package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Picture;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface PictureRepository extends JpaRepository<Picture, Long> {
    List<Picture> findAllByAlbum_FamilyIdOrderByAlbum(Long familyId);
}