package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.databinding.DataBindingUtil
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.ssafy.zip.android.adapter.CommentAdapter
import com.ssafy.zip.android.adapter.CommentQnaAdapter
import com.ssafy.zip.android.adapter.MemberAdapter
import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.databinding.FragmentRecordBoardDetailBinding
import com.ssafy.zip.android.databinding.FragmentRecordQnaDetailBinding
import com.ssafy.zip.android.viewmodel.QnaDetailViewModel
import java.util.*
import kotlin.collections.ArrayList

class RecordQnaDetailFragment : Fragment() {

    private var _binding: FragmentRecordQnaDetailBinding? = null
    private val binding get() = _binding!!

    private lateinit var activity: MainActivity
    private val viewModel by viewModels<QnaDetailViewModel> { QnaDetailViewModel.Factory(Application()) }

    private lateinit var recyclerViewUser: RecyclerView
    private lateinit var recyclerViewComment: RecyclerView
    private lateinit var userList: ArrayList<User>
    private lateinit var commentList: ArrayList<Comment>
    private lateinit var userAdapter: MemberAdapter
    private lateinit var commentAdapter: CommentQnaAdapter

//    lateinit var qnaDetailReg: TextView
//    lateinit var qnaDetailContent: TextView

    lateinit var commentUser: Array<String>
    lateinit var commentReg: Array<String>
    lateinit var commentcontent: Array<String>

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
        val qnaData = arguments?.getParcelable<BoardModel.Qna>("Qna")
        binding.viewmodel = viewModel
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        observeViewModel(activity)

        val qnaData = arguments?.getParcelable<BoardModel.Qna>("Qna")!!
        if(qnaData != null){
            println("현재 들어온 정보 " + qnaData)
            viewModel.getQnaDetail(qnaData.id)
        }

//        dataInitialize()

        // 데이터 넣기
//        if (qnaData != null) {
//            qnaDetailReg.text = qnaData.reg.toString()
//            qnaDetailContent.text = qnaData.question
//        }


//        val qnaData = arguments?.getParcelable<BoardModel.Qna>("Qna")
//        qnaDetailReg = view.findViewById(R.id.qnaDetailReg)
//        qnaDetailContent = view.findViewById(R.id.qnaDetailContent)
//        memberAdapter = MemberAdapter(userList)
//        commentAdapter = CommentQnaAdapter(commentList)

//        val cnt = when (memberAdapter.itemCount) {
//            in 1..4 -> memberAdapter.itemCount
//            in 5..6 -> 3
//            else -> 4
//        }


//        val layoutManager = GridLayoutManager(context, cnt)
//        recyclerViewUser = view.findViewById(R.id.member_recycler_view)
//        recyclerViewUser.layoutManager = layoutManager
//        recyclerViewUser.setHasFixedSize(true)
//        recyclerViewUser.adapter = memberAdapter
//
//        val layoutManagerComment = LinearLayoutManager(context)
//        recyclerViewComment = view.findViewById(R.id.comment_recycler_view)
//        recyclerViewComment.layoutManager = layoutManagerComment
//        recyclerViewComment.setHasFixedSize(true)
//        recyclerViewComment.adapter = commentAdapter

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
        val qnaData = arguments?.getParcelable<BoardModel.Qna>("Qna")
        binding.qnaDetailReg.text = qnaData?.reg.toString()
        if (qnaDetail != null) {
            binding.qnaDetailContent.text = qnaDetail.question
        }

        // 가족 관련 recyclerview binding
        recyclerViewUser = binding.memberRecyclerView
//        recyclerViewUser.layoutManager = GridLayoutManager(activity, cnt1)
        recyclerViewUser.setHasFixedSize(true)
        if(qnaDetail != null){
            userAdapter
        }
        userList = ArrayList()
        userAdapter = MemberAdapter(userList)
        binding.memberRecyclerView.adapter = userAdapter
        val cnt1 = when (userAdapter.itemCount) {
            in 1..4 -> userAdapter.itemCount
            in 5..6 -> 3
            else -> 4
        }

        // 댓글 recyclerview
        binding.commentRecyclerView.setHasFixedSize(true)
        observeViewModel(activity)
        commentList = ArrayList()
        commentAdapter = CommentQnaAdapter(commentList)
        binding.commentRecyclerView.adapter = commentAdapter
        binding.commentRecyclerView.layoutManager = LinearLayoutManager(activity)


//        Glide.with(activity)
//            .load(boardDetail?.board?.user?.profileImg)
//            .into(binding.profileImageDetail)
//        // 닉네임, 게시글 내용
//        binding.userNicknameDetail.text = boardDetail?.board?.user?.nickname
//        binding.boardRegDetail.text = boardDetail?.board?.reg.toString()
//        // 게시글 이미지
//        if(boardDetail?.board?.image!= null){
//            Glide.with(activity)
//                .load(boardDetail?.board?.image)
//                .into(binding.boardImageDetail)
//        } else{
//
//        }
//        //게시글 내용
//        binding.boardContent.text = boardDetail?.board?.content
//        println("게시글 내용 : " + boardDetail?.board?.content)
//        // 댓글 수
//
//        // 댓글
//        recyclerView = binding.commentRecyclerview
//        val layoutManager = LinearLayoutManager(context)
//        recyclerView.layoutManager = layoutManager
//        recyclerView.setHasFixedSize(true)
//        print("테스트테스트" + boardDetail)
//        if(boardDetail != null){
//            adapter = CommentAdapter(boardDetail.comments)
//            recyclerView.adapter = adapter
//        }
    }


    private fun dataInitialize() {
        var family = UserFamily(123, "a", 6, 5, 1, Date(2022, 10, 27, 4, 22, 39));
        var user_now = User(family, true, 5, "테스트", "테스트", null)
        userList = arrayListOf<User>()
//        userList.add(User(1,"류현수", "행복한 우리 가조쿠", "귀요미 막둥이 현수", R.drawable.ex))
//        userList.add(User(2,"김민균", "행복한 우리 가조쿠", "귀요미 첫째 민균", R.drawable.ex2))
//        userList.add(User(3,"이승연", "행복한 우리 가조쿠", "귀요미 둘째 승연", R.drawable.ex3))
//        userList.add(User(4,"이보나", "행복한 우리 가조쿠", "귀요미 셋째 보나", R.drawable.ex4))

        userList.add(User(family, true, 1, "1", "귀요미 막둥이 현수", null))
        userList.add(User(family, true, 2, "김민균", "귀요미 첫째 민균", null))
        userList.add(User(family, true, 3, "이승연", "귀요미 둘째 승연", null))
        userList.add(User(family, true, 4, "이보나", "귀요미 셋째 보나", null))

        commentList = arrayListOf<Comment>()

        commentUser = arrayOf(
            "해삼",
            "멍개",
            "말미잘"
        )

        commentReg = arrayOf(
            "2022/10/14",
            "2022/10/13",
            "2022/10/20"
        )
        commentcontent = arrayOf(
            "ㅋㅋㅋ말도안대",
            "앙거짓말치지마",
            "끼요오오옹오오오오옷",
        )

//        for (i in commentUser.indices) {
//            val letter = Comment(
//                commentUser[i],
//                commentReg[i],
//                commentcontent[i],
//            )
//            commentList.add(letter)
//        }
    }
}