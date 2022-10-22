package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.adapter.LetterAdapter
import com.ssafy.zip.android.adapter.QnaAdapter
import com.ssafy.zip.android.data.Letter
import com.ssafy.zip.android.data.Qna

class RecordLetterFragment : Fragment() {

    private  lateinit var adapter: LetterAdapter
    private lateinit var recyclerView: RecyclerView
    private lateinit var letterArrayList: ArrayList<Letter>

    lateinit var letterTitle : Array<String>
    lateinit var letterReg: Array<String>
    lateinit var letterContent: Array<String>

    companion object {
        fun newInstance(): RecordLetterFragment = RecordLetterFragment()
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        return inflater.inflate(R.layout.fragment_record_letter, container, false)
    }
    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        dataInitialize()
        val layoutManager = LinearLayoutManager(context)
        recyclerView = view.findViewById(R.id.letter_recyclerview)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        adapter = LetterAdapter(letterArrayList)
        recyclerView.adapter = adapter
    }

    private fun dataInitialize() {
        letterArrayList = arrayListOf<Letter>()

        letterTitle = arrayOf(
            "민균이가 보나에게",
            "승연이가 도엽에게",
            "재순이가 현수에게"
        )

        letterReg = arrayOf(
            "2022/10/14",
            "2022/10/13",
            "2022/10/20"
        )
        letterContent = arrayOf(
            "안녕하세요 편지내용1입니다 \n이 잘 들어갔으면 좋겠어요 \n 제발 이렇게 되기를?",
            "안녕하세요 편지내용2입니다 \n이 잘 들어갔으면 좋겠어요 \n 제발 이렇게 되기를?",
            "안녕하세요 편지내용3입니다 \n이 잘 들어갔으면 좋겠어요 \n 제발 이렇게 되기를?",
        )

        for (i in letterTitle.indices) {
            val letter = Letter(
                letterTitle[i],
                letterReg[i],
                letterContent[i],
                )
            letterArrayList.add(letter)
        }
    }

}