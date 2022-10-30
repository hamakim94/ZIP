package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.App
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.data.request.RequestLoginData

class UserRepository private constructor(application: Application) {

    suspend fun login(
        requestLoginData: RequestLoginData,
    ): Any? {
        val response = ApiService.getApiService.requsetLogin(requestLoginData)
        var returnData: Any?
        if (response.code()==200) {
            val headers = response.headers()
            val accesstoken = headers.get("ACCESSTOKEN").toString()
            val refreshtoken = headers.get("REFRESHTOKEN").toString()
            App.prefs.setString("accesstoken", accesstoken)
            App.prefs.setString("refreshtoken", refreshtoken)
            returnData = response.body() as User
        } else {
            returnData = response.code()
        }

        return returnData
    }

    companion object {
        private var instance: UserRepository? = null

        fun getInstance(application: Application): UserRepository? {
            if (instance == null) instance = UserRepository(application)
            return instance
        }
    }

}