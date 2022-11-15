package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.Notification

class NotificationRepository private constructor(application: Application) {

    suspend fun getNotification() : ArrayList<Notification>? {
        val response = ApiService.getApiService.getNotification()
        return if(response.isSuccessful) response.body() as ArrayList<Notification> else null
    }

    suspend fun readNotification(id: Long): String? {
        val response = ApiService.getApiService.postNotification(id)
        return if(response.isSuccessful) response.body() else null
    }
    companion object {
        private var instance: NotificationRepository? = null

        fun getInstance(application : Application): NotificationRepository? {
            if (instance == null) instance = NotificationRepository(application)
            return instance
        }
    }
}