package com.ssafy.zip.repository;

import com.ssafy.zip.entity.FCMToken;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface FCMTokenRepository extends CrudRepository<FCMToken, Long> {
}
