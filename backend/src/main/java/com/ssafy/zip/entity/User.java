package com.ssafy.zip.entity;

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

    @Column(name = "profile_img")
    String profileImg;

    String email;

    String password;

    LocalDateTime reg;

    @Column(name = "is_email_verified")
    Boolean isEmailVerified;

    @ManyToOne
    @JoinColumn(name = "family_id")
    Family family;

    public void setProfileImgAndNickname(String profileImg, String nickname){
        this.profileImg = profileImg;
        this.nickname = nickname;
    }

    public void setPassword(String password){
        this.password = password;
    }

    public void emailVerifiedSuccess() {
        this.isEmailVerified = true;
    }
}
