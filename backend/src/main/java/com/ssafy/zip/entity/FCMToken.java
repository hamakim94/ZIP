package com.ssafy.zip.entity;

import lombok.AllArgsConstructor;
import lombok.Getter;
import org.springframework.data.annotation.Id;
import org.springframework.data.redis.core.RedisHash;

@AllArgsConstructor
@Getter
@RedisHash("FCMToken")
public class FCMToken {
    @Id
    Long userId;
    String token;
}
