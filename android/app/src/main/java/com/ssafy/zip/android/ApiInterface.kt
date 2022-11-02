package com.ssafy.zip.android

import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.data.request.RequestFamilyroom
import com.ssafy.zip.android.data.request.RequestLoginData
import com.ssafy.zip.android.data.request.RequestPhoto
import okhttp3.MultipartBody
import com.ssafy.zip.android.data.response.ResponseBoardAll
import retrofit2.Response
import retrofit2.http.*
import com.ssafy.zip.android.data.request.RequestSignup
import okhttp3.RequestBody

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

    @GET("users/duplication-check")
    suspend fun emailCheck(
        @Query(value = "email") email : String,
    ):Response<String>

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

    // 게시글 관련
    @GET("post")
    suspend fun getBoardAll():Response<ArrayList<ResponseBoardAll>>

    // 게시글 상세
    @GET("post/board/{boardId}")
    suspend fun getBoardDetailById(
        @Path("boardId") id : Long
    ) : Response<BoardDetail>

    // 게시글 상세 댓글 달기기
    @POST("post/board/{boardId}")
    suspend fun postBoardCommentById(
        @Path("boardId") id : Long,
        @Query("content") content : String
    ) : Response<String>

   // 백문백답 상세
    @GET("post/qna/{qnaId}")
    suspend fun getQnaDetailById(
        @Path("qnaId") id : Long
    ) : Response<QnaDetail>


    @Multipart
    @POST("post/board")
    suspend fun postBoard(
        @Part("content") content : RequestBody,
        @Part image : MultipartBody.Part?
    ) :Response<String>

}