package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.Calendar


class CalendarRepository private constructor(application: Application) {

//    suspend fun getCalendarDetail(id: Long): Calendar? {
//        val response = ApiService.getApiService.getCalendarDetail(id)
//        println("CalendarRepository getCalendarDetail response: " + response.body())
//        return if(response.isSuccessful) response.body() as Calendar else null
//    }

    suspend fun getCalendarMonthList(year: Int, month: Int): ArrayList<Calendar>? {
        val response = ApiService.getApiService.getCalendarMonthList(year, month)
//        var returnData : Int?
//        returnData = response.code()
        return if(response.isSuccessful) response.body() as ArrayList<Calendar> else null
    }


    companion object {
        private var instance: CalendarRepository? = null

        fun getInstance(application: Application): CalendarRepository? {
            if (instance == null) instance = CalendarRepository(application)
            return instance
        }
    }

}