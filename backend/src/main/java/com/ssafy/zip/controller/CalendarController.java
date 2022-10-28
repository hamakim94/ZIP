package com.ssafy.zip.controller;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.CalendarRequestDTO;
import com.ssafy.zip.dto.response.CalendarResponseDTO;
import com.ssafy.zip.service.CalendarServcie;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.security.core.annotation.AuthenticationPrincipal;
import org.springframework.web.bind.annotation.*;
import springfox.documentation.annotations.ApiIgnore;

import java.util.Calendar;
import java.util.List;

@Slf4j
@Api(value = "일정 API",tags = {"일정 API"})
@RequiredArgsConstructor
@RestController
@RequestMapping("/api/calendar")
public class CalendarController {
    private final CalendarServcie calendarServcie;

    @GetMapping("/list")
    @ApiOperation(value = "일정 조회(월별)")
    public ResponseEntity<List<CalendarResponseDTO>> getListByMonth(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestParam int year, @RequestParam int month) {
        try{
            List<CalendarResponseDTO> results = calendarServcie.getListByMonth(user, year, month);
            return new ResponseEntity<>(results, HttpStatus.OK);
        } catch (Exception e){
            log.error("일정 조회 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }
    @GetMapping("/list/{day}")
    @ApiOperation(value = "일정 조회(일별)")
    public ResponseEntity<List<CalendarResponseDTO>> getListByDay(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestParam int year, @RequestParam int month, @PathVariable int day) {
        try{
            List<CalendarResponseDTO> results = calendarServcie.getListByDay(user, year, month, day);
            return new ResponseEntity<>(results, HttpStatus.OK);
        } catch (Exception e){
            log.error("일정 조회 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }
    @GetMapping("/detail/{calendarId}")
    @ApiOperation(value = "일정 조회(상세)")
    public ResponseEntity<CalendarResponseDTO> getScheduleDetail(@ApiIgnore @AuthenticationPrincipal UserDTO user, @PathVariable long calendarId) {
        try{
            CalendarResponseDTO result = calendarServcie.getScheduleDetail(user, calendarId);
            return new ResponseEntity<>(result, HttpStatus.OK);
        } catch (Exception e){
            log.error("일정 조회 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }
    @PostMapping("/add")
    @ApiOperation(value = "일정 추가")
    public ResponseEntity<CalendarResponseDTO> addSchedule(@ApiIgnore @AuthenticationPrincipal UserDTO user, @RequestBody CalendarRequestDTO calendarRequestDTO) {
        try{
            CalendarResponseDTO result = calendarServcie.addSchedule(user, calendarRequestDTO);
            return new ResponseEntity<>(result, HttpStatus.OK);
        } catch (Exception e){
            log.error("일정 추가 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }
    @PutMapping("/edit/{calendarId}")
    @ApiOperation(value = "일정 수정")
    public ResponseEntity<CalendarResponseDTO> editSchedule(@ApiIgnore @AuthenticationPrincipal UserDTO user, @PathVariable int calendarId, @RequestBody CalendarRequestDTO calendarRequestDTO) {
        try{
            CalendarResponseDTO result = calendarServcie.editSchedule(user, calendarId, calendarRequestDTO);
            return new ResponseEntity<>(result, HttpStatus.OK);
        } catch (Exception e){
            log.error("일정 수정 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }
    @DeleteMapping("/delete")
    @ApiOperation(value = "일정 삭제")
    public ResponseEntity<?> deleteSchedule(@ApiIgnore @AuthenticationPrincipal UserDTO user, @PathVariable long calendarId) {
        try{
            calendarServcie.deleteSchedule(user, calendarId);
            return new ResponseEntity<>(HttpStatus.OK);
        } catch (Exception e){
            log.error("일정 삭제 에러: " + e);
            return new ResponseEntity<>(HttpStatus.BAD_REQUEST);
        }
    }
}
