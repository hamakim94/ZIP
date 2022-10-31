package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.response.ResponseBoardAll

class BoardRepository private constructor(application: Application) {


    suspend fun getBoardAll(): ArrayList<ResponseBoardAll>? {
        val response = ApiService.getApiService.getBoardAll()
        println("BoardRepository getBoard response: " + response)
        return if(response.isSuccessful) response.body() as ArrayList<ResponseBoardAll> else null
    }

    companion object {
        private var instance: BoardRepository? = null

        fun getInstance(application: Application): BoardRepository? {
            if (instance == null) instance = BoardRepository(application)
            return instance
        }
    }
}

//class HomeRepository private constructor(application: Application) {
//
//    suspend fun getFamily(): Family?{
//        val response = ApiService.getApiService.getFamily()
//        println("HomeRepository getFamily response: " + response)
//        return if(response.isSuccessful) response.body() as Family else null
//    }