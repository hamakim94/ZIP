package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.data.response.ResponseBoardAll
import okhttp3.MultipartBody
import okhttp3.RequestBody

class BoardRepository private constructor(application: Application) {


    suspend fun getBoardAll(): ArrayList<ResponseBoardAll>? {
        val response = ApiService.getApiService.getBoardAll()
        println("BoardRepository getBoard response: " + response)
        return if(response.isSuccessful) response.body() as ArrayList<ResponseBoardAll> else null
    }

    suspend fun getBoardDetailById(
        id : Long
    ) : BoardDetail? {
        val response = ApiService.getApiService.getBoardDetailById(id)
        println("BoardRepository getBoardDetail response: " + response)
        return if(response.isSuccessful) response.body() as BoardDetail else null
    }



    suspend fun postBoard(
        image : MultipartBody.Part?,
        content : RequestBody
    ) : String?{
        println("postBoard" + image)
        println("postBaord" + content)
        val response = ApiService.getApiService.postBoard(content, image)
        var returnData : String?
        returnData = response.code().toString()
        return returnData
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