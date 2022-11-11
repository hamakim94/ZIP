package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import android.view.*
import android.widget.ImageView
import android.widget.PopupMenu
import androidx.databinding.DataBindingUtil
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.navigation.findNavController
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.ssafy.zip.android.adapter.BoardModelAdapter
import com.ssafy.zip.android.adapter.HomeAdapter
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.data.response.ResponseBoardAll
import com.ssafy.zip.android.databinding.FragmentHomeBinding
import com.ssafy.zip.android.databinding.FragmentRecordBoardBinding
import com.ssafy.zip.android.viewmodel.BoardViewModel
import java.util.concurrent.CountDownLatch
import java.util.concurrent.ExecutorService
import java.util.concurrent.Executors


class RecordBoardFragment : Fragment() {
    private var _binding: FragmentRecordBoardBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private lateinit var adapter: BoardModelAdapter
    private lateinit var recyclerView: RecyclerView
    private lateinit var filteredBoardModelArrayList: ArrayList<ResponseBoardAll>
    private val viewModel by viewModels<BoardViewModel>{BoardViewModel.Factory(Application())}


    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = DataBindingUtil.inflate(
            inflater, R.layout.fragment_record_board, container, false)
        binding.viewmodel = viewModel

        return binding.root
    }

    override fun onResume() {
        super.onResume()
        viewModel.getMission()
        binding.allButton.isChecked = true
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        viewModel.getBoardAll()
        observeViewModel(activity)
        observeUser(activity)
        val layoutManager = LinearLayoutManager(context)
        recyclerView = view.findViewById(R.id.board_recyclerview)
        recyclerView.layoutManager = layoutManager
        recyclerView.setHasFixedSize(true)

        adapter = BoardModelAdapter(ArrayList(), viewModel)
        recyclerView.adapter = adapter
        // 그냥 뿌리기
        binding.allButton.setOnClickListener {
            adapter = BoardModelAdapter(viewModel.boardList.value!!, viewModel)
            recyclerView.adapter = adapter
        }
        // 필터링 해서 뿌려주기
        binding.boardButton.setOnClickListener {
            filteredBoardModelArrayList =
                viewModel.boardList.value!!.filter { it.category == 0 } as ArrayList<ResponseBoardAll>
            adapter = BoardModelAdapter(filteredBoardModelArrayList, viewModel)
            recyclerView.adapter = adapter
        }
        binding.qnaButton.setOnClickListener {
            filteredBoardModelArrayList =
                viewModel.boardList.value!!.filter { it.category == 1 } as ArrayList<ResponseBoardAll>
            adapter = BoardModelAdapter(filteredBoardModelArrayList, viewModel)
            recyclerView.adapter = adapter
        }
        binding.letterButton.setOnClickListener {
            filteredBoardModelArrayList =
                viewModel.boardList.value!!.filter { it.category == 2 } as ArrayList<ResponseBoardAll>
            adapter = BoardModelAdapter(filteredBoardModelArrayList, viewModel)
            recyclerView.adapter = adapter
        }

        binding.boardFab.setOnClickListener { showPopup(binding.boardFab) }
    }

    private fun observeViewModel(activity: MainActivity){
        val observer = object  : Observer<ArrayList<ResponseBoardAll>>{
            override fun onChanged(boardList: ArrayList<ResponseBoardAll>?) {
                if(boardList != null && viewModel.userData.value != null ){
                    adapter = BoardModelAdapter(boardList, viewModel)
                }
                recyclerView.adapter = adapter
            }

        }
        viewModel.boardList.observe(viewLifecycleOwner, observer)
    }
    private fun observeUser(activity: MainActivity){
        val observer = Observer<User> { _ ->
            binding.viewmodel = viewModel
            if(viewModel.boardList.value != null && viewModel.userData.value != null ){
                adapter = BoardModelAdapter(viewModel.boardList.value!!, viewModel)
            }
            recyclerView.adapter = adapter
        }
        viewModel.userData.observe(viewLifecycleOwner, observer)
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
                    val bundle = Bundle()
//                    bundle.putParcelable("Qna", viewModel.missions.value?.qna)
                    viewModel.missions.value?.qna?.let { bundle.putLong("id", it.id) }
                    v.findNavController().navigate(R.id.action_recordFragment_to_recordQnaDetailFragment, bundle)
                }
                R.id.letter_create -> {
                    val bundle = Bundle()
                    bundle.putParcelable("Letter", viewModel.missions.value?.letter)
                    bundle.putParcelable("User", viewModel.userData.value)
                    if(viewModel.missions.value?.letter?.isSent == true){
                        MaterialAlertDialogBuilder(activity)
                            .setMessage("이미 작성하셨습니다")
                            .setPositiveButton("확인") { dialog, which ->
                                dialog.dismiss()
                            }
                            .show()
                    } else{
                        v.findNavController().navigate(R.id.action_recordFragment_to_recordLetterCreateFragment, bundle)
                    }
                }

            }

            true
        })
    }


}