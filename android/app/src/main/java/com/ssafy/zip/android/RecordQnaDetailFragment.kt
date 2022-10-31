package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.adapter.CommentQnaAdapter
import com.ssafy.zip.android.adapter.MemberAdapter
import com.ssafy.zip.android.data.*
import java.util.*
import kotlin.collections.ArrayList

class RecordQnaDetailFragment : Fragment() {
    private lateinit var recyclerView: RecyclerView
    private lateinit var recyclerViewComment: RecyclerView
    private lateinit var userList: ArrayList<User>
    private lateinit var commentList: ArrayList<Comment>
    private lateinit var memberAdapter: MemberAdapter
    private lateinit var commentAdapter: CommentQnaAdapter

    lateinit var qnaDetailReg : TextView
    lateinit var qnaDetailContent: TextView

    lateinit var commentUser: Array<String>
    lateinit var commentReg: Array<String>
    lateinit var commentcontent: Array<String>

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        return inflater.inflate(R.layout.fragment_record_qna_detail, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        dataInitialize()
        val qnaData = arguments?.getParcelable<BoardModel.Qna>("Qna")
        qnaDetailReg = view.findViewById(R.id.qnaDetailReg)
        qnaDetailContent = view.findViewById(R.id.qnaDetailContent)
        memberAdapter = MemberAdapter(userList)
        commentAdapter = CommentQnaAdapter(commentList)

        val cnt = when(memberAdapter.itemCount){
            in 1..4 -> memberAdapter.itemCount
            in 5..6 -> 3
            else -> 4
        }
        // 데이터 넣기
        if(qnaData != null){
            qnaDetailReg.text = qnaData.reg.toString()
            qnaDetailContent.text =qnaData.question
        }

        val layoutManager = GridLayoutManager(context,cnt )
        recyclerView = view.findViewById(R.id.member_recycler_view)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        recyclerView.adapter = memberAdapter

        val layoutManagerComment = LinearLayoutManager(context)
        recyclerViewComment = view.findViewById(R.id.comment_recycler_view)
        recyclerViewComment.layoutManager = layoutManagerComment
        recyclerViewComment.setHasFixedSize(true)
        recyclerViewComment.adapter = commentAdapter

    }
    private fun dataInitialize() {
        var family = UserFamily(123, "a", 6, 5, 1, Date(2022, 10, 27,4, 22, 39));
        var user_now = User(family, true, 5, "테스트", "테스트", null)
        userList = arrayListOf<User>()
//        userList.add(User(1,"류현수", "행복한 우리 가조쿠", "귀요미 막둥이 현수", R.drawable.ex))
//        userList.add(User(2,"김민균", "행복한 우리 가조쿠", "귀요미 첫째 민균", R.drawable.ex2))
//        userList.add(User(3,"이승연", "행복한 우리 가조쿠", "귀요미 둘째 승연", R.drawable.ex3))
//        userList.add(User(4,"이보나", "행복한 우리 가조쿠", "귀요미 셋째 보나", R.drawable.ex4))

        userList.add(User( family, true, 1,"1", "귀요미 막둥이 현수", null))
        userList.add(User(family, true,2,"김민균", "귀요미 첫째 민균",  null))
        userList.add(User(family, true,3,"이승연", "귀요미 둘째 승연",  null))
        userList.add(User(family, true,4,"이보나", "귀요미 셋째 보나", null))

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

        for (i in commentUser.indices) {
            val letter = Comment(
                commentUser[i],
                commentReg[i],
                commentcontent[i],
            )
            commentList.add(letter)
        }
    }
}