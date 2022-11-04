package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.Album
import com.ssafy.zip.android.data.Photo
import com.ssafy.zip.android.data.request.RequestPhoto
import okhttp3.MediaType
import okhttp3.MultipartBody
import okhttp3.RequestBody

class AlbumRepository private constructor(application : Application) {
    // Retrofit 사용
    suspend fun getAllAlbumList(): ArrayList<Album>? {
        val response = ApiService.getApiService.getAllAlbumList()
        println("AlbumRepository getAllAlbumList response: " + response)
//        Log.d("log", response.body().toString())
        return if(response.isSuccessful) response.body() as ArrayList<Album> else null
    }

    suspend fun updateAlbum(title: String): Album? {
        val response = ApiService.getApiService.updateAlbum(title)
        println("AlbumRepository updateAlbum response: " + response.body())

        return if(response.isSuccessful) response.body() as Album else null
    }

    suspend fun getAlbumById(id: Long): Album? {
        val response = ApiService.getApiService.getAlbumById(id)
        println("AlbumRepository getAlbumById response: " + response.body())

        return if(response.isSuccessful) response.body() as Album else null
    }

    suspend fun deleteAlbum(id: Long): String? {
        val response = ApiService.getApiService.deleteAlbum(id)
        println("AlbumRepository deleteAlbum response: " + response.body())

        return if(response.isSuccessful) response.body() else null
    }

    suspend fun uploadPhotos(images : List<MultipartBody.Part>, albumId : Long?, pictureId : Long?) : List<Photo>? {
        val response = ApiService.getApiService.uploadPhotos(images, RequestPhoto(albumId, pictureId))
        println("AlbumRepository uploadPhotos response: " + response)

        return if(response.isSuccessful) response.body() as List<Photo> else null
    }

    // 싱글톤
    companion object {
        private var instance: AlbumRepository? = null

        fun getInstance(application : Application): AlbumRepository? {
            if (instance == null) instance = AlbumRepository(application)
            return instance
        }
    }
}