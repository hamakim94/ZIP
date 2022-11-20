package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.view.inputmethod.InputMethodManager
import androidx.appcompat.widget.Toolbar
import androidx.databinding.DataBindingUtil
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.ssafy.zip.android.adapter.CommentAdapter
import com.ssafy.zip.android.data.BoardDetail
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.databinding.FragmentRecordBoardDetailBinding
import com.ssafy.zip.android.viewmodel.BoardDetailViewModel

class RecordBoardDetailFragment : Fragment() {

    private var _binding: FragmentRecordBoardDetailBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private val viewModel by viewModels<BoardDetailViewModel> {
        BoardDetailViewModel.Factory(
            Application()
        )
    }
    private lateinit var recyclerView: RecyclerView
    private lateinit var adapter: CommentAdapter


    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?
    ): View? {
        val inputMethodManager =
            activity?.getSystemService(Context.INPUT_METHOD_SERVICE) as InputMethodManager


        _binding = DataBindingUtil.inflate(
            inflater, R.layout.fragment_record_board_detail, container, false
        )
        binding.viewmodel = viewModel
        // 순수하게, id만 가져오고 싶어서 이거 쓰는거
        val id = arguments?.getLong("id")
        // 이제 여기서 post 관련
        binding.commentPostBtn.setOnClickListener {
            if (id != null && binding.commentContent.text.isNotEmpty()) {
                MaterialAlertDialogBuilder(activity).setMessage("댓글을 작성하시겠습니까?")
                    .setPositiveButton("확인") { dialog, which ->
                        viewModel.postBoardComment(id, binding.commentContent.text.toString())
                        binding.commentContent.text = null
                        hideKeyboard(inputMethodManager, binding.root)
                        dialog.dismiss()
                    }.show()
            }
        }
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        observeViewModel(activity)

        val toolbar: Toolbar = view.findViewById(R.id.board_detail_appbar)

        // 앨범명으로 appbar title 지정
        toolbar.title = "게시글 상세"

        val id = arguments?.getLong("id")
        if(id != null){
            viewModel.getBoardDetail(id)
        }
        val boardData = arguments?.getParcelable<BoardModel.Board>("Board")

        // 게시글 ID 들어왔으면 viewModel에 있는 게시글 상세 가져오기 API 실행
        if (boardData != null) {
            viewModel.getBoardDetail(boardData.id)
        }

    }

    private fun observeViewModel(activity: MainActivity) {
        val observer = object : Observer<BoardDetail> {
            override fun onChanged(boardDetail: BoardDetail?) {
                if (boardDetail != null) {
                    onUpdateBoardDetail()
                }
            }
        }
        viewModel.boardDetail.observe(viewLifecycleOwner, observer)
    }

    private fun onUpdateBoardDetail() {
        val boardDetail: BoardDetail? = viewModel.boardDetail.value
        // 사용자 프로필 이미지
        if (boardDetail != null) {
            if (boardDetail.board.user.character == null) {
                binding.profileImageDetail.setImageResource(R.drawable.ex)
            } else {
                Glide.with(activity).load(boardDetail?.board?.user?.character!!.img)
                    .into(binding.profileImageDetail)
            }
        }

        // 닉네임, 게시글 내용
        binding.commentCnt.text = boardDetail?.board?.commentCnt.toString()
        binding.userNicknameDetail.text = boardDetail?.board?.user?.nickname
        binding.boardRegDetail.text = boardDetail?.board?.reg?.let { DateUtil.getRegDate(it) }
        // 게시글 이미지
        if (boardDetail?.board?.image != null) {
            Glide.with(activity).load(boardDetail?.board?.image).into(binding.boardImageDetail)
        } else {

        }
        //게시글 내용
        binding.boardContent.text = boardDetail?.board?.content
        // 댓글
        recyclerView = binding.commentRecyclerview
        val layoutManager = LinearLayoutManager(context)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        if (boardDetail != null) {
            adapter = CommentAdapter(boardDetail.comments)
            recyclerView.adapter = adapter
        }
    }

    private fun hideKeyboard(inputMethodManager: InputMethodManager, view: View) {
        inputMethodManager.hideSoftInputFromWindow(view.windowToken, 0);
        view.clearFocus()
    }


}
