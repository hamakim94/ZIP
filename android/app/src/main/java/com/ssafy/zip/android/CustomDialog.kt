package com.ssafy.zip.android

import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.DialogFragment
import com.ssafy.zip.android.databinding.FragmentDialogBinding

class CustomDialog : DialogFragment() {
    private var _binding : FragmentDialogBinding ? = null
    private val binding get() = _binding!!

    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?): View? {
        _binding = FragmentDialogBinding.inflate(inflater, container, false)
        val data = requireArguments().getParcelable<Member>("key")
        if (data != null) {
            binding.dialogImage.setImageResource(data.image)
            binding.dialogRightName.setText(data.name)
            binding.dialogRightFamily.setText(data.family)
            binding.dialogRightNickname.setText(data.nickname)
        }
        binding.dialogButton.setOnClickListener {
            dismiss()
        }

        return binding.root
    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }
}