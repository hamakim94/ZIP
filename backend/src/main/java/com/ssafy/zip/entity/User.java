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
@Table(name = "user")
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
}
