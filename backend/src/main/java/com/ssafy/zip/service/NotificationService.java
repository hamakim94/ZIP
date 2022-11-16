package com.ssafy.zip.service;

import com.google.firebase.messaging.FirebaseMessagingException;
import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.response.NotificationResponseDTO;
import com.ssafy.zip.entity.Notification;
import com.ssafy.zip.entity.User;

import java.util.List;

public interface NotificationService {
    void sendNotification(Notification notification, List<Long> notifiedList) throws FirebaseMessagingException;
    void readNotification(UserDTO userDTO, Long notificationId);
    void readAllNotifications(UserDTO userDTO);
    void setToken(UserDTO userDTO, String token);
    void eraseToken(UserDTO userDTO);
    List<NotificationResponseDTO> getNotifications(UserDTO userDTO);
}
