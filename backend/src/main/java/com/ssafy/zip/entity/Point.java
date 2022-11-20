package com.ssafy.zip.entity;

import lombok.*;

import javax.persistence.*;
import java.time.LocalDateTime;

@Entity
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@Builder
@Table(name = "point")
public class Point {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    Long id;

    LocalDateTime reg;

    Long familyId;

    @ManyToOne
    @JoinColumn(name = "user_id")
    User user;

    Boolean isMission;

    @ManyToOne
    @JoinColumn(name = "code")
    CommonCode code;

    @ManyToOne
    @JoinColumn(name = "furniture_id")
    Furniture furniture;
}
