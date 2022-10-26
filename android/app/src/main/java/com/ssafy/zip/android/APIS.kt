package com.ssafy.zip.android

import com.google.gson.Gson
import com.google.gson.GsonBuilder
import retrofit2.Call
import retrofit2.Retrofit
import retrofit2.converter.gson.GsonConverterFactory
import retrofit2.http.Body
import retrofit2.http.GET
import retrofit2.http.Headers
import retrofit2.http.POST

interface APIS {

    @POST("users/login")//Post Interface
    @Headers("accept: application/json",
        "content-type: application/json")
    fun requsetLogin(
        @Body body : RequestLoginData
    ): Call<RequestLoginData>

    companion object {// Retrofit 객체 초기화
    private const val BASE_URL = "http://k7a407.p.ssafy.io:8888/api/"
        fun create(): APIS {

            val gson : Gson = GsonBuilder().setLenient().create()

            return Retrofit.Builder()
                .baseUrl(BASE_URL)
                .addConverterFactory(GsonConverterFactory.create(gson))
                .build()
                .create(APIS::class.java)
        }
    }
}