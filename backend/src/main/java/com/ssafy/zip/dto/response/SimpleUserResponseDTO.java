package com.ssafy.zip.dto.response;

import lombok.*;
import com.ssafy.zip.entity.Character;

@Getter
@Setter
@Data
@NoArgsConstructor
@AllArgsConstructor
@Builder
@ToString
public class SimpleUserResponseDTO {
    Long id;
    String name;
    String nickname;
    Character profileImg;
}
