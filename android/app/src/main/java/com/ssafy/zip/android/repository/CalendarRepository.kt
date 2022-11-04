package com.ssafy.zip.android.repository

import android.app.Application
import com.ssafy.zip.android.ApiService
import com.ssafy.zip.android.data.Calendar
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.request.RequestCalendar
import com.ssafy.zip.android.data.request.RequestLoginData


class CalendarRepository private constructor(application: Application) {

//    suspend fun getCalendarDetail(id: Long): Calendar? {
//        val response = ApiService.getApiService.getCalendarDetail(id)
//        println("CalendarRepository getCalendarDetail response: " + response.body())
//        return if(response.isSuccessful) response.body() as Calendar else null
//    }

    suspend fun getCalendarMonthList(year: Int, month: Int): Any? {
        val response = ApiService.getApiService.getCalendarMonthList(year, month)
        println(response)
        println(response.body())
        return if(response.isSuccessful) response.body() as List<Calendar> else null
    }

    suspend fun addCalendar(requestCalendar: RequestCalendar): Calendar? {
        val response = ApiService.getApiService.addCalendarData(requestCalendar)
        println("일정 추가 response: " + response)
        println("response.body(): " + response.body())
        return if(response.isSuccessful) response.body() as Calendar else null
    }

    suspend fun getFamilyData(): ArrayList<FamilyMember>?{
        val response = ApiService.getApiService.getFamily()
        println("HomeRepository getFamily response: " + response)
        return if(response.isSuccessful) response.body()?.familyList as ArrayList<FamilyMember> else null
    }

    suspend fun deleteCalendar(id: Long): String? {
        val response = ApiService.getApiService.deleteCalendar(id)
        println("CalendarRepository deleteCalendar response: " + response)

        return if(response.isSuccessful) response.body() else null
    }

    companion object {
        private var instance: CalendarRepository? = null

        fun getInstance(application: Application): CalendarRepository? {
            if (instance == null) instance = CalendarRepository(application)
            return instance
        }
    }

}