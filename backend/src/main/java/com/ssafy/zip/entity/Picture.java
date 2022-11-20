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
@Table(name = "picture")
@DynamicInsert
public class Picture {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    Long id;

    @ManyToOne
    @JoinColumn(name = "user_id")
    User user;

    @JsonBackReference
    @ManyToOne
    @JoinColumn(name = "album_id")
    Album album;

    String directory;

    String fileName;

    LocalDateTime reg;
}
