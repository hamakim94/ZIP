package com.ssafy.zip.android.viewmodel

import android.app.Application
import androidx.lifecycle.*
import com.ssafy.zip.android.data.BoardDetail
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.launch

class BoardDetailViewModel(private val repository: BoardRepository) : ViewModel() {
    private val _boardDetail = MutableLiveData<BoardDetail>()
    val boardDetail: LiveData<BoardDetail> get() = _boardDetail

    class Factory(private val application: Application) : ViewModelProvider.Factory {
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return BoardDetailViewModel(BoardRepository.getInstance(application)!!) as T
        }
    }
    fun getBoardDetail(id : Long) {
        viewModelScope.launch {
            println("viewmodel id: " + id)
            _boardDetail.value = repository.getBoardDetailById(id)
        }
    }

}