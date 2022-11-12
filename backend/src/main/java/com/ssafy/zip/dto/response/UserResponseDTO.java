package com.ssafy.zip.dto.response;

import com.ssafy.zip.entity.Character;
import lombok.*;

@Getter
@Setter
@Data
@NoArgsConstructor
@AllArgsConstructor
@Builder
@ToString
public class UserResponseDTO {
    Long id;
    String name;
    String nickname;
    Character profileImg;
    boolean hasFamily;
    FamilyResponseDTO family;
}