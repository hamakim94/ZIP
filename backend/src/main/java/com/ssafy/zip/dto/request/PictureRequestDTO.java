package com.ssafy.zip.dto.request;

import lombok.*;

import javax.annotation.Nullable;

@Getter
@Setter
@Data
@NoArgsConstructor
@AllArgsConstructor
@Builder
@ToString
public class PictureRequestDTO {
    Long albumId;
    Long userId;
    Long pictureId;
}
