package com.ssafy.zip.android

import com.ssafy.zip.android.data.Album
import com.ssafy.zip.android.data.Photo
import com.ssafy.zip.android.data.request.RequestLoginData
import com.ssafy.zip.android.data.request.RequestPhoto
import com.ssafy.zip.android.data.response.ResponseLoginData
import okhttp3.MultipartBody
import okhttp3.RequestBody
import retrofit2.Call
import retrofit2.Response
import retrofit2.http.*

interface ApiInterface {

    @POST("users/login")//Post Interface
    fun requsetLogin(
        @Body body : RequestLoginData
    ): Call<ResponseLoginData> // 받을 데이터 클래스

    @POST("users/reissue")
    fun requestReissue():Call<ResponseLoginData>

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
}