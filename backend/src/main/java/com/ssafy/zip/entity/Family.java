package com.ssafy.zip.entity;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;
import org.hibernate.annotations.DynamicInsert;

import javax.persistence.*;
import java.time.LocalDateTime;

@Entity
@Getter
@NoArgsConstructor
@AllArgsConstructor
@Builder
@Table(name = "family")
@DynamicInsert
public class Family {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    Long id;

    Integer code;

    String familyName;

    Integer memberNum;

    LocalDateTime reg;

    @ManyToOne
    @JoinColumn(name = "qna_id")
    Qna qna;
}
