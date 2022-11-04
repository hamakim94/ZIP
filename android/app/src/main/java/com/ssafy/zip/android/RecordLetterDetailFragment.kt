package com.ssafy.zip.android

import android.annotation.SuppressLint
import android.app.Application
import android.graphics.Color
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import android.widget.Toast
import androidx.constraintlayout.utils.widget.ImageFilterButton
import androidx.fragment.app.Fragment
import androidx.navigation.findNavController
import androidx.recyclerview.widget.LinearLayoutManager
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.databinding.FragmentRecordLetterBinding
import com.ssafy.zip.android.databinding.FragmentRecordLetterDetailBinding
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import okhttp3.MediaType
import okhttp3.RequestBody

class RecordLetterDetailFragment : Fragment() {
    private var _binding: FragmentRecordLetterDetailBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentRecordLetterDetailBinding.inflate(inflater, container, false)
        val view = binding.root
        return view
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val userId = arguments?.getLong("userId")
        val letterData = arguments?.getParcelable<BoardModel.Letter>("Letter")
        if (letterData != null) {
            if (letterData.from.id == userId) {
                binding.mailIcon.setImageResource(R.drawable.ic_baseline_mail_24)
                binding.letterUserNicknameDetail.text = (letterData.to.nickname + "에게 쓴 편지")
            } else {
                binding.mailIcon.setImageResource(R.drawable.ic_baseline_mark_email_read_24)
                binding.letterUserNicknameDetail.text = (letterData.from.nickname + "에게서 온 편지")
            }
            when(letterData.stationery) {
                "yellow" -> binding.letterContainer.setBackgroundColor(Color.parseColor("#FFFBD9"))
                "green" -> binding.letterContainer.setBackgroundColor(Color.parseColor("#F4FFDC"))
                "pink" -> binding.letterContainer.setBackgroundColor(Color.parseColor("#FFE5E5"))
                else ->  binding.letterContainer.setBackgroundColor(Color.parseColor("#FFFBD9"))
            }
            binding.letterRegDetail.text = letterData?.reg.toString()
            binding.letterContentDetail.text = letterData?.content
            if(!letterData.isRead){
                CoroutineScope(Dispatchers.Main).launch {
                    val instance = BoardRepository.getInstance(Application())
                    instance?.postLetterRead(letterData.id)
                }
            }
        }
    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }
}