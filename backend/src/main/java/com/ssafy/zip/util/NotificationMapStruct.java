package com.ssafy.zip.util;

import com.ssafy.zip.dto.response.NotificationResponseDTO;
import com.ssafy.zip.entity.Notification;
import org.mapstruct.Mapper;
import org.mapstruct.factory.Mappers;

@Mapper
public interface NotificationMapStruct {
    NotificationMapStruct INSTANCE = Mappers.getMapper(NotificationMapStruct.class);
    NotificationResponseDTO mapToNotificationDTO(Notification notification);
}
