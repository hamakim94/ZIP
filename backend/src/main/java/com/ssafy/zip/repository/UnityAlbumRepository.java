package com.ssafy.zip.repository;

import com.ssafy.zip.entity.UnityAlbum;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.List;
import java.util.Optional;

@Repository
public interface UnityAlbumRepository extends JpaRepository<UnityAlbum, Long> {
    List<UnityAlbum> findByFamilyId(Long familyId);
    Optional<UnityAlbum> findByFamilyIdAndPosition(Long familyId, Integer position);
}
