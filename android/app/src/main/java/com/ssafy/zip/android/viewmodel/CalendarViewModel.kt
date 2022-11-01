package com.ssafy.zip.android.viewmodel

import android.app.Application
import android.service.controls.ControlsProviderService
import android.util.Log
import androidx.lifecycle.*
import com.ssafy.zip.android.data.Album
import com.ssafy.zip.android.data.Calendar
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.request.RequestCalendar
import com.ssafy.zip.android.repository.CalendarRepository
import kotlinx.coroutines.launch
import java.time.LocalDate


class CalendarViewModel(private val repository: CalendarRepository?) : ViewModel() {
    // mutablelivedata는 수정 가능, 그냥 livedata는 읽기 전용(수정 불가)
    // kotlin convention: 값이 바뀌는 얘들은 이 클래스 안에서만 사용되기 때문에 앞에 '_' 붙여줌
    // private val _month = MutableLiveData<Int>()
    // val month : LiveData<Int> get() = _month
    private val _calendarFamilyData = MutableLiveData<ArrayList<FamilyMember>>()
    val calendarFamilyData : LiveData<ArrayList<FamilyMember>> get() = _calendarFamilyData

    private val _calendarList = MutableLiveData<List<Calendar>>()
    // kotlin convention: 위에 애랑 같은 값인데 외부에서 사용가능  (현재의 _calendarList를 get)
    val calendarList: LiveData<List<Calendar>> get() = _calendarList

    init { // 초기화 시 서버에서 데이터를 받아옴
        Log.d(ControlsProviderService.TAG, "CalendarViewModel 생성자 호출")
        // 현재 년도, 월 가져와서
        val now = LocalDate.now()
        val year : Int = now.year
        val month : Int = now.monthValue
        viewModelScope.launch {
            // .value : livedata가 가지고 있는 값으로 접근
            _calendarFamilyData.value = repository?.getFamilyData()
            _calendarList.value = repository?.getCalendarMonthList(year, month) as List<Calendar>?
            println("CalendarViewModel repository.getCalendarMonthList(): " + _calendarList.value)
        }
    }

    class Factory(private val application: Application) :
    ViewModelProvider.Factory { // factory pattern
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return CalendarViewModel(CalendarRepository.getInstance(application)!!) as T
        }
    }

    fun updateCalendarList(year : Int, month: Int){
        viewModelScope.launch {
            _calendarList.value = repository?.getCalendarMonthList(year, month) as List<Calendar>?
        }
    }

    fun addCalendar(requestCalendar: RequestCalendar){
        viewModelScope.launch {
            _calendarList.value = repository?.addCalendar(requestCalendar) as List<Calendar>
        }
    }
}



//
//    fun getCalendarDetail(calendar: Calendar) {
//        viewModelScope.launch {
//            val response = repository.getCalendarDetail(calendar.id)
//            _calendarList.value?.remove(calendar)
//            _calendarList.value = _calendarList.value
//            println("CalendarViewModel getCalendarDetail response: " + response)
//        }
//    }
//
//    fun getCalendarMonthList(year: Int, month: Int) {
//        viewModelScope.launch {
//            val calendar = repository.getCalendarMonthList(year) // update album
//            if (calendar != null) {
//                _calendarList.value?.add(calendar) // album list에 추가
//                _calendarList.value = _calendarList.value // list change 감지를 위해



