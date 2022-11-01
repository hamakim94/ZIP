package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import android.provider.ContactsContract.CommonDataKinds.Nickname
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.databinding.DataBindingUtil
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.adapter.BoardModelAdapter
import com.ssafy.zip.android.adapter.CommentAdapter
import com.ssafy.zip.android.data.BoardDetail
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.data.Comment
import com.ssafy.zip.android.data.response.ResponseBoardAll
import com.ssafy.zip.android.databinding.FragmentRecordBoardDetailBinding
import com.ssafy.zip.android.viewmodel.BoardDetailViewModel
import com.ssafy.zip.android.viewmodel.BoardViewModel

class RecordBoardDetailFragment : Fragment() {

    private var _binding : FragmentRecordBoardDetailBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private val viewModel by viewModels<BoardDetailViewModel>{BoardDetailViewModel.Factory(Application())}

    private lateinit var recyclerView: RecyclerView
    private lateinit var commentList: ArrayList<Comment>
    private lateinit var adapter: CommentAdapter

    lateinit var commentUser: Array<String>
    lateinit var commentReg: Array<String>
    lateinit var commentcontent: Array<String>

    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = DataBindingUtil.inflate(
            inflater, R.layout.fragment_record_board_detail, container, false)
        binding.viewmodel = viewModel
        // Inflate the layout for this fragment
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        observeViewModel(activity)

        val boardData = arguments?.getParcelable<BoardModel.Board>("Board")

        // 게시글 ID 들어왔으면 viewModel에 있는 게시글 상세 가져오기 API 실행
        if (boardData != null) {
            println("getBoardDetail 실행!!!")
            println("BoardData: " + boardData.toString())
            viewModel.getBoardDetail(boardData.id)
        }

    }

    private fun observeViewModel(activity: MainActivity){
        val observer = object  : Observer<BoardDetail> {
            override fun onChanged(boardDetail: BoardDetail?) {
//                binding.viewmodel = viewModel
                if (boardDetail != null) {
                    onUpdateBoardDetail()
//                    binding.viewmodel = viewModel
                }
            }
        }
        viewModel.boardDetail.observe(viewLifecycleOwner, observer)
    }

    private fun onUpdateBoardDetail(){
        println("보드 가져오기 시작!!!!")
        val boardDetail: BoardDetail? = viewModel.boardDetail.value
        // 사용자 프로필 이미지
        Glide.with(activity)
        .load(boardDetail?.board?.user?.profileImg)
        .into(binding.profileImageDetail)
        // 닉네임, 게시글 내용
        binding.userNicknameDetail.text = boardDetail?.board?.user?.nickname
        binding.boardRegDetail.text = boardDetail?.board?.reg.toString()
        // 게시글 이미지
        if(boardDetail?.board?.image!= null){
//            binding.boardImageDetail.layoutParams.height = 1000 // 안해도 될 듯 (나중엔 가로 전체 너비 + 높이 비율 맞춰서 보여주기)
            Glide.with(activity)
                .load(boardDetail?.board?.image)
                .into(binding.boardImageDetail)
        } else{

        }
        //게시글 내용
        binding.boardContent.text = boardDetail?.board?.content
        println("게시글 내용 : " + boardDetail?.board?.content)
        // 댓글 수

        // 댓글
        recyclerView = binding.commentRecyclerview
        val layoutManager = LinearLayoutManager(context)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        print("테스트테스트" + boardDetail)
        if(boardDetail != null){
            adapter = CommentAdapter(boardDetail.comments)
            recyclerView.adapter = adapter
        }
    }

//    private fun dataInitialize() {
//        commentList = arrayListOf<Comment>()
//
//        commentUser = arrayOf(
//            "해삼",
//            "멍개",
//            "말미잘"
//        )
//
//        commentReg = arrayOf(
//            "2022/10/14",
//            "2022/10/13",
//            "2022/10/20"
//        )
//        commentcontent = arrayOf(
//            "ㅋㅋㅋ말도안대",
//            "앙거짓말치지마",
//            "끼요오오옹오오오오옷",
//        )
//
//        for (i in commentUser.indices) {
//            val letter = Comment(
//                commentUser[i],
//                commentReg[i],
//                commentcontent[i],
//            )
//            commentList.add(letter)
//        }
//    }

}
