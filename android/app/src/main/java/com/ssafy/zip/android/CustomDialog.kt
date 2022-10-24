package com.ssafy.zip.android

import android.os.Bundle
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

        // 각 버튼 클릭 시 각각의 함수 호출
        binding.dialogButton.setOnClickListener {
            buttonClickListener.onButton1Clicked()
            dismiss()
        }

        return binding.root
    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }
    // 인터페이스
    interface OnButtonClickListener {
        fun onButton1Clicked()
    }
    // 클릭 이벤트 설정
    fun setButtonClickListener(buttonClickListener: OnButtonClickListener) {
        this.buttonClickListener = buttonClickListener
    }
    // 클릭 이벤트 실행
    private lateinit var buttonClickListener: OnButtonClickListener
}