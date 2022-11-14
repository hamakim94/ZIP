package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.databinding.DataBindingUtil
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.GridLayoutManager
import com.ssafy.zip.android.adapter.CharacterAdapter
import com.ssafy.zip.android.databinding.FragmentCharacterBinding
import com.ssafy.zip.android.viewmodel.CharacterViewModel
import com.ssafy.zip.android.data.Character
import com.ssafy.zip.android.data.CharacterItem
import com.ssafy.zip.android.databinding.FragmentRecordAlbumBinding
import com.ssafy.zip.android.repository.CharacterRepository
import com.ssafy.zip.android.viewmodel.HomeViewModel

class CharacterFragment : Fragment() {
    private var _binding: FragmentCharacterBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private lateinit var characterAdapter: CharacterAdapter
    private lateinit var characterList: ArrayList<Character>
    private lateinit var characterItemList: ArrayList<CharacterItem>
    private lateinit var selectedCharacter: Character
    private var selectedCharacterIdx: Int = -1
    /*var link = CharacterFunc()*/

    private val viewModel by viewModels<CharacterViewModel>{CharacterViewModel.Factory(Application())}

    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentCharacterBinding.inflate(inflater, container, false)
        binding.viewmodel = viewModel

        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        observeCharacterList(activity)

        /*characterAdapter = CharacterAdapter(arrayListOf(), activity)
        characterAdapter.setOnItemClickListener(object: CharacterAdapter.OnItemClickListener{
            override fun onItemClick(view: View, position: Int) {
                println("characterAdapter.setOnItemClickListener onItemClick : " + position)
            }
        })*/
    }

    private fun observeCharacterList(activity: MainActivity){
        val observer = Observer<ArrayList<Character>> {
            println("observeCharacterList")

            binding.viewmodel = viewModel
            characterItemList = arrayListOf()
            if(viewModel.characterList.value != null){
                characterList = viewModel.characterList.value!!

                for(character : Character in characterList){
                    characterItemList.add(CharacterItem(false, character))
                }
            }
            println(1)

            characterAdapter = CharacterAdapter(characterItemList, activity)
            println(2)

            characterAdapter.setOnItemClickListener(object: CharacterAdapter.OnItemClickListener{
                override fun onItemClick(view: View, position: Int) {
                    if(selectedCharacterIdx == -1){ // 선택된게 없을 경우
                        println("1 position: " + position)
                        characterAdapter.notifyItemChanged(position) // 선택O 상태로 변경해야됨
                        selectedCharacterIdx = position
                    } else if(selectedCharacterIdx == position){ // 현재 선택되어있는 캐릭터를 다시 선택한 경우
                        println("2 position: " + position)
                        characterAdapter.notifyItemChanged(selectedCharacterIdx) // 선택X 상태로 변경해야됨
                        selectedCharacterIdx = -1
                    } else{ // 선택한 캐릭터가 있고 본인이 아닐 경우
                        println("3 position: " + position)
                        characterAdapter.notifyItemChanged(selectedCharacterIdx, "unselect") // 선택X 상태로 변경해야됨
                        characterAdapter.notifyItemChanged(position) // 선택O 상태로 변경해야됨
                        selectedCharacterIdx = position
                    }
                }
            })
            binding.characterRecyclerView.adapter = characterAdapter
            binding.characterRecyclerView.layoutManager = GridLayoutManager(activity, 4)
        }
        viewModel.characterList.observe(viewLifecycleOwner, observer)
    }

    /*inner class CharacterFunc{
        fun selectCharacter(characterIdx : Int, character: Character){
            println("notifyItemChanged to " + selectedCharacterIdx)
            // 이전 selectedCharacterId의 adapter
            characterAdapter.notifyItemChanged(selectedCharacterIdx, character)

            println("selectCharacter: " + characterIdx)
            selectedCharacterIdx = characterIdx
            selectedCharacter = character
        }
    }*/


    /*public interface OnItemClickEventListener{
        fun OnItemClick(pos : Int)
    }

    private var itemClickListener : OnItemClickEventListener{

    }*/
}