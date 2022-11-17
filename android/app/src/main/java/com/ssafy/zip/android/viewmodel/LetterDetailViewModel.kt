package com.ssafy.zip.android.viewmodel

import android.app.Application
import androidx.lifecycle.*
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.launch

class LetterDetailViewModel(private val repository: BoardRepository) : ViewModel() {
    private val _letterDetail = MutableLiveData<BoardModel.Letter>()
    val qnaDetail: LiveData<BoardModel.Letter> get() = _letterDetail

    fun getLetterDetail(id : Long) {
        viewModelScope.launch {
            _letterDetail.value = repository.getLetterDetail(id)
        }
    }
    class Factory(private val application: Application) : ViewModelProvider.Factory {
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return LetterDetailViewModel(BoardRepository.getInstance(application)!!) as T
        }
    }
}