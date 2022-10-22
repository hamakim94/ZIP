package com.ssafy.zip.android

import android.os.Bundle
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.GridLayoutManager
import com.ssafy.zip.android.databinding.FragmentHomeBinding

class HomeFragment : Fragment() {
    private var _binding: FragmentHomeBinding? = null
    private val binding get() = _binding!!
    private lateinit var homeList: ArrayList<Member>
    private lateinit var homeAdapter: HomeAdapter

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentHomeBinding.inflate(inflater, container, false)
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        binding.homeRecyclerView.setHasFixedSize(true)
        binding.homeRecyclerView.layoutManager = GridLayoutManager(activity, 3)

        homeList = ArrayList()
        addDataToList()

        homeAdapter = HomeAdapter(homeList)
        binding.homeRecyclerView.adapter = homeAdapter
    }

    private fun addDataToList() {
        homeList.add(Member(1, R.drawable.ic_baseline_home_24))
        homeList.add(Member(2, R.drawable.ic_baseline_home_24))
        homeList.add(Member(3, R.drawable.ic_baseline_home_24))
        homeList.add(Member(4, R.drawable.ic_baseline_home_24))
    }

}