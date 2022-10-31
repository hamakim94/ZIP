package com.ssafy.zip.android

import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.data.request.RequestFamilyroom
import com.ssafy.zip.android.data.request.RequestLoginData
import com.ssafy.zip.android.data.request.RequestPhoto
import com.ssafy.zip.android.data.request.RequestSignup
import com.ssafy.zip.android.data.response.ResponseBoardAll
import okhttp3.MultipartBody
import okhttp3.RequestBody
import retrofit2.Call
import retrofit2.Response
import retrofit2.http.*

interface ApiInterface {
    // 유저 관련(초기화면)
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

    // 앨범 관련
    @POST("album")
    suspend fun updateAlbum(
        @Query("name") title: String
    ) : Response<Album>

    @GET("album")
    suspend fun getAllAlbumList() : Response<ArrayList<Album>>

    @DELETE("album")
    suspend fun deleteAlbum(
        @Query("albumId") id: Long
    ) : Response<String>

    @GET("album/{albumId}")
    suspend fun getAlbumById(
        @Path("albumId") id: Long
    ) : Response<Album>

    @Multipart
    @POST("album/pictures")
    suspend fun uploadPhotos(
        @Part files : List<MultipartBody.Part>,
        @Part("pictureRequestDTO") photoList : RequestPhoto
    ) : Response<List<Photo>>

    // 홈 화면 관련
    @GET("rooms")
    suspend fun getFamily():Response<Family>

    @GET("post/missions")
    suspend fun getMission():Response<Missions>

    @Multipart
    @PUT("users/profiles")
    suspend fun modifyUser(
        @Part profileImg: MultipartBody.Part?,
        @Part("familyName") familyName : RequestBody,
        @Part("nickname") nickname : RequestBody
    ): Response<User>


    @GET("post")
    fun getBoard() : Call<List<ResponseBoardAll>>


}