package com.ssafy.zip.android

import com.google.gson.*
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.data.response.ResponseBoardAll
import okhttp3.Interceptor
import okhttp3.OkHttpClient
import okhttp3.Response
import okhttp3.ResponseBody
import retrofit2.Converter
import retrofit2.Retrofit
import retrofit2.converter.gson.GsonConverterFactory
import java.lang.reflect.Type
import java.text.DateFormat
import java.text.ParseException
import java.text.SimpleDateFormat
import java.util.*


object ApiService {
    private const val BASE_URL = "http://k7a407.p.ssafy.io:8888/api/"

    class TokenInterceptor : Interceptor {
        override fun intercept(chain: Interceptor.Chain): Response {
            val request = chain.request().newBuilder()
                .addHeader("ACCESSTOKEN", App.prefs.getString("accesstoken", ""))
                .addHeader("REFRESHTOKEN", App.prefs.getString("refreshtoken", ""))
                .build()
            return chain.proceed(request)
        }
    }

    class RefreshInterceptor : Interceptor {
        override fun intercept(chain: Interceptor.Chain): Response {
            val request = chain.request();
            val response = chain.proceed(request);
            when (response.code()) {
                403 -> {
                    App.prefs.setString("accesstoken", "")
                    CoroutineScope(Dispatchers.Default).launch {
                        if(response.isSuccessful) {
                            val response = getApiService.tokenReissue()
                            val headers = response.headers()
                            val accesstoken = headers.get("ACCESSTOKEN").toString()
                            App.prefs.setString("accesstoken", accesstoken)
                        }
                    }
                }
                410 -> {
                    App.prefs.setString("accesstoken", "")
                    App.prefs.setString("refreshtoken", "")
                }
            }
            return response
        }
    }

    //length 0 처리
    private val nullOnEmptyConverterFactory = object : Converter.Factory() {
        fun converterFactory() = this
        override fun responseBodyConverter(
            type: Type,
            annotations: Array<out Annotation>,
            retrofit: Retrofit
        ) = object : Converter<ResponseBody, Any?> {
            val nextResponseBodyConverter =
                retrofit.nextResponseBodyConverter<Any?>(converterFactory(), type, annotations)

            override fun convert(value: ResponseBody) = if (value.contentLength() != 0L) {
                try {
                    nextResponseBodyConverter.convert(value)
                } catch (e: Exception) {
                    e.printStackTrace()
                    null
                }
            } else {
                null
            }
        }
    }

    // 인터셉터 설정을 위한 okhttp3
    val client = OkHttpClient.Builder()
        .addInterceptor(TokenInterceptor())
        .addInterceptor(RefreshInterceptor())
        .build()

    private val getApi by lazy {
        val builder = GsonBuilder()
        builder
            .registerTypeAdapter(Date::class.java, GsonDateFormatAdapter())
            .registerTypeAdapter(ResponseBoardAll::class.java, GsonBoardFormatAdapter())
        Retrofit.Builder()
            .baseUrl(BASE_URL)
            .client(client)
            .addConverterFactory(nullOnEmptyConverterFactory)
            .addConverterFactory(GsonConverterFactory.create(builder.create()))
            .build()
    }

    val getApiService: ApiInterface by lazy {
        getApi.create(ApiInterface::class.java)
    }

    class GsonDateFormatAdapter : JsonSerializer<Date?>, JsonDeserializer<Date> {
        private val dateFormat: DateFormat

        init {
            dateFormat = SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss", Locale.KOREA)
            dateFormat.setTimeZone(TimeZone.getTimeZone("UTC"))
        }

        @Synchronized
        override fun serialize(
            date: Date?,
            type: Type,
            jsonSerializationContext: JsonSerializationContext
        ): JsonElement {
            return JsonPrimitive(dateFormat.format(date))
        }

        @Synchronized
        override fun deserialize(
            jsonElement: JsonElement,
            type: Type,
            jsonDeserializationContext: JsonDeserializationContext
        ): Date {
            return try {
                dateFormat.parse(jsonElement.asString)
            } catch (e: ParseException) {
                throw JsonParseException(e)
            }
        }
    }

    class GsonBoardFormatAdapter : JsonDeserializer<ResponseBoardAll> {

        @Synchronized
        override fun deserialize(
            jsonElement: JsonElement,
            type: Type,
            context: JsonDeserializationContext
        ): ResponseBoardAll {
            val category = jsonElement.asJsonObject.get("category").asInt
            val data: JsonElement = jsonElement.asJsonObject.get("data")
            val parsedData =
                when (category) {
                    0 -> context.deserialize<BoardModel.Board>(data, BoardModel.Board::class.java)
                    1 -> context.deserialize<BoardModel.Qna>(data, BoardModel.Qna::class.java)
                    2 -> context.deserialize<BoardModel.Letter>(data, BoardModel.Letter::class.java)
                    else -> throw IllegalArgumentException()
                }

            return ResponseBoardAll(category, parsedData)

        }
    }

}