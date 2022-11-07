package com.ssafy.zip.android.viewmodel

import android.app.Application
import android.util.Log
import androidx.lifecycle.*
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.QnaDetail
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.launch

class QnaDetailViewModel(private val repository: BoardRepository) : ViewModel() {

    private val _qnaDetail = MutableLiveData<QnaDetail>()
    val qnaDetail: LiveData<QnaDetail> get() = _qnaDetail
    private val _familyData = MutableLiveData<Family>()
    val familyData : LiveData<Family> get() = _familyData
    private val _userData = MutableLiveData<User>()
    val userData : LiveData<User> get() = _userData


    init {
        Log.d("TAG", "QnaDetailViewModel 생성자 호출")
        viewModelScope.launch {
            _familyData.value = repository.getFamily()
            _userData.value = repository.getUserData()
        }
    }
    fun getUserData() {
        viewModelScope.launch {
            _userData.value = repository.getUserData()
        }
    }


    // 백문백답 상세 페이지
    fun getQnaDetail(id : Long){
        Log.d("TAG", "QnaDetailViewModel 데이터 가져오기")
        viewModelScope.launch {
            _qnaDetail.value = repository.getQnaDetail(id)
        }
    }
    // 댓글 달기 필요
    fun addQnaAnswer(id : Long, content : String){
        viewModelScope.launch {
            val response = repository.postQnaAnswer(id, content)
            if(response.equals("200")){
                getQnaDetail(id)
            }
        }
    }


    class Factory(private val application: Application) : ViewModelProvider.Factory {
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return QnaDetailViewModel(BoardRepository.getInstance(application)!!) as T
        }
    }
}

