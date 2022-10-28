package com.ssafy.zip.dto.response;

import com.ssafy.zip.dto.UserDTO;
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
public class CalendarResponseDTO {
    Long id;
    LocalDateTime startDate;
    LocalDateTime endDate;
    String content;
    List<SimpleUserResponseDTO> users;
}
