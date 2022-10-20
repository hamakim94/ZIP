package com.ssafy.zip.repository;

import com.ssafy.zip.entity.User;
import org.springframework.data.jpa.repository.JpaRepository;

public interface UserRepository extends JpaRepository<User,Long> {
}
