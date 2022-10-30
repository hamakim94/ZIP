package com.ssafy.zip.android.viewmodel

import android.app.Application
import android.service.controls.ControlsProviderService
import android.util.Log
import androidx.lifecycle.*
import com.ssafy.zip.android.data.Album
import com.ssafy.zip.android.repository.AlbumRepository
import kotlinx.coroutines.launch

class AlbumPhotoViewModel(private val repository: AlbumRepository, private val id: Long?) : ViewModel() {
    private val _album = MutableLiveData<Album>()
    val album: LiveData<Album> get() = _album

    init { // 초기화 시 서버에서 데이터를 받아옴
        Log.d(ControlsProviderService.TAG, "AlbumPhotoViewModel 생성자 호출")
        viewModelScope.launch {
            _album.value = id?.let { repository.getAlbumById(it) }
        }
    }

    class Factory(private val application : Application, private val id : Long?) : ViewModelProvider.Factory { // factory pattern
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return AlbumPhotoViewModel(AlbumRepository.getInstance(application)!!, id) as T
        }
    }
}