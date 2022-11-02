package com.ssafy.zip.android.viewmodel

import android.app.Application
import android.util.Log
import androidx.lifecycle.*
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.QnaDetail
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.launch

class QnaDetailViewModel(private val repository: BoardRepository) : ViewModel() {

    private val _qnaDetail = MutableLiveData<QnaDetail>()
    val qnaDetail: LiveData<QnaDetail> get() = _qnaDetail
    private val _familyData = MutableLiveData<Family>()
    val familyData : LiveData<Family> get() = _familyData

    init {
        Log.d("TAG", "BoardDetailViewModel 생성자 호출")
        viewModelScope.launch {
            _familyData.value = repository.getFamily()
            println(familyData.value)
        }
    }

    // 백문백답 상세 페이지
    fun getQnaDetail(id : Long){
        Log.d("TAG", "QnaDetailViewModel 데이터 가져오기")
        viewModelScope.launch {
            println("게시글 상세 가져오기!! + id = "+ id)
            _familyData.value = repository.getFamily()
            _qnaDetail.value = repository.getQnaDetail(id)
            println(familyData.value)
        }
    }
    // 댓글 달기 필요

    class Factory(private val application: Application) : ViewModelProvider.Factory {
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return QnaDetailViewModel(BoardRepository.getInstance(application)!!) as T
        }
    }
}

//class HomeViewModel(private val repository: HomeRepository): ViewModel(){
//    private val _familyData = MutableLiveData<Family>()
//    val familyData : LiveData<Family> get() = _familyData
//    private val _missions = MutableLiveData<Missions>()
//    val missions : LiveData<Missions> get() = _missions
//
//    init {
//        Log.d("TAG", "HomeViewModel 생성자 호출")
//        viewModelScope.launch {
//            _familyData.value = repository.getFamily()
//            _missions.value = repository.getMission()
//        }
//    }
//
//    class Factory(private val application: Application) : ViewModelProvider.Factory{
//        override fun <T : ViewModel> create(modelClass: Class<T>): T {
//            return HomeViewModel(HomeRepository.getInstance(application)!!) as T
//        }
//    }
//
//}