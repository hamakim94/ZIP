package com.ssafy.zip.android.viewmodel

import android.app.Application
import androidx.lifecycle.*
import com.ssafy.zip.android.data.Album
import com.ssafy.zip.android.repository.AlbumRepository
import kotlinx.coroutines.launch

class AlbumViewModel(private val repository: AlbumRepository) : ViewModel() {
    // mutablelivedata는 수정 가능, 그냥 livedata는 읽기 전용(수정 불가)
    // kotlin convention: 값이 바뀌는 얘들은 이 클래스 안에서만 사용되기 때문에 앞에 '_' 붙여줌
    private val _albumList = MutableLiveData<ArrayList<Album>>()
    // kotlin convention: 위에 애랑 같은 값인데 외부에서 사용가능  (현재의 _albumList를 get)
    val albumList: LiveData<ArrayList<Album>> get() = _albumList

    init { // 초기화 시 서버에서 데이터를 받아옴
//        Log.d(TAG, "AlbumViewModel 생성자 호출")
        viewModelScope.launch {
            // .value : livedata가 가지고 있는 값으로 접근
            _albumList.value = repository.getAllAlbumList()
//            println("AlbumViewModel repository.getAllAlbumList() " + repository.getAllAlbumList())
        }
    }

    class Factory(private val application : Application) : ViewModelProvider.Factory { // factory pattern
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return AlbumViewModel(AlbumRepository.getInstance(application)!!) as T
        }
    }

    fun addAlbum(title : String){
        viewModelScope.launch {
            val album = repository.updateAlbum(title) // update album
            if (album != null) {
                _albumList.value?.add(album) // album list에 추가
                _albumList.value = _albumList.value // list change 감지를 위해
            }
        }
    }

    fun deleteAlbum(album : Album) {
        viewModelScope.launch {
            val response = repository.deleteAlbum(album.id)
            _albumList.value?.remove(album)
            _albumList.value = _albumList.value
//            println("AlbumViewModel deleteAlbum response: " + response)
        }
    }
}