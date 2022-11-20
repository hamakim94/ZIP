package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.data.request.RequestLetter
import com.ssafy.zip.android.data.request.RequestQnaAnswer
import com.ssafy.zip.android.data.request.RequestQnaComment
import com.ssafy.zip.android.data.response.ResponseBoardAll
import okhttp3.MultipartBody
import okhttp3.RequestBody

class BoardRepository private constructor(application: Application) {

    // 전체 정보 가져오기
    suspend fun getBoardAll(): ArrayList<ResponseBoardAll>? {
        val response = ApiService.getApiService.getBoardAll()
//        println("BoardRepository getBoard response: " + response)
        return if(response.isSuccessful) response.body() as ArrayList<ResponseBoardAll> else null
    }

    // 게시글 상세
    suspend fun getBoardDetailById(
        id : Long
    ) : BoardDetail? {
        val response = ApiService.getApiService.getBoardDetailById(id)
//        println("BoardRepository getBoardDetail response: " + response)
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
    //미션
    // 오늘의 미션 가져오기
    suspend fun getMission():Missions?{
        val response = ApiService.getApiService.getMission()
//        println("BoardRepository getMission response: " + response)
        return if(response.isSuccessful) response.body() as Missions else null
    }

    // 유저 정보 가져오기
    suspend fun getUserData() : User? {
        val response = ApiService.getApiService.getUserData()
//        println("BoardRepository getUserData response: " + response)
        return if(response.isSuccessful) response.body() as User else null
    }

    //가족 정보 가져오기
    suspend fun getFamily():Family?{
        val response = ApiService.getApiService.getFamily()
//        println("BoardRepository getFamily response: " + response)
        return if(response.isSuccessful) response.body() as Family else null
    }

    // 백문백답 상세
    suspend fun getQnaDetail(
        id : Long
    ) : QnaDetail? {
        val response = ApiService.getApiService.getQnaDetailById(id)
        return if(response.isSuccessful) response.body() as QnaDetail else null
    }

    suspend fun postQnaAnswer(id : Long, content : String) : String? {

        val response = ApiService.getApiService.postQnaAnswer(RequestQnaComment(content, id))
        var returnData : String?
        returnData = response.code().toString()
        return returnData

    }

    suspend fun editQnaAnswer(requestQnaAnswer: RequestQnaAnswer) : String? {
        val response = ApiService.getApiService.editQnaAnswer(requestQnaAnswer)
        var returnData : String?
        returnData = response.code().toString()
        return returnData
    }

    // 편지 달기
    suspend fun postLetter(requestLetter: RequestLetter) : String?{
        val response = ApiService.getApiService.postLetter(requestLetter)
        var returnData : String?
        returnData = response.code().toString()
        return returnData
    }


    // 편지 읽음 표시
    suspend fun postLetterRead(id : Long) : String? {
        val response = ApiService.getApiService.postLetterRead(id)
        var returnData : String?
        returnData = response.code().toString()
        return returnData
    }
    // 편지 상세 상세
    suspend fun getLetterDetail(
        id : Long
    ) : BoardModel.Letter? {
        val response = ApiService.getApiService.getLetterDetail(id)
//        println("BoardRepository getLetterDetail response: " + response)
        return if(response.isSuccessful) response.body() as BoardModel.Letter else null
    }

    companion object {
        private var instance: BoardRepository? = null

        fun getInstance(application: Application): BoardRepository? {
            if (instance == null) instance = BoardRepository(application)
            return instance
        }
    }
}

