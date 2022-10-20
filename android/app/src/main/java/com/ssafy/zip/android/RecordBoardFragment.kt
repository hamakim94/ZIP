package com.ssafy.zip.android

import android.content.Context
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.adapter.BoardAdapter
import com.ssafy.zip.android.data.Board


class RecordBoardFragment : Fragment() {

    private lateinit var adapter: BoardAdapter
    private lateinit var recyclerView: RecyclerView
    private lateinit var boardsArrayList: ArrayList<Board>

    lateinit var userImageId: Array<Int>
    lateinit var userNickname: Array<String>
    lateinit var boardReg: Array<String>
    lateinit var boardImageId: Array<Int>
    lateinit var boardContent: Array<String>
    lateinit var commentCount : Array<String>
    lateinit var boards: Array<String>

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
        return inflater.inflate(R.layout.fragment_record_board, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        dataInitialize()
        val layoutManager = LinearLayoutManager(context)
        recyclerView = view.findViewById(R.id.board_recyclerview)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        adapter = BoardAdapter(boardsArrayList)
        recyclerView.adapter = adapter
    }


    private fun dataInitialize() {
        boardsArrayList = arrayListOf<Board>()

        userImageId = arrayOf(
            R.drawable.userimage1,
            R.drawable.userimage2,
            R.drawable.userimage3,
        )
        userNickname = arrayOf(
            getString(R.string.usernickname1),
            getString(R.string.usernickname2),
            getString(R.string.usernickname3),
        )

        boardReg = arrayOf(
            getString(R.string.boardreg1),
            getString(R.string.boardreg2),
            getString(R.string.boardreg3),
        )
        boardImageId = arrayOf(
            R.drawable.boardimage1,
            R.drawable.boardimage2,
            R.drawable.boardimage3
        )
        boardContent = arrayOf(
            getString(R.string.boardcontent1),
            getString(R.string.boardcontent2),
            getString(R.string.boardcontent3),
        )
        commentCount = arrayOf(
            "3",
            "23",
            "45",
        )

        for (i in userImageId.indices) {
            val board = Board(
                userImageId[i],
                userNickname[i],
                boardReg[i],
                boardImageId[i],
                boardContent[i],
                commentCount[i]
            )
            boardsArrayList.add(board)
        }


    }
}