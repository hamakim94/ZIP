package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.navigation.findNavController
import com.ssafy.zip.android.databinding.FragmentSignUpCompleteBinding

class SignUpCompleteFragment : Fragment() {
    private var _binding : FragmentSignUpCompleteBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?,
                              savedInstanceState: Bundle?): View? {
        _binding = FragmentSignUpCompleteBinding.inflate(inflater,container,false)
        binding.btnLogin.setOnClickListener{
            val action = SignUpCompleteFragmentDirections.actionSignUpCompleteFragmentToLoginFragment()
            binding.root.findNavController().navigate(action)
        }
        return binding.root
    }

}