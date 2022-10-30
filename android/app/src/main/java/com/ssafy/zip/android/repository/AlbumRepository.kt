package com.ssafy.zip.android.repository

import android.app.Application
import android.util.Log
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.Album

class AlbumRepository(application : Application) {
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

    // 싱글톤
    companion object {
        private var instance: AlbumRepository? = null

        fun getInstance(application : Application): AlbumRepository? {
            if (instance == null) instance = AlbumRepository(application)
            return instance
        }
    }
}