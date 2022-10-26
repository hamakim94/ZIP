package com.ssafy.zip.android

import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.RadioButton
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.adapter.BoardModelAdapter
import com.ssafy.zip.android.data.BoardModel


class RecordBoardFragment : Fragment() {

    private lateinit var adapter: BoardModelAdapter
    private lateinit var recyclerView: RecyclerView
    private lateinit var boardModelArrayList: ArrayList<BoardModel>
    private lateinit var filteredBoardModelArrayList: ArrayList<BoardModel>

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {

        // Inflate the layout for this fragment
        val view = inflater.inflate(R.layout.fragment_record_board, container, false)
        view.findViewById<RadioButton>(R.id.allButton).setOnClickListener {
            filteredBoardModelArrayList = boardModelArrayList
            adapter = BoardModelAdapter(filteredBoardModelArrayList)
            recyclerView.adapter = adapter
        }
        view.findViewById<RadioButton>(R.id.boardButton).setOnClickListener {
            filteredBoardModelArrayList =
                boardModelArrayList.filter { it.javaClass.simpleName == "Board" } as ArrayList<BoardModel>
            adapter = BoardModelAdapter(filteredBoardModelArrayList)
            recyclerView.adapter = adapter
        }
        view.findViewById<RadioButton>(R.id.qnaButton).setOnClickListener {
            filteredBoardModelArrayList =
                boardModelArrayList.filter { it.javaClass.simpleName == "Qna" } as ArrayList<BoardModel>
            adapter = BoardModelAdapter(filteredBoardModelArrayList)
            recyclerView.adapter = adapter
        }
        view.findViewById<RadioButton>(R.id.letterButton).setOnClickListener {
            filteredBoardModelArrayList =
                boardModelArrayList.filter { it.javaClass.simpleName == "Letter" } as ArrayList<BoardModel>
            adapter = BoardModelAdapter(filteredBoardModelArrayList)
            recyclerView.adapter = adapter
        }
        return view
    }


    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        boardModelArrayList = getMockData()
        filteredBoardModelArrayList = ArrayList(boardModelArrayList)
        val layoutManager = LinearLayoutManager(context)
        recyclerView = view.findViewById(R.id.board_recyclerview)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        adapter = BoardModelAdapter(filteredBoardModelArrayList)
        recyclerView.adapter = adapter
    }

    private fun getMockData(): ArrayList<BoardModel> = arrayListOf(
        BoardModel.Board(
            userImage = R.drawable.userimage1,
            userNickname = getString(R.string.usernickname1),
            boardReg = getString(R.string.boardreg1),
            boardImage = R.drawable.boardimage1,
            boardContent = getString(R.string.boardcontent1),
            commentCount = "3",
        ),
        BoardModel.Board(
            userImage = R.drawable.userimage2,
            userNickname = getString(R.string.usernickname2),
            boardReg = getString(R.string.boardreg2),
            boardImage = R.drawable.boardimage2,
            boardContent = getString(R.string.boardcontent2),
            commentCount = "23",
        ),
        BoardModel.Board(
            userImage = R.drawable.userimage3,
            userNickname = getString(R.string.usernickname3),
            boardReg = getString(R.string.boardreg3),
            boardImage = R.drawable.boardimage3,
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