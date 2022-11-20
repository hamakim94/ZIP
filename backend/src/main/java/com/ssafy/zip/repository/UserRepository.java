package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Family;
import com.ssafy.zip.entity.User;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.List;
import java.util.Optional;

@Repository
public interface UserRepository extends JpaRepository<User, Long> {
    Optional<User> findByEmail(String email);
    boolean existsByEmail(String email);

    List<User> findByFamily_Id(Long familyId);
}
