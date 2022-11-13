package com.ssafy.zip.entity;

import lombok.*;

import javax.persistence.*;

@Entity
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@Builder
@Table(name = "`character`")
public class Character {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    Long id;

    String image;

    String assetName;
}
