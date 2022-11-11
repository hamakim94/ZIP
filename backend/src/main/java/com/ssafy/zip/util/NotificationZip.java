package com.ssafy.zip.util;

import com.google.api.client.util.Key;
import com.google.firebase.messaging.Notification;
import lombok.experimental.SuperBuilder;

@SuperBuilder
public class NotificationZip extends Notification {

    private String link;
}
