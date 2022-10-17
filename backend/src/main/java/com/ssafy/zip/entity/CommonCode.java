package com.ssafy.zip.entity;

import lombok.*;

import javax.persistence.*;

@Entity
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@Builder
@Table(name = "common_code")
public class CommonCode {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    String code;

    String content;

    Integer point;
}
