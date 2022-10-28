package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.CalendarRequestDTO;
import com.ssafy.zip.dto.response.CalendarResponseDTO;

import java.util.List;

public interface CalendarServcie {
    List<CalendarResponseDTO> getListByMonth(UserDTO user, int year, int month) throws Exception;
    List<CalendarResponseDTO> getListByDay(UserDTO user, int year, int month, int day) throws Exception;
    CalendarResponseDTO getScheduleDetail(UserDTO user, long calendarId) throws Exception;
    CalendarResponseDTO addSchedule(UserDTO user, CalendarRequestDTO calendarRequestDTO) throws Exception;
    CalendarResponseDTO editSchedule(UserDTO user, long calendarId, CalendarRequestDTO calendarRequestDTO) throws Exception;
    void deleteSchedule(UserDTO user, long calendarId) throws Exception;

}
