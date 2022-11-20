package com.ssafy.zip.entity;

import lombok.AllArgsConstructor;
import lombok.Getter;
import org.springframework.data.annotation.Id;
import org.springframework.data.redis.core.RedisHash;

@AllArgsConstructor
@Getter
@RedisHash("Letter")
public class LetterFromAndTo {
    @Id
    private Long from;
    private Long to;
}
