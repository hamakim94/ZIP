package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.navigation.findNavController
import androidx.recyclerview.widget.GridLayoutManager
import com.ssafy.zip.android.adapter.HomeAdapter
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.Missions
import com.ssafy.zip.android.databinding.FragmentHomeBinding
import com.ssafy.zip.android.viewmodel.HomeViewModel

class HomeFragment : Fragment() {
    private var _binding: FragmentHomeBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private lateinit var homeList: ArrayList<FamilyMember>
    private lateinit var homeAdapter: HomeAdapter
    private val viewModel by viewModels<HomeViewModel>{HomeViewModel.Factory(Application())}

    override fun onAttach(context: Context) {
        super.onAttach(context)

        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentHomeBinding.inflate(inflater, container, false)
        binding.viewmodel = viewModel

        binding.mission1Btn.setOnClickListener{
            val action = HomeFragmentDirections.actionHomeFragmentToRecordFragment()
            binding.root.findNavController().navigate(action)
        }

        binding.mission2Btn.setOnClickListener{
            val action = HomeFragmentDirections.actionHomeFragmentToRecordFragment()
            binding.root.findNavController().navigate(action)
        }
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        binding.homeRecyclerView.setHasFixedSize(true)
        observeFamily(activity)
        observeMission(activity)
        homeList = ArrayList()
    }

    private fun observeFamily(activity: MainActivity){
        val observer = Observer<Family> { _ ->
            binding.viewmodel = viewModel
            if(viewModel.familyData.value != null){
                homeList = viewModel.familyData.value!!.familyList
            }
            homeAdapter = HomeAdapter(homeList, viewModel.familyData.value?.familyName!!, childFragmentManager)
            binding.homeRecyclerView.adapter = homeAdapter

            val cnt = when(homeAdapter.itemCount){
                in 1..4 -> homeAdapter.itemCount
                in 5..6 -> 3
                else -> 4
            }
            binding.homeRecyclerView.layoutManager = GridLayoutManager(activity, cnt)
        }
        viewModel.familyData.observe(viewLifecycleOwner, observer)
    }

    private fun observeMission(activity: MainActivity){
        val observer = Observer<Missions> { _ ->
            binding.viewmodel = viewModel
            if(viewModel.familyData.value?.familyList?.size!!>0){
                val size = viewModel.familyData.value?.familyList?.size!!.toDouble()
                binding.mission1Progress.progress = ((viewModel.missions.value?.qna?.answerCnt!!/size)*100).toInt()
                binding.mission2Progress.progress = ((viewModel.missions.value?.letter?.today!!/size)*100).toInt()
            } else{
                binding.mission1Progress.progress = 0
                binding.mission2Progress.progress = 0
            }
        }
        viewModel.missions.observe(viewLifecycleOwner, observer)
    }

}