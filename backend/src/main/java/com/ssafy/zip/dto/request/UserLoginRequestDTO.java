package com.ssafy.zip.dto.request;

import lombok.*;

@Getter
@Setter
@Data
@NoArgsConstructor
@AllArgsConstructor
@Builder
@ToString
public class UserLoginRequestDTO {
    private String email;
    private String password;
}
