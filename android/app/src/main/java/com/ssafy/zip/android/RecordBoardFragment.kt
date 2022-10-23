package com.ssafy.zip.android

import android.content.Context
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import androidx.navigation.findNavController
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.adapter.BoardAdapter
import com.ssafy.zip.android.adapter.BoardModelAdapter
import com.ssafy.zip.android.data.Board
import com.ssafy.zip.android.data.BoardModel


class RecordBoardFragment : Fragment() {

    private lateinit var adapter: BoardModelAdapter
    private lateinit var recyclerView: RecyclerView
    private lateinit var boardModelArrayList: ArrayList<BoardModel>

//    lateinit var userImageId: Array<Int>
//    lateinit var userNickname: Array<String>
//    lateinit var boardReg: Array<String>
//    lateinit var boardImageId: Array<Int>
//    lateinit var boardContent: Array<String>
//    lateinit var commentCount : Array<String>
//    lateinit var boards: Array<String>

    companion object {
        fun newInstance(): RecordBoardFragment = RecordBoardFragment()
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
    }

    override fun onAttach(context: Context) {
        super.onAttach(context)
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        val view = inflater.inflate(R.layout.fragment_record_board, container, false)
        view.findViewById<Button>(R.id.quizButton).setOnClickListener{
            view.findNavController().navigate(R.id.action_recordFragment_to_recordQuizFragment)
        }
        view.findViewById<Button>(R.id.letterButton).setOnClickListener{
            view.findNavController().navigate(R.id.action_recordFragment_to_recordLetterFragment)
        }
        return view
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        boardModelArrayList = getMockData()
//        dataInitialize()
        val layoutManager = LinearLayoutManager(context)
        recyclerView = view.findViewById(R.id.board_recyclerview)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        adapter = BoardModelAdapter(boardModelArrayList)
        recyclerView.adapter = adapter
    }


//    private fun dataInitialize() {
//        boardsArrayList = arrayListOf<Board>()
//
//        userImageId = arrayOf(
//            R.drawable.userimage1,
//            R.drawable.userimage2,
//            R.drawable.userimage3,
//        )
//        userNickname = arrayOf(
//            getString(R.string.usernickname1),
//            getString(R.string.usernickname2),
//            getString(R.string.usernickname3),
//        )
//
//        boardReg = arrayOf(
//            getString(R.string.boardreg1),
//            getString(R.string.boardreg2),
//            getString(R.string.boardreg3),
//        )
//        boardImageId = arrayOf(
//            R.drawable.boardimage1,
//            R.drawable.boardimage2,
//            R.drawable.boardimage3
//        )
//        boardContent = arrayOf(
//            getString(R.string.boardcontent1),
//            getString(R.string.boardcontent2),
//            getString(R.string.boardcontent3),
//        )
//        commentCount = arrayOf(
//            "3",
//            "23",
//            "45",
//        )
//
//        for (i in userImageId.indices) {
//            val board = Board(
//                userImageId[i],
//                userNickname[i],
//                boardReg[i],
//                boardImageId[i],
//                boardContent[i],
//                commentCount[i]
//            )
//            boardsArrayList.add(board)
//        }
//
//
//    }

    private fun getMockData() : ArrayList<BoardModel> = arrayListOf(
        BoardModel.Board(
            userImage = R.drawable.userimage1,
            userNickname = getString(R.string.usernickname1),
            boardReg = getString(R.string.boardreg1),
            boardImage =  R.drawable.boardimage1,
            boardContent = getString(R.string.boardcontent1),
            commentCount = "3",
        ),
        BoardModel.Board(
            userImage = R.drawable.userimage2,
            userNickname = getString(R.string.usernickname2),
            boardReg = getString(R.string.boardreg2),
            boardImage =  R.drawable.boardimage2,
            boardContent = getString(R.string.boardcontent2),
            commentCount = "23",
        ),
        BoardModel.Board(
            userImage = R.drawable.userimage3,
            userNickname = getString(R.string.usernickname3),
            boardReg = getString(R.string.boardreg3),
            boardImage =  R.drawable.boardimage3,
            boardContent = getString(R.string.boardcontent3),
            commentCount = "45",
        ),
        BoardModel.Qna(
            qnaReg = getString(R.string.boardreg1),
            qnaContent = "오늘 하루는 어땠나요",
            qnaCommentCount = "3",
        ),
        BoardModel.Qna(
            qnaReg = getString(R.string.boardreg2),
            qnaContent = "똥맛 카레 vs 카레맛 똥",
            qnaCommentCount = "23",
        ),
        BoardModel.Qna(
            qnaReg = getString(R.string.boardreg3),
            qnaContent = "오늘 점심 메뉴",
            qnaCommentCount = "45",
        ),
        BoardModel.Letter(
            letterTitle = "민균이가 보나에게",
            letterReg = "2022/10/14",
            letterContent = "안녕하세요 편지내용1입니다 \n이 잘 들어갔으면 좋겠어요 \n 제발 이렇게 되기를?",
        ),
        BoardModel.Letter(
            letterTitle = "승연이가 도엽에게",
            letterReg = "2022/10/13",
            letterContent = "안녕하세요 편지내용2입니다 \n이 잘 들어갔으면 좋겠어요 \n 제발 이렇게 되기를?",
        ),
        BoardModel.Letter(
            letterTitle = "재순이가 현수에게",
            letterReg = "2022/10/20",
            letterContent = "안녕하세요 편지내용3입니다 \n이 잘 들어갔으면 좋겠어요 \n 제발 이렇게 되기를?",
        ),


    )
}