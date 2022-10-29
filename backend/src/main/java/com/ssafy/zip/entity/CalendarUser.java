package com.ssafy.zip.entity;

import com.fasterxml.jackson.annotation.JsonBackReference;
import lombok.*;

import javax.persistence.*;

@Entity
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@Builder
@Table(name = "calendar_user")
public class CalendarUser {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    Long id;
    @JsonBackReference
    @ManyToOne
    @JoinColumn(name = "calendar_id")
    Calendar calendar;

    @ManyToOne
    @JoinColumn(name = "user_id")
    User user;
}
