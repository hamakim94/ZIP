package com.ssafy.zip.android.viewmodel

import android.app.Application
import android.content.ContentResolver
import android.content.Context
import android.net.Uri
import android.os.FileUtils
import android.service.controls.ControlsProviderService
import android.util.Log
import androidx.lifecycle.*
import com.ssafy.zip.android.data.Album
import com.ssafy.zip.android.data.Photo
import com.ssafy.zip.android.data.request.RequestPhoto
import com.ssafy.zip.android.repository.AlbumRepository
import kotlinx.coroutines.launch
import okhttp3.MediaType
import okhttp3.MultipartBody
import okhttp3.RequestBody
import retrofit2.http.Multipart
import java.io.File
import java.io.FileOutputStream
import java.io.IOError
import java.io.IOException

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

    fun addPhotos(images : ArrayList<Uri>, albumId : Long?, pictureId : Long?, context : Context) {
        val imageList = ArrayList<MultipartBody.Part>()
        val contentResolver : ContentResolver = context.contentResolver

        for(index in 0 until images.size) {
            try {
                val fileName = System.currentTimeMillis().toString()
                val filePath : String = context.applicationInfo.dataDir + File.separator + fileName
                val file = File(filePath)
                // 매개변수로 받은 uri를 통해 이미지에 필요한 데이터를 불러들임
                val inputStream = contentResolver.openInputStream(images[index])
                // 이미지 데이터를 다시 내보내면서 file 객체에 만들었던 경로를 이용
                val outputStream = FileOutputStream(file) // 파일을 쓸 수 있는 스트림 생성
                val buf = ByteArray(1024)
                var len : Int
                if (inputStream != null) {
                    while(inputStream.read(buf).also { len = it } > 0)
                        outputStream.write(buf, 0, len)
                    inputStream.close()
                }
                outputStream.close()
                val requestBody = RequestBody.create(MediaType.parse("image/*"), file)
                val body = MultipartBody.Part.createFormData("files", fileName, requestBody)

                imageList.add(body)
            } catch (ignore : IOException){
            }
        }

        viewModelScope.launch {
            val photoList = repository.uploadPhotos(imageList.toList(), albumId, pictureId)

            if (photoList != null) {
                for(index in 0 until photoList.size){
                    _album.value?.photoList?.add(photoList[index])
                }

                _album.value = _album.value
            }
        }
    }
}