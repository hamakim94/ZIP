package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import android.widget.Toast
import androidx.databinding.DataBindingUtil
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.ssafy.zip.android.adapter.CommentAdapter
import com.ssafy.zip.android.adapter.CommentQnaAdapter
import com.ssafy.zip.android.adapter.HomeAdapter
import com.ssafy.zip.android.adapter.MemberAdapter
import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.databinding.FragmentRecordBoardDetailBinding
import com.ssafy.zip.android.databinding.FragmentRecordQnaDetailBinding
import com.ssafy.zip.android.viewmodel.QnaDetailViewModel
import java.text.SimpleDateFormat
import java.util.*
import kotlin.collections.ArrayList

class RecordQnaDetailFragment : Fragment() {

    private var _binding: FragmentRecordQnaDetailBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private val viewModel by viewModels<QnaDetailViewModel> { QnaDetailViewModel.Factory(Application()) }

    // 가족 사진 보여주기용
    private lateinit var homeList: ArrayList<FamilyMember>
    private lateinit var homeAdapter: HomeAdapter


    // 댓글 보여주기용
    private lateinit var commentList : ArrayList<Comment>
    private lateinit var commentQnaAdapter: CommentQnaAdapter


    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = DataBindingUtil.inflate(
            inflater, R.layout.fragment_record_qna_detail, container, false
        )
        binding.viewmodel = viewModel
        // 나중에 여기서 조건들주기
        binding.qnaCommentPostBtn.setOnClickListener{
            val id = viewModel.qnaDetail.value?.Id
            //날짜 변환

            var now = System.currentTimeMillis()
            var nowDate : Date = Date(now)

            var dateFormat = SimpleDateFormat("yyyy-MM-dd")
            var nowTime = dateFormat.format(nowDate) // 현재 시간
            var regTime = dateFormat.format(viewModel.qnaDetail.value?.reg) // 게시글 작성일


            if(nowTime.equals(regTime)){
                if(id != null && binding.qnaCommentContent.text.isNotEmpty()){
                    println(binding.qnaCommentContent.text)
                    viewModel.addQnaAnswer(id, binding.qnaCommentContent.text.toString())
                    binding.qnaCommentContent.text = null
                }
            } else{
                MaterialAlertDialogBuilder(activity)
                    .setMessage("현재 날짜와 다릅니다")
                    .setPositiveButton("확인") { dialog, which ->
                        dialog.dismiss()
                    }
                    .show()
            }


        }
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val qnaData = arguments?.getParcelable<BoardModel.Qna>("Qna")
        val id = qnaData?.id
        if(id != null){
            viewModel.getQnaDetail(id)
            binding.homeRecyclerView.setHasFixedSize(true)
            binding.commentRecyclerView.setHasFixedSize(true)
            observeFamily(activity)
            observeViewModel(activity)
            homeList = ArrayList()
            commentList = ArrayList()
        }

    }

    private fun observeFamily(activity: MainActivity){
        val observer = Observer<Family> { _ ->
            binding.viewmodel = viewModel
            if(viewModel.familyData.value != null){
                homeList = viewModel.familyData.value!!.familyList
            }
            homeAdapter = HomeAdapter(homeList, viewModel.familyData.value?.familyName!!, childFragmentManager)
            binding.homeRecyclerView.adapter = homeAdapter

            val cnt = when(homeAdapter.itemCount){
                in 1..4 -> homeAdapter.itemCount
                in 5..6 -> 3
                else -> 4
            }
            binding.homeRecyclerView.layoutManager = GridLayoutManager(activity, cnt)
        }
        viewModel.familyData.observe(viewLifecycleOwner, observer)
    }


    private fun observeViewModel(activity: MainActivity) {
        val observer = object : Observer<QnaDetail> {
            override fun onChanged(qnaDetail: QnaDetail?) {
                if (qnaDetail != null) {
                    onUpdateQnaDetail()
                }
            }
        }
        viewModel.qnaDetail.observe(viewLifecycleOwner, observer)
    }


    private fun onUpdateQnaDetail() {
        val qnaDetail: QnaDetail? = viewModel.qnaDetail.value
        // 사용자 프로필 이미지
        if (qnaDetail != null) {
            binding.qnaDetailReg.text = qnaDetail.reg.toString()
            binding.qnaDetailContent.text = "Q. " + qnaDetail.question
            commentList = qnaDetail.answers
            commentQnaAdapter = CommentQnaAdapter(commentList)
            binding.commentRecyclerView.adapter = commentQnaAdapter
            binding.commentRecyclerView.layoutManager =LinearLayoutManager(activity)

        }


    }




}