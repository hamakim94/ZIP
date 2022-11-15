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
import com.google.firebase.firestore.auth.User
import com.ssafy.zip.android.data.UserFamily
import com.ssafy.zip.android.data.request.RequestFamilyroom
import com.ssafy.zip.android.databinding.FragmentFamilyCreateBinding
import com.ssafy.zip.android.repository.UserRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class FamilyCreateFragment : Fragment() {
    private var _binding: FragmentFamilyCreateBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentFamilyCreateBinding.inflate(inflater, container, false)
        //
        binding.btnCreateFamily.setOnClickListener{
            CoroutineScope(Dispatchers.Main).launch {
                val instance = UserRepository.getInstance(Application())
                var familyNum = Integer.parseInt(binding.editFamilyNumber.text.toString())
                var familyCreateData = instance?.createRoom(RequestFamilyroom(
                    binding.editFamilyName.text.toString(),
                    familyNum
                ))
                if(familyCreateData is UserFamily){
                    binding.root.findNavController().navigate(R.id.action_familyCreateFragment_to_homeFragment)
                } else{
                    println(familyCreateData)
                }
            }
        }


        return binding.root
    }
    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        initView()
    }

    private fun initView() {
        binding.btnCreateFamily.isEnabled = false

        binding.editFamilyName?.addTextChangedListener(familyListener)
        binding.editFamilyName.hint = "방 이름을 입력해주세요"
        binding.editFamilyName.setOnFocusChangeListener{_, hasFocus->
            if(hasFocus){
                binding.editFamilyName.hint = ""
            } else{
                binding.editFamilyName.hint = "방 이름을 입력해주세요"
            }
        }

        binding.editFamilyNumber?.addTextChangedListener(familyNumberListener)
        binding.editFamilyNumber.hint = "가족 인원 수를 입력해주세요"
        binding.editFamilyNumber.setOnFocusChangeListener { _, hasFocus ->
            if (hasFocus) {
                binding.editFamilyNumber.hint = ""
            } else {
                binding.editFamilyNumber.hint = "가족 인원 수를 입력해주세요"
            }
        }
    }
    private val familyListener = object : TextWatcher {
        override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun afterTextChanged(s: Editable?) {
            if (s != null) {
                when {
                    s.isEmpty() -> {
                        binding.editFamilyName.error = "방 이름을 입력해주세요"
                    }
                    else -> {
                        binding.editFamilyName.error = null
                        binding.btnCreateFamily.isEnabled = true
                    }
                }
            }
        }
    }
    private val familyNumberListener = object : TextWatcher {
        override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun afterTextChanged(s: Editable?) {
            if (s != null) {
                when {
                    s.isEmpty() -> {
                        binding.editFamilyName.error = "가족 인원 수를 입력해주세요"
                    }
                    else -> {
                        binding.editFamilyName.error = null
                        binding.btnCreateFamily.isEnabled = true
                    }
                }
            }
        }
    }
    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }
}