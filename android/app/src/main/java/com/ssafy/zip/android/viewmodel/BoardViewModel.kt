package com.ssafy.zip.android.viewmodel

import android.app.Application
import android.service.controls.ControlsProviderService
import android.util.Log
import androidx.lifecycle.*
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.data.Missions
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.data.response.ResponseBoardAll
import com.ssafy.zip.android.repository.AlbumRepository
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.launch
import okhttp3.MultipartBody
import okhttp3.RequestBody

class BoardViewModel(private val repository: BoardRepository) : ViewModel() {

    private val _boardList = MutableLiveData<ArrayList<ResponseBoardAll>>()
    val boardList: LiveData<ArrayList<ResponseBoardAll>> get() = _boardList
    private val _missions = MutableLiveData<Missions>()
    val missions : LiveData<Missions> get() = _missions
    private val _userData = MutableLiveData<User>()
    val userData : LiveData<User> get() = _userData

    class Factory(private val application: Application) :
        ViewModelProvider.Factory { // factory pattern
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return BoardViewModel(BoardRepository.getInstance(application)!!) as T
        }
    }
    init { // 초기화 시 서버에서 데이터를 받아옴
        viewModelScope.launch {
            // .value : livedata가 가지고 있는 값으로 접근
            _missions.value = repository.getMission()
            _userData.value = repository.getUserData()
        }
    }
    fun getMission(){
        viewModelScope.launch {
            // .value : livedata가 가지고 있는 값으로 접근
            _missions.value = repository.getMission()
        }
    }

    fun getUserData(){
        viewModelScope.launch {
            _userData.value = repository.getUserData()
        }
    }

    fun getBoardAll() {
        viewModelScope.launch {
            _boardList.value = repository.getBoardAll()
        }
    }

}