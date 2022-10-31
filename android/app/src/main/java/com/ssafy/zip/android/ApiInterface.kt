package com.ssafy.zip.android

import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.Missions
import com.ssafy.zip.android.data.UserFamily
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.data.request.RequestFamilyroom
import com.ssafy.zip.android.data.request.RequestLoginData
import com.ssafy.zip.android.data.response.ResponseBoardAll
import retrofit2.Call
import com.ssafy.zip.android.data.request.RequestSignup
import okhttp3.MultipartBody
import retrofit2.Response
import retrofit2.http.*

interface ApiInterface {

    @POST("users/login")//Post Interface
    suspend fun userLogin(
        @Body body: RequestLoginData
    ): Response<User> // 받을 데이터 클래스

    @POST("users/reissue")
    suspend fun tokenReissue(): Response<String>

    @Multipart
    @POST("users/signup")
    suspend fun userSignup(
        @Part profileImg : MultipartBody.Part?,
        @Part("userDTO") userDTO : RequestSignup
    ):Response<String>

    @GET("post")
    fun getBoard() : Call<List<ResponseBoardAll>>
    @GET("users/duplication-check")
    suspend fun emailCheck(
        @Query(value = "email") email : String,
    ):Response<String>

    @PUT("rooms/enter")
    suspend fun enterRoom(
        @Body code: Int,
    ):Response<UserFamily>

    @POST("rooms/create")
    suspend fun createFamily(
        @Body body: RequestFamilyroom
    ) : Response<UserFamily>

    @GET("rooms")
    suspend fun getFamily():Response<Family>

    @GET("post/missions")
    suspend fun getMission():Response<Missions>
}