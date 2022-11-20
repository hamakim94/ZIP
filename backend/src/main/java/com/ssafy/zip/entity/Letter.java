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
@Table(name = "letter")
public class Letter {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    Long id;

    String content;

    Boolean isRead;

    LocalDateTime reg;

    @ManyToOne
    @JoinColumn(name = "`from`")
    User from;

    @ManyToOne
    @JoinColumn(name = "`to`")
    User to;

    String stationery;
}
