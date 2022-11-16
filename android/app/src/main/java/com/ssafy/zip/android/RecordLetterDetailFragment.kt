package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.graphics.Color
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.appcompat.widget.Toolbar
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.GridLayoutManager
import com.bumptech.glide.Glide
import com.ssafy.zip.android.adapter.HomeAdapter
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.databinding.FragmentRecordLetterDetailBinding
import com.ssafy.zip.android.repository.BoardRepository
import com.ssafy.zip.android.viewmodel.LetterDetailViewModel
import com.ssafy.zip.android.viewmodel.QnaDetailViewModel
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class RecordLetterDetailFragment : Fragment() {
    private var _binding: FragmentRecordLetterDetailBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private lateinit var letterData: BoardModel.Letter
    private val viewModel by viewModels<LetterDetailViewModel> {LetterDetailViewModel.Factory(
        Application()
    )}

    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentRecordLetterDetailBinding.inflate(inflater, container, false)
        binding.viewmodel = viewModel
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val toolbar: Toolbar = view.findViewById(R.id.letter_detail_appbar)
        // 앨범명으로 appbar title 지정
        toolbar.title = "오늘의 편지 상세"
        val id = arguments?.getLong("id")
        if(id != null){
            viewModel.getLetterDetail(id)
        }
//        letterData = arguments?.getParcelable<BoardModel.Letter>("Letter")!!
//        if(letterData == null){
//            letterData = id?.let { viewModel.getLetterDetail(it) } as BoardModel.Letter
//        }
//        println("onViewCreated" + letterData)

        // 누가 썼는지
        observeLetter(activity)
    }
    private fun observeLetter(activity: MainActivity) {
        val observer = Observer<BoardModel.Letter> { _ ->
            binding.viewmodel = viewModel
            letterData = viewModel.qnaDetail.value!!
            println("aaaaaaaaaaaaaa =+ observing!!!!")
            val userId = App.prefs.getString("userId", "").toLong()
            if (letterData != null) {
                if (letterData.from.id == userId) {
                    binding.mailIcon.setImageResource(R.drawable.ic_outline_email_24)
                    binding.letterUserNicknameDetail.text = (letterData.to.nickname + "에게 쓴 편지")

                } else {
                    binding.mailIcon.setImageResource(R.drawable.ic_outline_mark_email_read_24)
                    binding.letterUserNicknameDetail.text = (letterData.from.nickname + "에게서 온 편지")

                }
                if(letterData.from.character != null){
                    Glide.with(activity).load(letterData.from.character!!.img)
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
        viewModel.qnaDetail.observe(viewLifecycleOwner, observer)
    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }
}