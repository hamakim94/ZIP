package com.ssafy.zip.exception;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.ControllerAdvice;
import org.springframework.web.bind.annotation.ExceptionHandler;

import javax.servlet.http.HttpServletRequest;
import java.util.Enumeration;

@ControllerAdvice
public class GlobalControllerAdvice {
    @Autowired
    private NotificationManager notificationManager;

    @ExceptionHandler(Exception.class)
    public HttpServletRequest exceptionTest(Exception e, HttpServletRequest req) {
        e.printStackTrace();
        notificationManager.sendNotification(e, req.getRequestURI(), getParams(req));
        return req;
    }

    private String getParams(HttpServletRequest req) {
        StringBuilder params = new StringBuilder();
        Enumeration<String> keys = req.getParameterNames();
        while (keys.hasMoreElements()) {
            String key = keys.nextElement();
            params.append("- ").append(key).append(" : ").append(req.getParameter(key)).append('\n');
        }

        return params.toString();
    }
}
