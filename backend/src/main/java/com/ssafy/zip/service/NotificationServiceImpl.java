package com.ssafy.zip.service;

import com.google.firebase.messaging.BatchResponse;
import com.google.firebase.messaging.FirebaseMessaging;
import com.google.firebase.messaging.FirebaseMessagingException;
import com.google.firebase.messaging.Message;
import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.response.NotificationResponseDTO;
import com.ssafy.zip.entity.FCMToken;
import com.ssafy.zip.entity.Notification;
import com.ssafy.zip.repository.FCMTokenRepository;
import com.ssafy.zip.repository.NotificationRepository;
import com.ssafy.zip.repository.UserRepository;
import com.ssafy.zip.util.NotificationMapStruct;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.scheduling.annotation.Async;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import java.util.logging.Logger;
import java.util.stream.Collectors;
@Slf4j
@Service
@RequiredArgsConstructor
public class NotificationServiceImpl implements NotificationService {

    private final FCMTokenRepository fcmTokenRepository;
    private final FirebaseMessaging firebaseMessaging;
    private final UserRepository userRepository;
    private final NotificationRepository notificationRepository;
    @Async
    @Transactional
    public void sendNotification(Notification notification, List<Long> notifiedList) throws FirebaseMessagingException {


        com.google.firebase.messaging.Notification notificationFire = com.google.firebase.messaging.Notification
                .builder()
                .setTitle(notification.getMessage())
                .setBody(notification.getLink())
                .setImage(notification.getImage())
                .build();

        List<Message> listMessage = new ArrayList<>();
        List<Notification> listNotification = new ArrayList<>();

        for(Long id: notifiedList){
            Optional<FCMToken> token = fcmTokenRepository.findById(id);
            if(token.isPresent()){
                String tokenValue = token.get().getToken();
                log.info("sending firebase notificaiton for id :" +id +" token:"+ tokenValue);
                Message message = Message.builder().setToken(tokenValue).setNotification(notificationFire).build();
                listMessage.add(message);
            }
            listNotification.add(new Notification(null, id, notification.getMessage(), notification.getLink(), notification.getImage(), false, LocalDateTime.now()));
        }

        notificationRepository.saveAll(listNotification);

        firebaseMessaging.sendAll(listMessage);
    }
    @Transactional
    @Override
    public void readNotification(UserDTO userDTO, Long notificationId) {
        Optional<Notification> notificationOptional = notificationRepository.findById(notificationId);
        if(notificationOptional.isPresent()){
            Notification notification = notificationOptional.get();
            if(notification.getUserId().equals(userDTO.getId()))
            notification.setIsRead(true);
        }
    }
    @Transactional
    @Override
    public void setToken(UserDTO userDTO, String token) {
        fcmTokenRepository.save(new FCMToken(userDTO.getId(),token));
        log.info("setting token for : " + userDTO.getNickname() +"\ntoken as : "+token);
    }
    @Transactional
    @Override
    public void eraseToken(UserDTO userDTO) {
        fcmTokenRepository.delete(fcmTokenRepository.findById(userDTO.getId()).get());
    }

    @Override
    public List<NotificationResponseDTO> getNotifications(UserDTO userDTO) {
        return notificationRepository.findByUserId(userDTO.getId()).stream()
                .map(NotificationMapStruct.INSTANCE::mapToNotificationDTO)
                .collect(Collectors.toList());
    }


}
