package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.databinding.FragmentRecordLetterBinding
import com.ssafy.zip.android.databinding.FragmentRecordLetterDetailBinding

class RecordLetterDetailFragment : Fragment() {
    private var _binding: FragmentRecordLetterDetailBinding? = null
    private val binding get() = _binding!!

    lateinit var letterImageDetail : ShapeableImageView
    lateinit var letterUserNicknameDetail: TextView
    lateinit var letterRegDetail : TextView
    lateinit var letterContentDetail : TextView


    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentRecordLetterDetailBinding.inflate(inflater, container, false)
        val view = binding.root
        return view
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val letterData = arguments?.getParcelable<BoardModel.Letter>("Letter")
        if(letterData != null){
            binding.letterUserNicknameDetail.text = letterData.from.nickname + "에서" + letterData.to.nickname + "에게 보내는 편지"
            binding.letterRegDetail.text = letterData.reg.toString()
            binding.letterContentDetail.text = letterData.content
//            itemView.findViewById<TextView>(R.id.letterTitle).text = letter.from.nickname + "에서" + letter.to.nickname + "에게 보내는 편지"
//            itemView.findViewById<TextView>(R.id.letterReg).text = letter.reg
//            itemView.findViewById<TextView>(R.id.letterContent).text = letter.content
        }


    }
    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }
}