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
import androidx.navigation.fragment.findNavController
import com.bumptech.glide.Glide
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.databinding.FragmentProfileDialogBinding
import com.ssafy.zip.android.repository.HomeRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class CustomProfileDialog : DialogFragment() {
    private var _binding: FragmentProfileDialogBinding? = null
    private val binding get() = _binding!!
    private var editflag = false


    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentProfileDialogBinding.inflate(inflater, container, false)
        val data = requireArguments().getParcelable<FamilyMember>("key")
        val familyName = requireArguments().getString("familyName")
        val familyId = requireArguments().getLong("familyUserId")
        var userId = App.prefs.getString("userId", "").toLong()

        if (familyId != null) {
            if (familyId != userId) {
                binding.editBtn.isGone = true
            } else {
                val dm = resources.displayMetrics
                val size = Math.round(20 * dm.density)
                binding.profileConstraint.setPadding(0, 0, 0, size)
            }
        }
        binding.dialogButton.text = "닫기"
        if (data != null) {
            if (data.character == null) {
                binding.dialogImage.setImageResource(R.drawable.ex)
            } else {
                Glide.with(binding.root)
                    .load(data.character!!.img)
                    .into(binding.dialogImage)
            }
            binding.dialogRightName.text = data.name
            binding.dialogRightFamily.text = familyName
            binding.dialogRightNickname.text = data.nickname
        }
        binding.dialogButton.setOnClickListener {
            dismiss()
                    }
        binding.editBtn.setOnClickListener {
            val args = Bundle()
            args.putParcelable("data", data)
            args.putString("familyName", familyName)
           findNavController().navigate(R.id.action_to_modify, args)

//            if (!editflag) {
//                editflag = true
//                binding.dialogRightFamily.isGone = true
//                binding.dialogRightEditfamilyLayout.isGone = false
//                binding.dialogRightNickname.isGone = true
//                binding.dialogRightEditnicknameLayout.isGone = false
//                binding.dialogButton.text = "수정하기"
//            } else {
//                editflag = false
//                binding.dialogRightFamily.isGone = false
//                binding.dialogRightEditfamilyLayout.isGone = true
//                binding.dialogRightNickname.isGone = false
//                binding.dialogRightEditnicknameLayout.isGone = true
//                binding.dialogButton.text = "닫기"
//            }

        }

        return binding.root
    }

    override fun onDismiss(dialog: DialogInterface) {
        super.onDismiss(dialog)
        CoroutineScope(Dispatchers.Main).launch {
            val instance = HomeRepository.getInstance(Application())
            var response = instance?.getFamily()
//            println("response in Dialog :  " + response.toString())
        }


    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }
}