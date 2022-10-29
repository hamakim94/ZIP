package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.CalendarRequestDTO;
import com.ssafy.zip.dto.response.CalendarResponseDTO;
import com.ssafy.zip.dto.response.SimpleUserResponseDTO;
import com.ssafy.zip.entity.Calendar;
import com.ssafy.zip.entity.CalendarUser;
import com.ssafy.zip.entity.Family;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.repository.CalendarRepository;
import com.ssafy.zip.repository.CalendarUserRepository;
import com.ssafy.zip.repository.UserRepository;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

@Slf4j
@Service
@RequiredArgsConstructor
public class CalendarServiceImpl implements CalendarServcie {
    private CalendarRepository calendarRepository;
    private CalendarUserRepository calendarUserRepository;
    private final UserRepository userRepository;

    @Override
    public List<CalendarResponseDTO> getListByMonth(UserDTO userDTO, int year, int month) throws Exception {
        List<CalendarResponseDTO> results = new ArrayList<>();

        User user = userRepository.findById(userDTO.getId()).get();
        Family family = user.getFamily();

        LocalDateTime startTarget = LocalDateTime.of(year, month, 1, 0, 0);
        LocalDateTime endTarget = startTarget.plusMonths(1);

        List<Calendar> calendars = calendarRepository.findAllCalendar(family.getId(), startTarget, endTarget);

        for (Calendar calendar : calendars) {
            results.add(calendarToCalendarResponseDTO(calendar));
        }

        return results;
    }

    @Override
    public List<CalendarResponseDTO> getListByDay(UserDTO userDTO, int year, int month, int day) throws Exception {
        List<CalendarResponseDTO> results = new ArrayList<>();

        User user = userRepository.findById(userDTO.getId()).get();
        Family family = user.getFamily();

        LocalDateTime startTarget = LocalDateTime.of(year, month, day, 0, 0);
        LocalDateTime endTarget = startTarget.plusDays(1);

        List<Calendar> calendars = calendarRepository.findAllCalendar(family.getId(), startTarget, endTarget);

        for (Calendar calendar : calendars) {
            results.add(calendarToCalendarResponseDTO(calendar));
        }

        return results;
    }

    @Override
    public CalendarResponseDTO getScheduleDetail(UserDTO userDTO, long calendarId) throws Exception {
        User user = userRepository.findById(userDTO.getId()).get();
        Family family = user.getFamily();

        Calendar calendar = calendarRepository.findById(calendarId).get();
        if (calendar.getFamily().getId() != family.getId()) throw new Exception();

        return calendarToCalendarResponseDTO(calendar);
    }

    @Transactional
    @Override
    public CalendarResponseDTO addSchedule(UserDTO userDTO, CalendarRequestDTO calendarRequestDTO) throws Exception {
        CalendarResponseDTO result;

        User user = userRepository.findById(userDTO.getId()).get();
        Family family = user.getFamily();

        Calendar calendar = Calendar.builder()
                .family(family)
                .startDate(calendarRequestDTO.getStartDate())
                .endDate(calendarRequestDTO.getEndDate())
                .schedule(calendarRequestDTO.getContent())
                .build();
        calendarRepository.save(calendar);

        List<CalendarUser> calendarUserList = new ArrayList<>();
        for (Long id: calendarRequestDTO.getUserIds()) {
            calendarUserList.add(CalendarUser.builder()
                    .user(userRepository.getReferenceById(id))
                    .calendar(calendar)
                    .build());

        }
        calendarUserRepository.saveAll(calendarUserList);
        return null;
    }

    @Transactional
    @Override
    public CalendarResponseDTO editSchedule(UserDTO userDTO, long calendarId, CalendarRequestDTO calendarRequestDTO) throws Exception {
        List<CalendarResponseDTO> results = new ArrayList<>();

        User user = userRepository.findById(userDTO.getId()).get();
        Family family = user.getFamily();

        Calendar calendar = calendarRepository.findById(calendarId).get();

        if (calendar.getFamily().getId() != family.getId()) throw new Exception();

        calendar.editCalendar(calendarRequestDTO.getStartDate(), calendarRequestDTO.getEndDate(), calendarRequestDTO.getContent());
        calendarRepository.save(calendar);
        HashSet<Long> existSet = new HashSet<>();
        HashSet<Long> requestSet = new HashSet<>();
        for (CalendarUser calendarUser : calendar.getCalendarUsers()) {
            existSet.add(calendarUser.getUser().getId());
        }
        for (Long id: calendarRequestDTO.getUserIds()) {
            requestSet.add(id);
        }
        for (Long userId: existSet) {
            if (requestSet.contains(userId)) continue;
            else calendarUserRepository.deleteByCalendarIdAndUserId(calendarId, userId);
        }
        List<CalendarUser> calendarUserList = new ArrayList<>();
        for (Long userId: requestSet) {
            if (existSet.contains(userId)) continue;
            else calendarUserList.add(CalendarUser.builder()
                    .user(userRepository.getReferenceById(userId))
                    .calendar(calendar)
                    .build());
        }
        calendarUserRepository.saveAll(calendarUserList);

        return null;
    }

    @Transactional
    @Override
    public void deleteSchedule(UserDTO userDTO, long calendarId) throws Exception {
        calendarRepository.deleteById(calendarId);
    }

    private CalendarResponseDTO calendarToCalendarResponseDTO(Calendar calendar){
        List<SimpleUserResponseDTO> list = new ArrayList<>();
        for (CalendarUser calendarUser: calendar.getCalendarUsers()) {
            SimpleUserResponseDTO.builder()
                    .id(calendarUser.getUser().getId())
                    .name(calendarUser.getUser().getName())
                    .nickname(calendarUser.getUser().getNickname())
                    .profileImg(calendarUser.getUser().getProfileImg())
                    .build();
        }
        return CalendarResponseDTO.builder()
                .id(calendar.getId())
                .startDate(calendar.getStartDate())
                .endDate(calendar.getEndDate())
                .content(calendar.getSchedule())
                .users(list)
                .build();
    }
}
