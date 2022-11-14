package com.ssafy.zip.android

import android.app.Application
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.core.view.isGone
import androidx.fragment.app.Fragment
import androidx.navigation.findNavController
import com.bumptech.glide.Glide
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.request.RequestModify
import com.ssafy.zip.android.databinding.FragmentModifyBinding
import com.ssafy.zip.android.repository.UserRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class ModifyFragment : Fragment() {

    private var _binding: FragmentModifyBinding? = null
    private val binding get() = _binding!!
    private lateinit var data: FamilyMember
    private lateinit var familyName: String
    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentModifyBinding.inflate(inflater, container, false)
        data = requireArguments().getParcelable<FamilyMember>("data")!!
        familyName = requireArguments().getString("familyName").toString()
        binding.editFamilyName.hint = familyName
        if (data != null) {
            binding.editNickname.hint = data.nickname
        }

        binding.editFamilyName.setOnFocusChangeListener { _, hasFocus ->
            if (hasFocus) {
                binding.editFamilyName.hint = ""
            } else {
                binding.editFamilyName.hint = familyName
            }
        }
        binding.editNickname.setOnFocusChangeListener { _, hasFocus ->
            if (hasFocus) {
                binding.editNickname.hint = ""
            } else {
                if (data != null) {
                    binding.editNickname.hint = data.nickname
                }
            }
        }
        if (data != null) {
            if (data.profileImg == null) {
                binding.profile.setImageResource(R.drawable.ex)
            } else {
                Glide.with(binding.root)
                    .load(data.profileImg!!.img)
                    .into(binding.profile)
            }
        }


        return binding.root;
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        binding.profile.setOnClickListener {

        }

        binding.btnModify.setOnClickListener {
            CoroutineScope(Dispatchers.Main).launch {
                val instance = UserRepository.getInstance(Application())

                var bodyFamilyName = if (binding.editFamilyName.text?.isEmpty() == true) {
                    familyName
                } else binding.editFamilyName.text.toString()
                var nickName = if (binding.editNickname.text?.isEmpty() == true) data.nickname
                else binding.editFamilyName.text.toString()
                var response = instance?.modifyUser(
                    // 첫번째 값을 선택한 캐릭터값으로 넣어주기
                    RequestModify(1, bodyFamilyName, nickName)
                )
                if (response != null)
                    it.findNavController()
                        .navigate(ModifyFragmentDirections.actionModifyFragmentToHomeFragment())
                else
                    Toast.makeText(context, "입력을 다시 확인해주세요", Toast.LENGTH_SHORT)
            }
        }

    }
}