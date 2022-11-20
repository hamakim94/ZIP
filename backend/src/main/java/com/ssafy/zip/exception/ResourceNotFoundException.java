package com.ssafy.zip.exception;

import lombok.Getter;

import java.util.function.Supplier;

@Getter
public class ResourceNotFoundException extends RuntimeException{
    private final ErrorCode errorCode;
    public ResourceNotFoundException(String message, ErrorCode errorCode){
        super(message);
        this.errorCode = errorCode;
    }
}
