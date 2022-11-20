package com.ssafy.zip.exception;

import lombok.AllArgsConstructor;
import lombok.Getter;

@AllArgsConstructor
@Getter
public enum ErrorCode {
    NOT_FOUND(404,"COMMON-ERR-404","PAGE NOT FOUND"),
    FORBIDDEN(403, "FORBIDDEN-403","FORBIDDEN"),
    MODIFY_ONLY_MINE_ERROR(403, "FORBIDDEN-403","CAN NOT MODIFY RESOURCE NOT MINE"),
    ANSWER_MORE_THAN_ONCE_ERROR(403, "FORBIDDEN-403","YOU CAN ONLY ANSWER ONCE"),
    INTER_SERVER_ERROR(500,"COMMON-ERR-500","INTERNAL SERVER ERROR"),
    EMAIL_DUPLICATION(400,"MEMBER-ERR-400","EMAIL DUPLICATED"),
    RESOURCE_GONE(410,"RESOURCE-GONE-410","CANNOT FIND RESOURCE")
    ;

    private int status;
    private String errorCode;
    private String message;
}
