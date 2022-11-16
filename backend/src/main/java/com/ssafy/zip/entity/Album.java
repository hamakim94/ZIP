package com.ssafy.zip.entity;

import com.fasterxml.jackson.annotation.JsonManagedReference;
import lombok.*;

import javax.persistence.*;
import java.util.ArrayList;
import java.util.List;

@Entity
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@Builder
@Table(name = "album")
public class Album {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    Long id;

    @ManyToOne
    @JoinColumn(name = "family_id")
    Family family;

    String name;

    @JsonManagedReference
    @OneToMany(mappedBy = "album", cascade = CascadeType.ALL, orphanRemoval = true)
    List<Picture> pictures = new ArrayList<>();
}
