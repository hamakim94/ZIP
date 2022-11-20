package com.ssafy.zip.util;

import com.ssafy.zip.entity.CommonCode;
import lombok.Getter;
import lombok.RequiredArgsConstructor;
@Getter
@RequiredArgsConstructor
public enum CommonCodeEnum {

    LetterSentForEach("M0101",50),
    LetterSentForFamily("M0102",300),
    QnaAnsweredForEach("M0111",50),
    QnaAnsweredForFamily("M0112",300),
    BoardUploaded("M0121",25),
    BoardCommentUploaded("M0122",5),
    PictureUploaded("M1101",5),
    ScheduleRegistered("M1201",10)
    ;
    private final String code;
    private final Integer point;
}
