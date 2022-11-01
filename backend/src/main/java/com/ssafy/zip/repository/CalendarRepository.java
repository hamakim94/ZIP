package com.ssafy.zip.repository;

import com.ssafy.zip.entity.Calendar;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.stereotype.Repository;

import java.time.LocalDateTime;
import java.util.List;
@Repository
public interface CalendarRepository extends JpaRepository<Calendar, Long> {
    @Query("select c from Calendar c where c.family.id = :familyId and ((c.startDate >= :date1 and c.startDate < :date2) or (c.endDate >= :date1 and c.endDate < :date2))")
    List<Calendar> findAllCalendar(Long familyId, LocalDateTime date1, LocalDateTime date2);
}
