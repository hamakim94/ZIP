package com.ssafy.zip.repository;

import com.ssafy.zip.entity.LetterFromAndTo;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface LetterFromAndToRepository extends CrudRepository<LetterFromAndTo, Long> {
}
