package com.ssafy.zip.android

import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.adapter.QnaAdapter
import com.ssafy.zip.android.data.Qna

class RecordQuizFragment : Fragment() {

    private lateinit var adapter: QnaAdapter
    private lateinit var recyclerView: RecyclerView
    private lateinit var qnaArrayList: ArrayList<Qna>

    lateinit var qnaReg: Array<String>
    lateinit var qnaContent: Array<String>
    lateinit var qnaCommentCount: Array<String>

    companion object {
        fun newInstance(): RecordQuizFragment = RecordQuizFragment()
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
        return inflater.inflate(R.layout.fragment_record_quiz, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        dataInitialize()
        val layoutManager = LinearLayoutManager(context)
        recyclerView = view.findViewById(R.id.quiz_recyclerview)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        adapter = QnaAdapter(qnaArrayList)
        recyclerView.adapter = adapter
    }

    private fun dataInitialize() {
        qnaArrayList = arrayListOf<Qna>()

        qnaReg = arrayOf(
            getString(R.string.boardreg1),
            getString(R.string.boardreg2),
            getString(R.string.boardreg3),
        )

        qnaContent = arrayOf(
            "오늘 하루는 어땠나요",
            "똥맛 카레 vs 카레맛 똥",
            "오늘 점심 메뉴"
        )
        qnaCommentCount = arrayOf(
            "3",
            "23",
            "45",
        )

        for (i in qnaReg.indices) {
            val qna = Qna(
                qnaReg[i],
                qnaContent[i],
                qnaCommentCount[i],

                )
            qnaArrayList.add(qna)
        }
    }
}