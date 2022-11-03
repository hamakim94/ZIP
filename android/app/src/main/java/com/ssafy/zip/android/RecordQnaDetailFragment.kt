package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.view.inputmethod.InputMethodManager
import androidx.databinding.DataBindingUtil
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.LinearLayoutManager
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.ssafy.zip.android.adapter.CommentQnaAdapter
import com.ssafy.zip.android.adapter.HomeAdapter
import com.ssafy.zip.android.adapter.QnaProfileAdapter
import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.databinding.FragmentRecordQnaDetailBinding
import com.ssafy.zip.android.viewmodel.QnaDetailViewModel
import java.text.SimpleDateFormat
import java.util.*

class RecordQnaDetailFragment : Fragment() {

    private var _binding: FragmentRecordQnaDetailBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private val viewModel by viewModels<QnaDetailViewModel> { QnaDetailViewModel.Factory(Application()) }

    // 가족 사진 보여주기용
    private lateinit var homeList: ArrayList<FamilyMember>
    private lateinit var homeAdapter: QnaProfileAdapter

    // 댓글 보여주기용
    private lateinit var commentList: ArrayList<Comment>
    private lateinit var commentQnaAdapter: CommentQnaAdapter

    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }
//     키보드 가리기

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // 키보드 가리기 관련 -----------------------------
        val inputMethodManager = activity?.getSystemService(Context.INPUT_METHOD_SERVICE) as InputMethodManager
        _binding = DataBindingUtil.inflate(
            inflater, R.layout.fragment_record_qna_detail, container, false
        )
        binding.viewmodel = viewModel
        // 나중에 여기서 조건들주기
        binding.qnaCommentPostBtn.setOnClickListener {
            val id = viewModel.qnaDetail.value?.Id
            //날짜 변환
            var now = System.currentTimeMillis()
            var nowDate: Date = Date(now)
            var dateFormat = SimpleDateFormat("yyyy-MM-dd")
            var nowTime = dateFormat.format(nowDate) // 현재 시간
            var regTime = dateFormat.format(viewModel.qnaDetail.value?.reg) // 게시글 작성일

            // 내가 작성했는지 안 했는지 확인하기
            var check = false
            val answers = viewModel.qnaDetail.value?.answers
            val userId = viewModel.userData.value?.id
            if (answers != null) {
                val answered = answers.filter { it.user.id == userId }
                if (answered != null) check = true;
                println(answered)
            }

            if (nowTime.equals(regTime)) {
                if (check) {
                    MaterialAlertDialogBuilder(activity)
                        .setMessage("이미 작성하셨습니다")
                        .setPositiveButton("확인") { dialog, which ->
                            dialog.dismiss()
                        }
                        .show()
                    hideKeyboard(inputMethodManager, binding.root)
                }
                else if (id != null && binding.qnaCommentContent.text.isNotEmpty()) {
                    println(binding.qnaCommentContent.text)
                    viewModel.addQnaAnswer(id, binding.qnaCommentContent.text.toString())
                    binding.qnaCommentContent.text = null
                    hideKeyboard(inputMethodManager, binding.root)
                }
            } else {
                MaterialAlertDialogBuilder(activity)
                    .setMessage("당일에만 참여 가능합니다")
                    .setPositiveButton("확인") { dialog, which ->
                        dialog.dismiss()
                    }
                    .show()
                hideKeyboard(inputMethodManager, binding.root)
            }


        }
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val qnaData = arguments?.getParcelable<BoardModel.Qna>("Qna")
        val id = qnaData?.id
        if (id != null) {
            viewModel.getQnaDetail(id)
            binding.homeRecyclerView.setHasFixedSize(true)
            binding.commentRecyclerView.setHasFixedSize(true)
            observeFamily(activity)
            observeViewModel(activity)
            homeList = ArrayList()
            commentList = ArrayList()
        }

    }

    private fun observeFamily(activity: MainActivity) {
        val observer = Observer<Family> { _ ->
            binding.viewmodel = viewModel
            if (viewModel.familyData.value != null) {
                homeList = viewModel.familyData.value!!.familyList
            }
            homeAdapter = QnaProfileAdapter(
                homeList,
                viewModel,
//                viewModel.qnaDetail.value?.answers
                childFragmentManager
            )
            binding.homeRecyclerView.adapter = homeAdapter

            val cnt = when (homeAdapter.itemCount) {
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
                binding.viewmodel = viewModel
                homeAdapter = QnaProfileAdapter(
                    homeList,
                    viewModel,
//                viewModel.qnaDetail.value?.answers
                    childFragmentManager
                )
                binding.homeRecyclerView.adapter = homeAdapter

                val cnt = when (homeAdapter.itemCount) {
                    in 1..4 -> homeAdapter.itemCount
                    in 5..6 -> 3
                    else -> 4
                }
                binding.homeRecyclerView.layoutManager = GridLayoutManager(activity, cnt)
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
            binding.commentRecyclerView.layoutManager = LinearLayoutManager(activity)

        }


    }
    private fun hideKeyboard(inputMethodManager: InputMethodManager, view: View) {
        inputMethodManager.hideSoftInputFromWindow(view.windowToken, 0);
        view.clearFocus()
    }



}