package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.data.response.ResponseBoardAll
import okhttp3.MultipartBody
import okhttp3.RequestBody
import retrofit2.Response
import retrofit2.http.GET
import retrofit2.http.POST
import retrofit2.http.Path
import retrofit2.http.Query

class BoardRepository private constructor(application: Application) {

    // 전체 정보 가져오기
    suspend fun getBoardAll(): ArrayList<ResponseBoardAll>? {
        val response = ApiService.getApiService.getBoardAll()
        println("BoardRepository getBoard response: " + response)
        return if(response.isSuccessful) response.body() as ArrayList<ResponseBoardAll> else null
    }

    // 게시글 상세
    suspend fun getBoardDetailById(
        id : Long
    ) : BoardDetail? {
        val response = ApiService.getApiService.getBoardDetailById(id)
        println("BoardRepository getBoardDetail response: " + response)
        return if(response.isSuccessful) response.body() as BoardDetail else null
    }
    // 게시글 상세 댓글 달기
    suspend fun postBoardComment(
        id : Long,
        content : String
    ) : String? {
        val response = ApiService.getApiService.postBoardCommentById(id, content)
        var returnData : String?
        returnData = response.code().toString()
        return returnData
    }
    // 게시글 등록하기
    suspend fun postBoard(
        image : MultipartBody.Part?,
        content : RequestBody
    ) : String?{
        val response = ApiService.getApiService.postBoard(content, image)
        var returnData : String?
        returnData = response.code().toString()
        return returnData
    }
    //-----------------------------------------백문백답 관련

    //가족 정보 가져오기
    suspend fun getFamily():Family?{
        val response = ApiService.getApiService.getFamily()
        println("HomeRepository getFamily response: " + response)
        return if(response.isSuccessful) response.body() as Family else null
    }

    // 백문백답 상세
    suspend fun getQnaDetail(
        id : Long
    ) : QnaDetail? {
        val response = ApiService.getApiService.getQnaDetailById(id)
        return return if(response.isSuccessful) response.body() as QnaDetail else null
    }
//    // 백문백답 상세
//    @GET("post/qna/{qnaId}")
//    suspend fun getQnaDetailById(
//        @Path("qnaId") id : Long
//    ) : Response<QnaDetail>


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