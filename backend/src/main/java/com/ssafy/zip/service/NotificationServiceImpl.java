package com.ssafy.zip.service;

import com.google.auth.oauth2.GoogleCredentials;
import com.google.firebase.FirebaseApp;
import com.google.firebase.FirebaseOptions;
import com.google.firebase.messaging.FirebaseMessaging;
import com.google.firebase.messaging.FirebaseMessagingException;
import com.google.firebase.messaging.Message;
import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.entity.Notification;
import com.ssafy.zip.repository.FCMTokenRepository;
import com.ssafy.zip.repository.NotificationRepository;
import com.ssafy.zip.repository.UserRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.context.annotation.Bean;
import org.springframework.core.io.ClassPathResource;
import org.springframework.stereotype.Service;

import java.io.IOException;
@Service
@RequiredArgsConstructor
public class NotificationServiceImpl {

    private final FCMTokenRepository fcmTokenRepository;
    private final FirebaseMessaging firebaseMessaging;
    private final UserRepository userRepository;
    private final NotificationRepository notificationRepository;

    public String sendNotification(/*알림 보낼 내용*/UserDTO userDTO) throws FirebaseMessagingException {
        String token = String.valueOf(fcmTokenRepository.findById(userDTO.getId()));

        Notification notification = Notification.builder().isRead(false)
                .message("").link("").userId(userDTO.getId()).build();

        com.google.firebase.messaging.Notification notificationFire = com.google.firebase.messaging.Notification
                .builder()
                .setTitle("")
                .setBody("")
                .build();
        notificationRepository.save(notification);
        Message message = Message.builder().setToken(token).setNotification(notificationFire).build();
        return firebaseMessaging.send(message);
    }

}
