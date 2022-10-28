package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import com.ssafy.zip.android.databinding.FragmentFamilyroomBinding

class FamilyroomFragment : Fragment() {
    private var _binding: FragmentFamilyroomBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentFamilyroomBinding.inflate(inflater, container, false)
        return binding.root
    }
}