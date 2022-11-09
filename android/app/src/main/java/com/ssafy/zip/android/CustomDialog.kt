package com.ssafy.zip.android

import android.app.Application
import android.content.DialogInterface
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.core.view.isGone
import androidx.core.view.isInvisible
import androidx.fragment.app.DialogFragment
import androidx.fragment.app.FragmentTransaction
import androidx.navigation.findNavController
import com.bumptech.glide.Glide
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.data.request.RequestLoginData
import com.ssafy.zip.android.databinding.FragmentDialogBinding
import com.ssafy.zip.android.repository.BoardRepository
import com.ssafy.zip.android.repository.HomeRepository
import com.ssafy.zip.android.repository.UserRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.coroutineScope
import kotlinx.coroutines.launch
import okhttp3.MediaType
import okhttp3.RequestBody

class CustomDialog : DialogFragment() {
    private var _binding: FragmentDialogBinding? = null
    private val binding get() = _binding!!
    private var editflag = false

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentDialogBinding.inflate(inflater, container, false)
        val data = requireArguments().getParcelable<FamilyMember>("key")
        val familyName = requireArguments().getString("familyName")
        val familyId = requireArguments().getLong("familyUserId")
        var userId = App.prefs.getString("userId", "").toLong()

        if (familyId != null) {
            if (familyId != userId) {
                binding.editBtn.isInvisible = true
            }
        }
        binding.dialogButton.text = "닫기"
        if (data != null) {
            if (data.profileImg == null) {
                binding.dialogImage.setImageResource(R.drawable.ex)
            } else {
                Glide.with(binding.root)
                    .load(data.profileImg)
                    .into(binding.dialogImage)
            }
            binding.dialogRightName.text = data.name
            binding.dialogRightFamily.text = familyName
            binding.dialogRightNickname.text = data.nickname
        }
        binding.dialogButton.setOnClickListener {
            if (binding.dialogButton.text.equals("닫기")) {
                dismiss()
            } else {
                CoroutineScope(Dispatchers.Main).launch {
                    val instance = UserRepository.getInstance(Application())
                    val bodyFamilyName = RequestBody.create(
                        MediaType.get("application/json; charset=utf-8"),
                        binding.dialogRightEditfamily.text.toString()
                    )
                    val bodyNickName = RequestBody.create(
                        MediaType.get("application/json; charset=utf-8"),
                        binding.dialogRightEditnickname.text.toString()
                    )
                    var response = instance?.modifyUser(
                        profileImg = null,
                        familyName = bodyFamilyName,
                        nickname = bodyNickName
                    )
                    println("response in Dialog :  " + response.toString())
                    if (response != null) {
                        editflag = true
                        binding.dialogRightFamily.isGone = false
                        binding.dialogRightEditfamilyLayout.isGone = true
                        binding.dialogRightNickname.isGone = false
                        binding.dialogRightEditnicknameLayout.isGone = true
                        binding.dialogButton.text = "닫기"
                        dismiss()

                    }

                }
            }
        }
        binding.editBtn.setOnClickListener {
            if (!editflag) {
                editflag = true
                binding.dialogRightFamily.isGone = true
                binding.dialogRightEditfamilyLayout.isGone = false
                binding.dialogRightNickname.isGone = true
                binding.dialogRightEditnicknameLayout.isGone = false
                binding.dialogButton.text = "수정하기"
            } else {
                editflag = false
                binding.dialogRightFamily.isGone = false
                binding.dialogRightEditfamilyLayout.isGone = true
                binding.dialogRightNickname.isGone = false
                binding.dialogRightEditnicknameLayout.isGone = true
                binding.dialogButton.text = "닫기"
            }

        }
        binding.dialogRightEditname.hint = binding.dialogRightName.text
        binding.dialogRightEditfamily.hint = binding.dialogRightFamily.text
        binding.dialogRightEditnickname.hint = binding.dialogRightNickname.text

        binding.dialogRightEditname.setOnFocusChangeListener { _, hasFocus ->
            if (hasFocus) {
                binding.dialogRightEditname.hint = ""
            } else {
                binding.dialogRightEditname.hint = binding.dialogRightName.text
            }
        }
        binding.dialogRightEditfamily.setOnFocusChangeListener { _, hasFocus ->
            if (hasFocus) {
                binding.dialogRightEditfamily.hint = ""
            } else {
                binding.dialogRightEditfamily.hint = binding.dialogRightFamily.text
            }
        }
        binding.dialogRightEditnickname.setOnFocusChangeListener { _, hasFocus ->
            if (hasFocus) {
                binding.dialogRightEditnickname.hint = ""
            } else {
                binding.dialogRightEditnickname.hint = binding.dialogRightNickname.text
            }
        }
        return binding.root
    }

    override fun onDismiss(dialog: DialogInterface) {
        super.onDismiss(dialog)
        CoroutineScope(Dispatchers.Main).launch {
            val instance = HomeRepository.getInstance(Application())
            var response = instance?.getFamily()
            println("response in Dialog :  " + response.toString())
        }


    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }
}