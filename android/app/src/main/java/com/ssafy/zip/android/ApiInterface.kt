package com.ssafy.zip.android

import com.ssafy.zip.android.data.request.RequestLoginData
import com.ssafy.zip.android.data.response.ResponseLoginData
import retrofit2.Call
import retrofit2.http.Body
import retrofit2.http.POST

interface ApiInterface {

    @POST("users/login")//Post Interface
    fun requsetLogin(
        @Body body : RequestLoginData
    ): Call<ResponseLoginData> // 받을 데이터 클래스

    @POST("users/reissue")
    fun requestReissue():Call<ResponseLoginData>



//    companion object {// Retrofit 객체 초기화 인터셉터 설정
//    private const val BASE_URL = "http://k7a407.p.ssafy.io:8888/api/"
//
//    class TokenInterceptor : Interceptor{
//        override fun intercept(chain: Interceptor.Chain): Response {
//            val request = chain.request().newBuilder()
//                .addHeader("ACCESSTOKEN", App.prefs.getString("accesstoken", ""))
//                .addHeader("REFRESHTOKEN", App.prefs.getString("refreshtoken", ""))
//                .build()
//
//            return chain.proceed(request)
//        }
//
//    }
//        // 인터셉터 설정을 위한 okhttp3
//        val client = OkHttpClient.Builder()
//            .addInterceptor(TokenInterceptor())
//            .build()
//
//        fun create(): APIS {
//
//            val gson : Gson = GsonBuilder().setLenient().create()
//
//            return Retrofit.Builder()
//                .baseUrl(BASE_URL)
//                .client(client)
//                .addConverterFactory(nullOnEmptyConverterFactory)
//                .addConverterFactory(GsonConverterFactory.create(gson))
//                .build()
//                .create(APIS::class.java)
//        }
//
//        //length 0 처리
//        private val nullOnEmptyConverterFactory = object : Converter.Factory() {
//            fun converterFactory() = this
//            override fun responseBodyConverter(type: Type, annotations: Array<out Annotation>, retrofit: Retrofit) = object : Converter<ResponseBody, Any?> {
//                val nextResponseBodyConverter = retrofit.nextResponseBodyConverter<Any?>(converterFactory(), type, annotations)
//                override fun convert(value: ResponseBody) = if (value.contentLength() != 0L) {
//                    try{
//                        nextResponseBodyConverter.convert(value)
//                    }catch (e:Exception){
//                        e.printStackTrace()
//                        null
//                    }
//                } else{
//                    null
//                }
//            }
//        }
//    }
}