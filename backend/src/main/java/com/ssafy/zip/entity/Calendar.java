package com.ssafy.zip.entity;

import com.fasterxml.jackson.annotation.JsonManagedReference;
import lombok.*;

import javax.persistence.*;
import java.time.LocalDateTime;
import java.util.List;

@Entity
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@Builder
@Table(name = "calendar")
public class Calendar {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    Long id;

    LocalDateTime startDate;

    LocalDateTime endDate;

    String schedule;

    @JsonManagedReference
    @OneToMany(mappedBy = "calendar")
    List<CalendarUser> calendarUsers;

    @ManyToOne
    @JoinColumn(name = "family_id")
    Family family;

    public void editCalendar(LocalDateTime startDate, LocalDateTime endDate, String content){
        this.startDate = startDate;
        this.endDate = endDate;
        this.schedule = content;
    }
}
