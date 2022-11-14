package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.navigation.findNavController
import androidx.navigation.fragment.navArgs
import androidx.recyclerview.widget.GridLayoutManager
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.ssafy.zip.android.adapter.CharacterAdapter
import com.ssafy.zip.android.databinding.FragmentCharacterBinding
import com.ssafy.zip.android.viewmodel.CharacterViewModel
import com.ssafy.zip.android.data.Character
import com.ssafy.zip.android.data.CharacterItem

class CharacterFragment : Fragment() {
    private var _binding: FragmentCharacterBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private lateinit var characterAdapter: CharacterAdapter
    private lateinit var characterList: ArrayList<Character>
    private lateinit var characterItemList: ArrayList<CharacterItem>
    private var selectedCharacter : Character? = null
    private var selectedCharacterIdx: Int = -1

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

        binding.characterSelectBtn.setOnClickListener{
            if(selectedCharacter != null){
                it.findNavController().previousBackStackEntry?.savedStateHandle?.set("character", selectedCharacter)
                /*it.findNavController().navigate(CharacterFragmentDirections.actionCharacterFragmentToSignupFragment())*/
                it.findNavController().popBackStack()
            } else {
                MaterialAlertDialogBuilder(activity).setMessage("캐릭터를 선택해주세요.")
                    .setPositiveButton("확인") { dialog, which ->
                        dialog.dismiss()
                    }.show()
            }
        }

        val args: CharacterFragmentArgs by navArgs()
        selectedCharacter = args.character

/*        if(selectedCharacter != null){
            selectedCharacterIdx = characterList.indexOf(selectedCharacter)
            println(selectedCharacterIdx)
        }*/
    }

    private fun observeCharacterList(activity: MainActivity){
        val observer = Observer<ArrayList<Character>> {
            binding.viewmodel = viewModel
            characterItemList = arrayListOf()
            if(viewModel.characterList.value != null){
                characterList = viewModel.characterList.value!!
                // 이미 캐릭터가 선택되어있을 경우에 가져올 데이터
                if(selectedCharacter != null){
                    selectedCharacterIdx = characterList.indexOf(selectedCharacter)
                }

                for(index in 0 until characterList.size){
                    if(index != selectedCharacterIdx){
                        characterItemList.add(CharacterItem(false, characterList[index]))
                    } else {
                        characterItemList.add(CharacterItem(true, characterList[index]))
                    }
                }
            }
            characterAdapter = CharacterAdapter(characterItemList, activity)

            characterAdapter.setOnItemClickListener(object: CharacterAdapter.OnItemClickListener{
                override fun onItemClick(view: View, position: Int) {
                    if(selectedCharacterIdx == -1){ // 선택된게 없을 경우
                        characterAdapter.notifyItemChanged(position) // 선택O 상태로 변경해야됨
                        selectedCharacterIdx = position
                        selectedCharacter = characterList[position]
                    } else if(selectedCharacterIdx == position){ // 현재 선택되어있는 캐릭터를 다시 선택한 경우
                        characterAdapter.notifyItemChanged(selectedCharacterIdx) // 선택X 상태로 변경해야됨
                        selectedCharacterIdx = -1
                        selectedCharacter = null
                    } else{ // 선택한 캐릭터가 있고 본인이 아닐 경우
                        characterAdapter.notifyItemChanged(selectedCharacterIdx, "unselect") // 선택X 상태로 변경해야됨
                        characterAdapter.notifyItemChanged(position) // 선택O 상태로 변경해야됨
                        selectedCharacterIdx = position
                        selectedCharacter = characterList[position]
                    }
                }
            })
            binding.characterRecyclerView.adapter = characterAdapter
            binding.characterRecyclerView.layoutManager = GridLayoutManager(activity, 4)
        }
        viewModel.characterList.observe(viewLifecycleOwner, observer)
    }
}