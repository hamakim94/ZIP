package com.ssafy.zip.android.viewmodel

import android.app.Application
import android.util.Log
import androidx.lifecycle.*
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.data.response.ResponseBoardAll
import com.ssafy.zip.android.repository.AlbumRepository
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.launch
import okhttp3.MultipartBody
import okhttp3.RequestBody

class BoardViewModel(private val repository: BoardRepository) : ViewModel() {

    private val _boardList = MutableLiveData<ArrayList<ResponseBoardAll>>()
    val boardList: LiveData<ArrayList<ResponseBoardAll>> get() = _boardList

    class Factory(private val application: Application) :
        ViewModelProvider.Factory { // factory pattern
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return BoardViewModel(BoardRepository.getInstance(application)!!) as T
        }
    }

    fun getBoardAll() {
        viewModelScope.launch {
            _boardList.value = repository.getBoardAll()
        }
    }

}