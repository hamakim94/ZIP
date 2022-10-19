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
@Table(name = "board")
public class Board {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    Long id;

    Long familyId;

    @ManyToOne
    @JoinColumn(name = "user_id")
    User user;

    String title;

    String content;

    LocalDateTime reg;
}
