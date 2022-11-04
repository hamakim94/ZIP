package com.ssafy.zip.android

import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.data.request.*

import okhttp3.MultipartBody
import com.ssafy.zip.android.data.response.ResponseBoardAll
import retrofit2.Response
import retrofit2.http.*
import okhttp3.RequestBody

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

    @GET("users/profiles")
    suspend fun getUserData(
    ) : Response<User>

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

    @GET("users/logout")
    suspend fun logoutUser(): Response<String>

    // 캘린더 관련

    // 일정 조회(월별)
    @GET("calendar/list")
    suspend fun getCalendarMonthList(
        @Query(value = "year") year : Int,
        @Query(value = "month") month : Int,
    ): Response<List<Calendar>>

    // 일정 추가
    @POST("calendar/add")
    suspend fun addCalendarData(
        @Body body: RequestCalendar
    ) : Response<Calendar>

    @DELETE("calendar/delete")
    suspend fun deleteCalendar(
        @Query("calendarId") id: Long
    ) : Response<String>

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

    // 백문백답 상세 댓글 남기기
    @POST("post/qna/answer")
    suspend fun postQnaAnswer(
        @Body body : RequestQnaComment
    ) : Response<String>


    @Multipart
    @POST("post/board")
    suspend fun postBoard(
        @Part("content") content : RequestBody,
        @Part image : MultipartBody.Part?
    ) :Response<String>

    // 편지 관련
    @GET("post/letter/today")
    suspend fun getTodayLetter(
    ) : Response<MissionModel.Letter>

    // 오늘의 편지 작성
    @POST("post/letter")
    suspend fun postLetter(
        @Body body : RequestLetter
    ) : Response<String>

    @POST("post/letter/{letterId}")
    suspend fun postLetterRead(
        @Path("letterId") id : Long
    ) : Response<String>

}