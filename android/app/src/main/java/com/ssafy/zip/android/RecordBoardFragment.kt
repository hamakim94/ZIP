package com.ssafy.zip.android

import android.content.Context
import android.os.Bundle
import android.view.*
import android.widget.PopupMenu
import androidx.core.view.MenuHost
import androidx.core.view.MenuProvider
import androidx.fragment.app.Fragment
import androidx.navigation.findNavController
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.adapter.BoardModelAdapter
import com.ssafy.zip.android.data.response.ResponseBoardAll
import com.ssafy.zip.android.databinding.FragmentRecordBoardBinding
import java.util.concurrent.CountDownLatch
import java.util.concurrent.ExecutorService
import java.util.concurrent.Executors


class RecordBoardFragment : Fragment() {
    private var _binding: FragmentRecordBoardBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private lateinit var adapter: BoardModelAdapter
    private lateinit var recyclerView: RecyclerView
    private lateinit var boardModelArrayList: List<ResponseBoardAll>
    private lateinit var filteredBoardModelArrayList: List<ResponseBoardAll>

    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentRecordBoardBinding.inflate(inflater, container, false)
        return binding.root
    }


    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        getMockData()
        val layoutManager = LinearLayoutManager(context)
        recyclerView = view.findViewById(R.id.board_recyclerview)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)
        adapter = BoardModelAdapter(filteredBoardModelArrayList as ArrayList<ResponseBoardAll>)
        recyclerView.adapter = adapter

        // 그냥 뿌리기
        binding.allButton.setOnClickListener {
            adapter = BoardModelAdapter(boardModelArrayList as ArrayList<ResponseBoardAll>)
            recyclerView.adapter = adapter
        }
        // 필터링 해서 뿌려주기
        binding.boardButton.setOnClickListener {
            filteredBoardModelArrayList =
                boardModelArrayList.filter { it.category == 0 } as ArrayList<ResponseBoardAll>
            adapter = BoardModelAdapter(filteredBoardModelArrayList as ArrayList<ResponseBoardAll>)
            recyclerView.adapter = adapter
        }
        binding.qnaButton.setOnClickListener {
            filteredBoardModelArrayList =
                boardModelArrayList.filter { it.category == 1 } as ArrayList<ResponseBoardAll>
            adapter = BoardModelAdapter(filteredBoardModelArrayList as ArrayList<ResponseBoardAll>)
            recyclerView.adapter = adapter
        }
        binding.letterButton.setOnClickListener {
            filteredBoardModelArrayList =
                boardModelArrayList.filter { it.category == 2 } as ArrayList<ResponseBoardAll>
            adapter = BoardModelAdapter(filteredBoardModelArrayList as ArrayList<ResponseBoardAll>)
            recyclerView.adapter = adapter
        }

        binding.boardFab.setOnClickListener { showPopup(binding.boardFab) }
    }

    private fun getMockData() {
        val executorService: ExecutorService = Executors.newFixedThreadPool(1)
        val countDownLatch: CountDownLatch = CountDownLatch(1)
        executorService.execute {
            val response = ApiService.getApiService.getBoard().execute()
            println(response.body())
            boardModelArrayList = response.body()!!
            filteredBoardModelArrayList = ArrayList(boardModelArrayList)
            countDownLatch.countDown()
        }

        countDownLatch.await()

    }

    //    팝업 메뉴 보여주는 커스텀 메소드
    private fun showPopup(v: View) {
        val popup = PopupMenu(activity, v) // PopupMenu 객체 선언
        popup.menuInflater.inflate(R.menu.board_menu, popup.menu) // 메뉴 레이아웃 inflate
        popup.show() // 팝업 보여주기
        popup.setOnMenuItemClickListener(PopupMenu.OnMenuItemClickListener { item: MenuItem? ->
            when (item!!.itemId) {
                R.id.board_create -> {
                    v.findNavController().navigate(R.id.action_recordFragment_to_recordBoardCreateFragment)
                }
                R.id.qna_create -> {
                    v.findNavController().navigate(R.id.action_recordFragment_to_recordQnaCreateFragment)
                }
                R.id.letter_create -> {
                    v.findNavController().navigate(R.id.action_recordFragment_to_recordLetterCreateFragment)
                }

            }

            true
        })
    }


}