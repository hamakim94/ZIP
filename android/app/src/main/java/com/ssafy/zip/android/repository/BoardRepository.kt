package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.data.response.ResponseBoardAll
import okhttp3.MultipartBody
import okhttp3.RequestBody
import retrofit2.Response
import retrofit2.http.POST
import retrofit2.http.Path
import retrofit2.http.Query

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

    suspend fun postBoardComment(
        id : Long,
        content : String
    ) : String? {
        val response = ApiService.getApiService.postBoardCommentById(id, content)
        var returnData : String?
        returnData = response.code().toString()
        return returnData
    }

//    @POST("post/board/{boardId}")
//    suspend fun postBoardCommentById(
//        @Path("boardId") id : Long,
//        @Query("content") content : String
//    ) : Response<String>



    suspend fun postBoard(
        image : MultipartBody.Part?,
        content : RequestBody
    ) : String?{
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