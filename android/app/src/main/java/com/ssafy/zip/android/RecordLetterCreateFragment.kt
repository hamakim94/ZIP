package com.ssafy.zip.android

import android.annotation.SuppressLint
import android.app.Application
import android.content.Context
import android.graphics.Color
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ArrayAdapter
import android.widget.Spinner
import android.widget.Toast
import androidx.navigation.findNavController
import com.bumptech.glide.Glide
import com.ssafy.zip.android.data.MissionModel
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.data.request.RequestLetter
import com.ssafy.zip.android.databinding.FragmentRecordBoardCreateBinding
import com.ssafy.zip.android.databinding.FragmentRecordLetterCreateBinding
import com.ssafy.zip.android.repository.BoardRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import okhttp3.MediaType
import okhttp3.RequestBody

class RecordLetterCreateFragment : Fragment() {

    lateinit var mainActivity: MainActivity


    private var _binding: FragmentRecordLetterCreateBinding? = null
    private val binding get() = _binding!!

    private lateinit var letterBackGroundColor : String

    lateinit var letter: MissionModel.Letter
    lateinit var user: User

    override fun onAttach(context: Context) {
        super.onAttach(context)
        mainActivity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        letter = arguments?.getParcelable<MissionModel.Letter>("Letter")!!
        user = arguments?.getParcelable<User>("User")!!

        _binding = FragmentRecordLetterCreateBinding.inflate(inflater, container, false)
        val view = binding.root
        binding.yellowBtn.setImageResource(R.drawable.circle_yellow_selected)
        letterBackGroundColor = "yellow"

        binding.yellowBtn.setOnClickListener{
            binding.yellowBtn.setImageResource(R.drawable.circle_yellow_selected)
            binding.pinkBtn.setImageResource(R.drawable.circle_pink)
            binding.greenBtn.setImageResource(R.drawable.circle_green)
            binding.letterContainer.setBackgroundColor(Color.parseColor("#FFFBD9"))
            letterBackGroundColor = "yellow"
        }
        binding.pinkBtn.setOnClickListener{
            binding.pinkBtn.setImageResource(R.drawable.circle_pink_selected)
            binding.yellowBtn.setImageResource(R.drawable.circle_yellow)
            binding.greenBtn.setImageResource(R.drawable.circle_green)
            binding.letterContainer.setBackgroundColor(Color.parseColor("#FFE5E5"))
            letterBackGroundColor = "pink"
        }
        binding.greenBtn.setOnClickListener{
            binding.greenBtn.setImageResource(R.drawable.circle_green_selected)
            binding.yellowBtn.setImageResource(R.drawable.circle_yellow)
            binding.pinkBtn.setImageResource(R.drawable.circle_green)
            binding.letterContainer.setBackgroundColor(Color.parseColor("#F4FFDC"))
            letterBackGroundColor = "green"
        }

        binding.letterSendBtn.setOnClickListener {
            println("ButtonClicked")
            if (binding.letterContent.text.toString().isNotEmpty()) {
                CoroutineScope(Dispatchers.Main).launch {
                    val instance = BoardRepository.getInstance(Application())
                    val requestLetter = RequestLetter(
                        binding.letterContent.text.toString().replace("[\r\n]+", "\n"),
                        letterBackGroundColor,
                        letter.user.id
                    )
                    println(requestLetter.toString())
                    var response = instance?.postLetter(requestLetter)
                    if (response.equals("200")) {
                        binding.root.findNavController()
                            .navigate(R.id.action_recordLetterCreateFragment_pop)
                    } else {
                        Toast.makeText(context, "편지 내용을 입력해주세요", Toast.LENGTH_SHORT)
                    }
                }
            }
        }

        return view
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        if (user.profileImg == null) {
            binding.profileImage.setImageResource(R.drawable.ex)
        } else {
            Glide.with(view)
                .load(user.profileImg)
                .into(binding.profileImage)
        }
        binding.userNickname.text = user.nickname
        binding.textView2.text = "받는 사람 : " + letter.user.nickname


    }

}