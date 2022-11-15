package com.ssafy.zip.android.viewmodel

import android.app.Application
import android.util.Log
import androidx.lifecycle.*
import com.ssafy.zip.android.data.BoardDetail
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.launch

class BoardDetailViewModel(private val repository: BoardRepository) : ViewModel() {
    private val _boardDetail = MutableLiveData<BoardDetail>()
    val boardDetail: LiveData<BoardDetail> get() = _boardDetail

    // 상세 정보
    fun getBoardDetail(id : Long) {
        viewModelScope.launch {
            _boardDetail.value = repository.getBoardDetailById(id)
        }
    }

    // 댓글 달기
    fun postBoardComment(id : Long, content : String){
        viewModelScope.launch {
            val response = repository.postBoardComment(id, content)
//            println("게시글 등록 시작!: " + id)
            // 만약 response가 정상적으로 실행되면
            if(response.equals("200")){
                // 데이터 다시 가져와서 변화시키겠지?
                getBoardDetail(id)
            }
        }
    }

    class Factory(private val application: Application) : ViewModelProvider.Factory {
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return BoardDetailViewModel(BoardRepository.getInstance(application)!!) as T
        }
    }

}