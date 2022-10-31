package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.adapter.BoardModelAdapter
import com.ssafy.zip.android.data.*
import com.ssafy.zip.android.data.response.ResponseBoardAll
import com.ssafy.zip.android.databinding.FragmentRecordBoardBinding
import java.util.Date
import retrofit2.Call
import retrofit2.Callback
import retrofit2.Response


class RecordBoardFragmentEnque : Fragment() {

    private var _binding: FragmentRecordBoardBinding? = null
    private val binding get() = _binding!!

    private lateinit var adapter: BoardModelAdapter
    private lateinit var recyclerView: RecyclerView
    private lateinit var boardModelArrayList: List<ResponseBoardAll>
    private lateinit var filteredBoardModelArrayList: List<ResponseBoardAll>

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentRecordBoardBinding.inflate(inflater, container, false)
        // Inflate the layout for this fragment
        binding.allButton.setOnClickListener{
            filteredBoardModelArrayList = boardModelArrayList
            adapter = BoardModelAdapter(filteredBoardModelArrayList as ArrayList<ResponseBoardAll>)
            recyclerView.adapter = adapter
        }
        binding.boardButton.setOnClickListener{
            filteredBoardModelArrayList =
                boardModelArrayList.filter { it.category == 0 } as ArrayList<ResponseBoardAll>
            adapter = BoardModelAdapter(filteredBoardModelArrayList as ArrayList<ResponseBoardAll>)
            recyclerView.adapter = adapter
        }
        binding.qnaButton.setOnClickListener{
            filteredBoardModelArrayList =
                boardModelArrayList.filter { it.category == 1} as ArrayList<ResponseBoardAll>
            adapter = BoardModelAdapter(filteredBoardModelArrayList as ArrayList<ResponseBoardAll>)
            recyclerView.adapter = adapter
        }
        binding.letterButton.setOnClickListener{
            filteredBoardModelArrayList =
                boardModelArrayList.filter { it.category == 2} as ArrayList<ResponseBoardAll>
            adapter = BoardModelAdapter(filteredBoardModelArrayList as ArrayList<ResponseBoardAll>)
            recyclerView.adapter = adapter
        }
        return binding.root
    }


    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        getMockData()
//        getMockData()
        val layoutManager = LinearLayoutManager(context)
        recyclerView = view.findViewById(R.id.board_recyclerview)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        adapter = BoardModelAdapter(filteredBoardModelArrayList as ArrayList<ResponseBoardAll>)
        recyclerView.adapter = adapter
    }

    var family = UserFamily(123, "a", 6, 5, 1, Date(2022, 10, 27, 4, 22, 39));
    var user_now = User(family, true, 5, "테스트", "테스트", null)


    private fun getMockData() {
        ApiService.getApiService.getBoard().enqueue(object : Callback<List<ResponseBoardAll>>{
            override fun onResponse(call: Call<List<ResponseBoardAll>>, response: Response<List<ResponseBoardAll>>) {
                println(response.body())
                boardModelArrayList = response.body()!!
                filteredBoardModelArrayList = ArrayList(boardModelArrayList)


            }
            override fun onFailure(call: Call<List<ResponseBoardAll>>, t: Throwable) {
                TODO("Not yet implemented")
            }
        })
    }

//    : ArrayList<BoardModel> = arrayListOf(
//        BoardModel.Board(
//            id = 0,
//            familyId = 0,
//            user = user_now,
//            content = "MK 바아보",
//            image = null,
//            reg = "2022-10-28T00:10:44"
//            // 원래
////            userImage = R.drawable.userimage1,
////            userNickname = getString(R.string.usernickname1),
////            boardReg = getString(R.string.boardreg1),
////            boardImage = R.drawable.boardimage1,
////            boardContent = getString(R.string.boardcontent1),
////            commentCount = "3",
//            // 추가되는 부분
//        ),
////        BoardModel.Board(
////            userImage = R.drawable.userimage2,
////            userNickname = getString(R.string.usernickname2),
////            boardReg = getString(R.string.boardreg2),
////            boardImage = R.drawable.boardimage2,
////            boardContent = getString(R.string.boardcontent2),
////            commentCount = "23",
////        ),
////        BoardModel.Board(
////            userImage = R.drawable.userimage3,
////            userNickname = getString(R.string.usernickname3),
////            boardReg = getString(R.string.boardreg3),
////            boardImage = R.drawable.boardimage3,
////            boardContent = getString(R.string.boardcontent3),
////            commentCount = "45",
////        ),
//        BoardModel.Qna(
//            qnaReg = getString(R.string.boardreg1),
//            qnaContent = "오늘 하루는 어땠나요",
//            qnaCommentCount = "3",
//        ),
//        BoardModel.Qna(
//            qnaReg = getString(R.string.boardreg2),
//            qnaContent = "똥맛 카레 vs 카레맛 똥",
//            qnaCommentCount = "23",
//        ),
//        BoardModel.Qna(
//            qnaReg = getString(R.string.boardreg3),
//            qnaContent = "오늘 점심 메뉴",
//            qnaCommentCount = "45",
//        ),
//        BoardModel.Letter(
//            letterTitle = "민균이가 보나에게",
//            letterReg = "2022/10/14",
//            letterContent = "안녕하세요 편지내용1입니다 \n이 잘 들어갔으면 좋겠어요 \n 제발 이렇게 되기를?",
//            letterFrom = "민균",
//            letterTo = "보나"
//        ),
//        BoardModel.Letter(
//            letterTitle = "승연이가 도엽에게",
//            letterReg = "2022/10/13",
//            letterContent = "안녕하세요 편지내용2입니다 \n이 잘 들어갔으면 좋겠어요 \n 제발 이렇게 되기를?",
//            letterFrom = "승연",
//            letterTo = "도엽"
//        ),
//        BoardModel.Letter(
//            letterTitle = "재순이가 현수에게",
//            letterReg = "2022/10/20",
//            letterContent = "안녕하세요 편지내용3입니다 \n이 잘 들어갔으면 좋겠어요 \n 제발 이렇게 되기를?",
//            letterFrom = "재순",
//            letterTo = "현수"
//        ),
//
//
//        )
}