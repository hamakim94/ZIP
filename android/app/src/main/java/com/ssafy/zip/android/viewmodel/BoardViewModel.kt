package com.ssafy.zip.android.viewmodel

import android.app.Application
import android.util.Log
import androidx.lifecycle.*
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.data.response.ResponseBoardAll
import com.ssafy.zip.android.repository.AlbumRepository
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.launch

class BoardViewModel(private val repository: BoardRepository) : ViewModel() {

    private val _boardList = MutableLiveData<ArrayList<ResponseBoardAll>>()
    val boardList : LiveData<ArrayList<ResponseBoardAll>> get() = _boardList

    init {
        Log.d("생성", "BoardViewModel 생성자 호출")
        viewModelScope.launch {
            _boardList.value = repository.getBoardAll()
            println("BoardViewModel repository.getBoard() " + repository.getBoardAll())
        }
    }

    class Factory(private val application : Application) : ViewModelProvider.Factory { // factory pattern
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return BoardViewModel(BoardRepository.getInstance(application)!!) as T
        }
    }
}