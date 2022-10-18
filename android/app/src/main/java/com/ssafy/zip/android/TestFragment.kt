package com.ssafy.zip.android

import android.os.Bundle
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.navigation.findNavController
import com.ssafy.zip.android.databinding.FragmentTestBinding

class TestFragment : Fragment() {
    private var _binding: FragmentTestBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        _binding = FragmentTestBinding.inflate(inflater,container,false)
        binding.button.setOnClickListener {
            val str = binding.editTextTextPersonName.text.toString() ?: "hello"
            val action = TestFragmentDirections.actionTestFragmentToTestFragment2(str)
            binding.root.findNavController().navigate(action)
        }
        return binding.root
    }

    override fun onDestroyView() {
        super.onDestroyView()
        Log.d(this.javaClass.name,"finish view")
        _binding = null
    }
}