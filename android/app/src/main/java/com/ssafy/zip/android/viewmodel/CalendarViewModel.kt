package com.ssafy.zip.android.viewmodel

import android.app.Application
import android.service.controls.ControlsProviderService
import android.util.Log
import androidx.lifecycle.*
import com.ssafy.zip.android.data.Calendar
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.request.RequestCalendar
import com.ssafy.zip.android.repository.CalendarRepository
import kotlinx.coroutines.launch
import java.time.LocalDate


class CalendarViewModel(private val repository: CalendarRepository) : ViewModel() {
    // private val _month = MutableLiveData<Int>()
    // val month : LiveData<Int> get() = _month
    private val _calendarFamilyData = MutableLiveData<ArrayList<FamilyMember>>()
    val calendarFamilyData : LiveData<ArrayList<FamilyMember>> get() = _calendarFamilyData

    private val _calendarList = MutableLiveData<ArrayList<Calendar>>()
    val calendarList: LiveData<ArrayList<Calendar>> get() = _calendarList
//    private val _calendarList = MutableLiveData<List<Calendar>>()
//    val calendarList: LiveData<List<Calendar>> get() = _calendarList

    init { // 초기화 시 서버에서 데이터를 받아옴
        Log.d(ControlsProviderService.TAG, "CalendarViewModel 생성자 호출")
        // 현재 년도, 월 가져와서
        val now = LocalDate.now()
        val year : Int = now.year
        val month : Int = now.monthValue
        viewModelScope.launch {
            // .value : livedata가 가지고 있는 값으로 접근
            _calendarFamilyData.value = repository?.getFamilyData()
            _calendarList.value = repository?.getCalendarMonthList(year, month) as ArrayList<Calendar>?
//            println("CalendarViewModel repository.getCalendarMonthList(): " + _calendarList.value)
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
            _calendarList.value = repository?.getCalendarMonthList(year, month) as ArrayList<Calendar>?
        }
    }

    fun addCalendar(requestCalendar: RequestCalendar) {
        viewModelScope.launch {
            val addedCalendar = repository.addCalendar(requestCalendar)
            if(addedCalendar != null){
                _calendarList.value?.add(addedCalendar)
                _calendarList.value = _calendarList.value
            }
//            val setList = _calendarList.value?.toMutableList()
//            if (setList != null) {
//                repository?.addCalendar(requestCalendar)?.let { setList.add(it) }
//                _calendarList.value = setList.toList()
//            }
        }
    }

    fun deleteCalendar(calendar : Calendar) {
        viewModelScope.launch {
            val response = repository.deleteCalendar(calendar.id)
//            _calendarList.value?.listIterator(calendar.id.toInt())
            _calendarList.value?.removeAt(calendar.id.toInt())
            _calendarList.value = _calendarList.value
            println("CalendarViewModel deleteCalendar response: " + response)
        }
    }
}








