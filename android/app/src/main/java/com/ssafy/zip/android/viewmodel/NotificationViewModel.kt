package com.ssafy.zip.android.viewmodel

import android.app.Application
import androidx.lifecycle.*
import com.ssafy.zip.android.data.Notification
import com.ssafy.zip.android.repository.NotificationRepository
import kotlinx.coroutines.launch

class NotificationViewModel(private val repository: NotificationRepository): ViewModel() {
    private val _notificationList = MutableLiveData<ArrayList<Notification>>()
    val notificationList : LiveData<ArrayList<Notification>> get() = _notificationList

    init {
        viewModelScope.launch {
            _notificationList.value = repository.getNotification()
        }
    }

    fun getNotification() {
        viewModelScope.launch {
            _notificationList.value = repository.getNotification()
        }
    }

    class Factory(private val application: Application) : ViewModelProvider.Factory{
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return NotificationViewModel(NotificationRepository.getInstance(application)!!) as T

        }
    }
}
