package com.ssafy.zip.android

import android.app.Application
import android.os.Bundle
import android.text.Editable
import android.text.TextWatcher
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.navigation.findNavController
import com.ssafy.zip.android.data.UserFamily
import com.ssafy.zip.android.databinding.FragmentFamilyEnterBinding
import com.ssafy.zip.android.repository.UserRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class FamilyEnterFragment : Fragment() {
    private var _binding: FragmentFamilyEnterBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentFamilyEnterBinding.inflate(inflater, container, false)
        binding.btnEnter.setOnClickListener{
            CoroutineScope(Dispatchers.Main).launch {
                val instance = UserRepository.getInstance(Application())
                var response = instance?.enterRoom(
                    code = binding.editRoom.text.toString().toInt())
                if(response is UserFamily){
                    binding.root.findNavController().navigate(R.id.action_familyEnterFragment_to_homeFragment)
                }

            }
        }
        binding.roomMessage.setOnClickListener {
            val action = FamilyEnterFragmentDirections.actionFamilyEnterFragmentToFamilyCreateFragment()
            binding.root.findNavController().navigate(action)
        }
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        initView()
    }

    private fun initView() {
        binding.btnEnter.isEnabled = false
        binding.enterRoom.editText?.addTextChangedListener(roomListener)
        binding.editRoom.hint = resources.getString(R.string.room_hint)
        binding.editRoom.setOnFocusChangeListener{_, hasFocus->
            if(hasFocus){
                binding.editRoom.hint = ""
            } else{
                binding.editRoom.hint = resources.getString(R.string.room_hint)
            }
        }
    }
    private val roomListener = object : TextWatcher {
        override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun afterTextChanged(s: Editable?) {
            if (s != null) {
                when {
                    s.isEmpty() -> {
                        binding.enterRoom.error = "방 코드를 입력해주세요."
                    }
                    else -> {
                        binding.enterRoom.error = null
                        binding.btnEnter.isEnabled = true
                    }
                }
            }
        }
    }
}