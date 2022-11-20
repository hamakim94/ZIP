package com.ssafy.zip.entity;

import com.fasterxml.jackson.annotation.JsonManagedReference;
import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;
import org.hibernate.annotations.DynamicInsert;

import javax.persistence.*;
import java.time.LocalDateTime;
import java.util.List;

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

    @JsonManagedReference
    @OneToMany(mappedBy = "family")
    List<User> users;

    public void modifyFamily(String familyName, Integer memberNum){
        this.familyName = familyName;
        this.memberNum = memberNum;
    }
}
