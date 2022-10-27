package com.ssafy.zip.dto.response;

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
    String profileImg;
    boolean hasFamily;
    FamilyResponseDTO familyResponseDTO;
}