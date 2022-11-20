package com.ssafy.zip.android.viewmodel

import android.app.Application
import androidx.lifecycle.*
import com.ssafy.zip.android.data.Character
import com.ssafy.zip.android.repository.CharacterRepository
import kotlinx.coroutines.launch


class CharacterViewModel(private val repository: CharacterRepository): ViewModel() {
    private val _characterList = MutableLiveData<ArrayList<Character>>()
    val characterList: LiveData<ArrayList<Character>> get() = _characterList

    init { // 초기화 시 서버에서 데이터를 받아옴
//        Log.d(ControlsProviderService.TAG, "CharacterViewModel 생성자 호출")
        viewModelScope.launch {
            // .value : livedata가 가지고 있는 값으로 접근
            _characterList.value = repository.getCharacterList()
//            println("CharacterViewModel: " + _characterList.value)
        }
        /*var arrList : ArrayList<Character> = arrayListOf()
        arrList.add(Character(1, R.drawable.f_1, "asset1"))
        arrList.add(Character(2, R.drawable.f_2, "asset2"))
        arrList.add(Character(3, R.drawable.f_3, "asset3"))
        arrList.add(Character(4, R.drawable.f_4, "asset4"))
        arrList.add(Character(5, R.drawable.f_5, "asset5"))
        arrList.add(Character(6, R.drawable.f_6, "asset6"))
        arrList.add(Character(7, R.drawable.f_7, "asset7"))
        arrList.add(Character(8, R.drawable.f_8, "asset8"))
        _characterList.value = arrList
        _characterList.value = _characterList.value*/

        /*viewModelScope.launch {
            _characterList.value = repository.getCharacterList()
        }*/
    }

    class Factory(private val application: Application) : ViewModelProvider.Factory{
        override fun <T : ViewModel> create(modelClass: Class<T>): T {
            return CharacterViewModel(CharacterRepository.getInstance(application)!!) as T
        }
    }
}