package com.ssafy.zip.android

import android.os.Bundle
import android.text.Editable
import android.text.TextWatcher
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import com.ssafy.zip.android.databinding.FragmentSignupBinding
import java.util.regex.Pattern

class SignupFragment : Fragment() {
    private var _binding: FragmentSignupBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentSignupBinding.inflate(inflater,container,false)
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        initView()
    }

    private fun initView(){
        binding.signupEmail.editText?.addTextChangedListener(emailListner)
        binding.editEmail.hint = resources.getString(R.string.email_hint)
        binding.editEmail.setOnFocusChangeListener {_,hasFocus ->
            if(hasFocus){
                binding.editEmail.hint = ""
            } else{
                binding.editEmail.hint = resources.getString(R.string.email_hint)
            }
        }
        binding.signupPassword.editText?.addTextChangedListener(passwordListner)
        binding.editPassword.hint = resources.getString(R.string.password_hint)
        binding.editPassword.setOnFocusChangeListener { _, hasfocus ->
            if(hasfocus){
                binding.editPassword.hint = ""
            } else{
                binding.editPassword.hint = resources.getString(R.string.password_hint)
            }
        }
        binding.editPasswordcheck.hint = resources.getString(R.string.password_check)
        binding.editPasswordcheck.setOnFocusChangeListener { _, hasfocus ->
            if(hasfocus){
                binding.editPasswordcheck.hint = ""
            } else{
                binding.editPasswordcheck.hint = resources.getString(R.string.password_check)
            }
        }
        binding.editNickname.hint = resources.getString(R.string.nickname_hint)
        binding.editNickname.setOnFocusChangeListener { _, hasfocus ->
            if(hasfocus){
                binding.editNickname.hint = ""
            } else{
                binding.editNickname.hint = resources.getString(R.string.nickname_hint)
            }
        }
    }

    private fun emailRegex(email: String):Boolean{
        if(android.util.Patterns.EMAIL_ADDRESS.matcher(email).matches()){
            return true
        }
        return false
    }

    private val emailListner = object : TextWatcher {
        override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun afterTextChanged(s: Editable?) {
            if (s != null) {
                when {
                    s.isEmpty() -> {
                        binding.signupEmail.error = "아이디(이메일)를 입력해주세요."
                    }
                    !emailRegex(s.toString()) -> {
                        binding.signupEmail.error = "이메일 양식이 맞지 않습니다"
                    }
                    else -> {
                        binding.signupEmail.error = null
                    }
                }
            }
        }
    }

    private fun passwordRegex(password: String):Boolean{
        if(Pattern.matches("^(?=.*[A-Za-z])(?=.*[0-9])(?=.*[$@$!%*#?&]).{8,15}.$", password)){
            return true
        }
        return false
    }

    private val passwordListner = object : TextWatcher {
        override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun afterTextChanged(s: Editable?) {
            if (s != null) {
                when {
                    s.isEmpty() -> {
                        binding.signupPassword.error = "비밀번호를 입력해주세요."
                    }
                    !passwordRegex(s.toString()) -> {
                        binding.signupPassword.error = "비밀번호 양식을 지켜주세요."
                    }
                    else -> {
                        binding.signupPassword.error = null
                    }
                }
            }
        }
    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }
}