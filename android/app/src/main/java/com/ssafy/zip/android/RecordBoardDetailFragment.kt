package com.ssafy.zip.android

import android.os.Bundle
import android.provider.ContactsContract.CommonDataKinds.Nickname
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.adapter.CommentAdapter
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.data.Comment

class RecordBoardDetailFragment : Fragment() {
    private lateinit var recyclerView: RecyclerView
    private lateinit var commentList: ArrayList<Comment>
    private lateinit var adapter: CommentAdapter

    lateinit var profileImage : ShapeableImageView
    lateinit var userNickname: TextView
    lateinit var boardReg : TextView
    lateinit var boardImage : ImageView
    lateinit var commentCountDetail : TextView

    lateinit var commentUser: Array<String>
    lateinit var commentReg: Array<String>
    lateinit var commentcontent: Array<String>

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        return inflater.inflate(R.layout.fragment_record_board_detail, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        dataInitialize()
        val boardData = arguments?.getParcelable<BoardModel.Board>("Board")
        profileImage = view.findViewById(R.id.profileImageDetail)
        userNickname = view.findViewById(R.id.userNicknameDetail)
        boardReg = view.findViewById(R.id.boardRegDetail)
        boardImage = view.findViewById(R.id.boardImageDetail)
        commentCountDetail = view.findViewById(R.id.commentCountDetail)

        // 요기서, view.findViewById를 활용해, 기본 게시글 복사하자
        // arguments 이용!
        if (boardData != null) {
//            profileImage.setImageResource(boardData.userImage)
            userNickname.text = boardData.user.nickname
            boardReg.text = boardData.reg.toString()
//            boardImage.setImageResource(boardData.image)
//            commentCountDetail.text = boardData.commentCount
        }

        val layoutManager = LinearLayoutManager(context)
        recyclerView = view.findViewById(R.id.comment_recyclerview)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        adapter = CommentAdapter(commentList)
        recyclerView.adapter = adapter
    }

    private fun dataInitialize() {
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
