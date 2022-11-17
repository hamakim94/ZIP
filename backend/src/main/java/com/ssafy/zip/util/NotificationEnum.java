package com.ssafy.zip.util;

import com.ssafy.zip.entity.Family;
import com.ssafy.zip.entity.Picture;
import lombok.RequiredArgsConstructor;
import org.springframework.scheduling.annotation.Scheduled;

@RequiredArgsConstructor
public enum NotificationEnum {

    QnaAnswered("%s님이 오늘의 백문백답을 등록했습니다. 확인해보세요!","myapp://zip.com/qna/%s"),
    BoardUploaded("%s님이 게시글을 등록했습니다. 확인해보세요!","myapp://zip.com/board/%s"),
    PictureUploaded("%s님이 사진을 올렸습니다. 확인해보세요!","myapp://zip.com/board"),
    FamilyEnrolled("%s님이 가족이 되었습니다. 확인해보세요!","myapp://zip.com/home"),
    ScheduleRegistered("%s님이 일정을 등록했습니다. 확인해보세요!","myapp://zip.com/calendar"),
    QnaMissionAccomplished("가족과 함께하는 ‘오늘의 백문백답’ 미션 성공!\n(300포인트 획득!)","myapp://zip.com/home"),
    TodayLetterMissionAccomplished("가족과 함께하는 ‘오늘의 편지’ 미션을 성공했습니다!","myapp://zip.com/home"),
    ScheduleRegistedForMe("%s님이 함께하는 일정을 등록했습니다. 확인해보세요!","myapp://zip.com/calendar"),
    TodayLetterSentTome("%s님에게 오늘의 편지가 도착했습니다. 확인해보세요!","myapp://zip.com/letter/%s"),
    TodaySchedule("오늘은 %s 일정이 있습니다.","");

    private final String message;
    private final String link;

    public String getMessage() {
        return message;
    }

    public String getLink() {
        return link;
    }
}
