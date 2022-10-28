package com.ssafy.zip.dto.request;

import lombok.*;

import java.time.LocalDateTime;
import java.util.List;

@Getter
@Setter
@Data
@NoArgsConstructor
@AllArgsConstructor
@Builder
@ToString
public class CalendarRequestDTO {
    LocalDateTime startDate;
    LocalDateTime endDate;
    String content;
    List<Long> userIds;
}
