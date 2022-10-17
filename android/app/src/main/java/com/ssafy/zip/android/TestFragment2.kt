package com.ssafy.zip.android

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import androidx.navigation.findNavController

class TestFragment2 : Fragment() {

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        val view = inflater.inflate(R.layout.fragment_test2, container, false)
        view.findViewById<Button>(R.id.button2).setOnClickListener {
            view.findNavController().navigate(R.id.action_testFragment2_to_testFragment3)
        }
        return view
    }
}