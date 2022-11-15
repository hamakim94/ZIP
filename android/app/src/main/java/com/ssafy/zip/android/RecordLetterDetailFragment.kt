package com.ssafy.zip.android

import android.app.Application
import android.graphics.Color
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.appcompat.widget.Toolbar
import androidx.fragment.app.Fragment
import com.bumptech.glide.Glide
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.databinding.FragmentRecordLetterDetailBinding
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class RecordLetterDetailFragment : Fragment() {
    private var _binding: FragmentRecordLetterDetailBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentRecordLetterDetailBinding.inflate(inflater, container, false)

        // 여기서 couroutinescope 로 id를 가져와야 한다

        val view = binding.root
        return view
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val toolbar: Toolbar = view.findViewById(R.id.letter_detail_appbar)
        // 앨범명으로 appbar title 지정
        toolbar.title = "오늘의 편지 상세"

        val userId = arguments?.getLong("userId")
        val letterData = arguments?.getParcelable<BoardModel.Letter>("Letter")

        // 누가 썼는지 알려줄게

        if (letterData != null) {
            if (letterData.from.id == userId) {
                binding.mailIcon.setImageResource(R.drawable.ic_baseline_mail_24)
                binding.letterUserNicknameDetail.text = (letterData.to.nickname + "에게 쓴 편지")

            } else {
                binding.mailIcon.setImageResource(R.drawable.ic_baseline_mark_email_read_24)
                binding.letterUserNicknameDetail.text = (letterData.from.nickname + "에게서 온 편지")

            }
            if(letterData.from.character != null){
                Glide.with(view).load(letterData.from.character!!.img)
                    .into(binding.letterImageDetail)
            } else{
                binding.letterImageDetail.setImageResource(R.drawable.ex)
            }

            when(letterData.stationery) {
                "yellow" -> binding.letterContainer.setBackgroundColor(Color.parseColor("#FFFBD9"))
                "green" -> binding.letterContainer.setBackgroundColor(Color.parseColor("#F4FFDC"))
                "pink" -> binding.letterContainer.setBackgroundColor(Color.parseColor("#FFE5E5"))
                else ->  binding.letterContainer.setBackgroundColor(Color.parseColor("#FFFBD9"))
            }
            binding.letterRegDetail.text = letterData?.reg?.let { DateUtil.getRegDate(it) }
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