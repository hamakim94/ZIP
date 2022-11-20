package com.ssafy.zip.repository;

import com.ssafy.zip.entity.CalendarUser;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface CalendarUserRepository extends JpaRepository<CalendarUser, Long> {
    void deleteAllByCalendarId(Long calendarId);
    void deleteByCalendarIdAndUserId(Long calendarId, Long userId);
}
