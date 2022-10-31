package com.ssafy.zip.android

import android.content.Context
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ArrayAdapter
import android.widget.Spinner
import com.ssafy.zip.android.databinding.FragmentRecordBoardCreateBinding
import com.ssafy.zip.android.databinding.FragmentRecordLetterCreateBinding

class RecordLetterCreateFragment : Fragment() {

    lateinit var mainActivity: MainActivity


    private var _binding: FragmentRecordLetterCreateBinding? = null
    private val binding get() = _binding!!

    override fun onAttach(context: Context) {
        super.onAttach(context)
        mainActivity = context as MainActivity
    }
    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentRecordLetterCreateBinding.inflate(inflater, container, false)
        val view = binding.root


        return view
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        val spinner: Spinner = binding.toSpinner
        ArrayAdapter.createFromResource(
            mainActivity,
            R.array.spinner_letter_to,
            android.R.layout.simple_spinner_item
        ).also { adapter ->
            adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item)
            spinner.adapter = adapter
        }
    }

}