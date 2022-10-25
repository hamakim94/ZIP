package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.adapter.CommentAdapter
import com.ssafy.zip.android.adapter.MemberAdapter
import com.ssafy.zip.android.data.Comment
import com.ssafy.zip.android.data.Member

class RecordQnaDetailFragment : Fragment() {
    private lateinit var recyclerView: RecyclerView
    private lateinit var memberList: ArrayList<Member>
    private lateinit var memberAdapter: MemberAdapter

    lateinit var qnaDetailReg : TextView
    lateinit var qnaDetailContent: TextView

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
        qnaDetailReg = view.findViewById(R.id.qnaDetailReg)
        qnaDetailContent = view.findViewById(R.id.qnaDetailContent)
        memberAdapter = MemberAdapter(memberList)

        val cnt = when(memberAdapter.itemCount){
            in 1..4 -> memberAdapter.itemCount
            in 5..6 -> 3
            else -> 4
        }

        val layoutManager = GridLayoutManager(context,cnt )
        recyclerView = view.findViewById(R.id.member_recycler_view)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)

        recyclerView.adapter = memberAdapter

    }
    private fun dataInitialize() {
        memberList = arrayListOf<Member>()
        memberList.add(Member(1,"류현수", "행복한 우리 가조쿠", "귀요미 막둥이 현수", R.drawable.ex))
        memberList.add(Member(2,"김민균", "행복한 우리 가조쿠", "귀요미 첫째 민균", R.drawable.ex2))
        memberList.add(Member(3,"이승연", "행복한 우리 가조쿠", "귀요미 둘째 승연", R.drawable.ex3))
        memberList.add(Member(4,"이보나", "행복한 우리 가조쿠", "귀요미 셋째 보나", R.drawable.ex4))

    }
}