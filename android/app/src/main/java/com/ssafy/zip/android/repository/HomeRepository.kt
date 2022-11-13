package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.Missions
import com.ssafy.zip.android.data.User

class HomeRepository private constructor(application: Application) {

    suspend fun getFamily():Family?{
        val response = ApiService.getApiService.getFamily()
        println("HomeRepository getFamily response: " + response)
        return if(response.isSuccessful) response.body() as Family else null
    }

    suspend fun getMission():Missions?{
        val response = ApiService.getApiService.getMission()
//        println("HomeRepository getMission response: " + response)
        return if(response.isSuccessful) response.body() as Missions else null
    }
    suspend fun getUserData() : User? {
        val response = ApiService.getApiService.getUserData()
//        println("BoardRepository getUserData response: " + response)
        return if(response.isSuccessful) response.body() as User else null
    }

    companion object {
        private var instance: HomeRepository? = null

        fun getInstance(application: Application): HomeRepository? {
            if (instance == null) instance = HomeRepository(application)
            return instance
        }
    }
}