package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.databinding.FragmentModifyBinding

class ModifyFragment : Fragment() {

    private var _binding: FragmentModifyBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentModifyBinding.inflate(inflater, container, false)
        val data = requireArguments().getParcelable<FamilyMember>("data")
        return binding.root;
    }
}