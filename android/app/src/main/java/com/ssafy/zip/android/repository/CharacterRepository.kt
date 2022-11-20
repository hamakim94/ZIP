package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.Character

class CharacterRepository private constructor(application: Application) {

    // 전체 캐릭터 리스트 불러오기
    suspend fun getCharacterList(): ArrayList<Character>? {
//        println("repository getCharacterList start")
        val response = ApiService.getApiService.getCharacterList()
//        println("repository getCharacterList")
        return if(response.isSuccessful) response.body() as ArrayList<Character> else null
    }

    //
    companion object {
        private var instance: CharacterRepository? = null

        fun getInstance(application: Application): CharacterRepository? {
            if (instance == null) instance = CharacterRepository(application)
            return instance
        }
    }
}