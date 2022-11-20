package com.ssafy.zip.entity;

import lombok.*;
import org.hibernate.annotations.Formula;

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

    String content;

    String image;

    LocalDateTime reg;

    @Formula("(select count(*) from comment c where c.board_id = id)")
    Integer commentCnt;
}
