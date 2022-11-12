package com.ssafy.zip.entity;

import com.fasterxml.jackson.annotation.JsonBackReference;
import lombok.*;
import org.hibernate.annotations.DynamicInsert;

import javax.persistence.*;
import java.time.LocalDateTime;

@Entity
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@Builder
@Table(name = "user")
@DynamicInsert
public class User {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    Long id;

    String name;

    String nickname;

    @ManyToOne
    @JoinColumn(name = "profile_img")
    Character profileImg;

    String email;

    String password;

    LocalDateTime reg;

    @Column(name = "is_email_verified")
    Boolean isEmailVerified;

    @JsonBackReference
    @ManyToOne
    @JoinColumn(name = "family_id")
    Family family;


    public void setPassword(String password){
        this.password = password;
    }

    public void emailVerifiedSuccess() {
        this.isEmailVerified = true;
    }
}
