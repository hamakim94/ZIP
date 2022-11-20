package com.ssafy.zip.android

import android.app.NotificationChannel
import android.app.NotificationManager
import android.app.PendingIntent
import android.app.TaskStackBuilder
import android.content.Intent
import android.graphics.BitmapFactory
import android.os.Build
import androidx.core.app.NotificationCompat
import androidx.core.app.NotificationManagerCompat
import androidx.core.net.toUri
import com.google.firebase.messaging.FirebaseMessagingService
import com.google.firebase.messaging.RemoteMessage
import com.ssafy.zip.android.databinding.FragmentRecordBoardDetailBinding


class MyFirebaseMessagingService : FirebaseMessagingService() {

    var CHANNEL_ID = "ZIP_ID"
    var CHANNEL_NAME = "ZIP"
    var CHANNEL_DESCRIPTION = "알림 설정을 위한 채채널"


    override fun onMessageReceived(remoteMessage: RemoteMessage) {

        super.onMessageReceived(remoteMessage)

        if (remoteMessage.data.isNotEmpty()) {
//            Log.d(TAG, "Message data payload: ${remoteMessage.data}")

            if (/* Check if data needs to be processed by long running job */ true) {
                // For long-running tasks (10 seconds or more) use WorkManager.
//                scheduleJob()
            } else {
                // Handle message within 10 seconds
//                handleNow()
            }
        }
        // Check if message contains a notification payload.
        remoteMessage.notification?.let {
//            Log.d(TAG, "Message Notification title: ${it.title}")
//            Log.d(TAG, "Message Notification Body: ${it.body}")
//            Log.d(TAG, "Message Notification image: ${it.imageUrl}")
        }
//        Log.d(TAG, "Message Notification data: " + remoteMessage.data.toString())

        // 채널 생성
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            val channel = NotificationChannel(
                CHANNEL_ID,
                CHANNEL_NAME,
                NotificationManager.IMPORTANCE_HIGH
            )
            channel.description = CHANNEL_DESCRIPTION
            val notificationManager = getSystemService(NOTIFICATION_SERVICE) as NotificationManager
            notificationManager.createNotificationChannel(channel)
        }


        // 이건 클릭시 해당 페이지로 가주세연
//        val clickIntent = Intent(Intent.ACTION_VIEW,
//            remoteMessage.data["link"].toString().toUri(), baseContext, MainActivity::class.java)
//        val clickPendingIntent: PendingIntent = TaskStackBuilder.create(baseContext).run{
//            addNextIntentWithParentStack(clickIntent)
//            getPendingIntent(1, PendingIntent.FLAG_IMMUTABLE)
//        }

        val clickIntent = Intent(this, MainActivity::class.java);
        clickIntent.putExtra("link", remoteMessage.data["link"].toString())
        val clickPendingIntent: PendingIntent = PendingIntent.getActivity(this, 0, clickIntent,
            PendingIntent.FLAG_MUTABLE or PendingIntent.FLAG_UPDATE_CURRENT)
        // 그냥 열어주세연
//        val intent = Intent(baseContext, FragmentRecordBoardDetailBinding::class.java)
//        intent.flags = Intent.FLAG_ACTIVITY_NEW_TASK or Intent.FLAG_ACTIVITY_CLEAR_TASK
//        val fullScreenPendingIntent = PendingIntent.getActivity(baseContext, 0,
//            intent, PendingIntent.FLAG_IMMUTABLE)



        // 실제 알림 -> 여기가 그냥 실행중일 때 알림 오는 곳, 나머지는 그냥 푸쉬알림 그대로 가져가는 듯
        val notificationBuilder = NotificationCompat.Builder(this, CHANNEL_ID)
            .setSmallIcon(com.ssafy.zip.android.R.drawable.zip_logo2)
            .setLargeIcon(BitmapFactory.decodeResource(resources, com.ssafy.zip.android.R.drawable.zip_logo2))
            .setContentTitle(remoteMessage.notification?.title)
            .setContentText(remoteMessage.notification?.body)
            .setAutoCancel(true)
            .setDefaults(NotificationCompat.DEFAULT_ALL)
//            .setFullScreenIntent(fullScreenPendingIntent, true)
            .setPriority(NotificationCompat.PRIORITY_HIGH)
            .setContentIntent(clickPendingIntent)

        NotificationManagerCompat.from(this).notify(1, notificationBuilder.build())





    }

    /**
     * Called if the FCM registration token is updated. This may occur if the security of
     * the previous token had been compromised. Note that this is called when the
     * FCM registration token is initially generated so this is where you would retrieve the token.
     */
    override fun onNewToken(token: String) {
//        Log.d(TAG, "Refreshed token: $token")

        // If you want to send messages to this application instance or
        // manage this apps subscriptions on the server side, send the
        // FCM registration token to your app server.
        // 새 토큰 등록하는 함수
        sendRegistrationToServer(token)
    }

    private fun sendRegistrationToServer(token: String?) {
//        Log.d(TAG, "sendRegistrationTokenToServer($token)")
    }


}