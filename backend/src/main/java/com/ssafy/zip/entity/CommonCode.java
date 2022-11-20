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
    String code;

    String content;

    Integer point;
}
