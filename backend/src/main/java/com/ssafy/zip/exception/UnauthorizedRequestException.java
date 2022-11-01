package com.ssafy.zip.exception;

import lombok.Getter;

@Getter
public class UnauthorizedRequestException extends RuntimeException {
    private ErrorCode errorCode;
    public UnauthorizedRequestException(String message, ErrorCode errorCode){
        super(message);
        this.errorCode = errorCode;
    }
}
