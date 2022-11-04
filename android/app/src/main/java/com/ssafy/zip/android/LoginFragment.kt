package com.ssafy.zip.android

import android.app.Application
import android.os.Bundle
import android.text.Editable
import android.text.TextWatcher
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.navigation.findNavController
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.data.request.RequestLoginData
import com.ssafy.zip.android.databinding.FragmentLoginBinding
import com.ssafy.zip.android.repository.UserRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class LoginFragment : Fragment() {
    private var _binding: FragmentLoginBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentLoginBinding.inflate(inflater, container, false)
        binding.btnLogin.setOnClickListener {
            CoroutineScope(Dispatchers.Main).launch {
                val instance = UserRepository.getInstance(Application())
                var loginData = instance?.login(
                    RequestLoginData(
                        email = binding.editEmail.text.toString(),
                        password = binding.editPassword.text.toString()
                    )
                ) 
                if (loginData is User) {
                    var action = LoginFragmentDirections.actionLoginFragmentToHomeFragment()
                    if (loginData.hasFamily) {
                        binding.root.findNavController().navigate(action)
                    } else {
                        action = LoginFragmentDirections.actionLoginFragmentToFamilyEnterFragment()
                        binding.root.findNavController().navigate(action)
                    }
                } else {
                    println(loginData)
                }
            }

        }
        binding.signupText.setOnClickListener {
            val action = LoginFragmentDirections.actionLoginFragmentToSignupFragment()
            binding.root.findNavController().navigate(action)
        }
        binding.passwordfindText.setOnClickListener {

        }
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        initView()
    }

    private fun initView() {
        binding.loginEmail.editText?.addTextChangedListener(emailListner)
        binding.editEmail.hint = resources.getString(R.string.email_hint)
        binding.editEmail.setOnFocusChangeListener { _, hasFocus ->
            if (hasFocus) {
                binding.editEmail.hint = ""
            } else {
                binding.editEmail.hint = resources.getString(R.string.email_hint)
            }
        }
        binding.editPassword.hint = resources.getString(R.string.password_hint)
        binding.editPassword.setOnFocusChangeListener { _, hasFocus ->
            if (hasFocus) {
                binding.editPassword.hint = ""
            } else {
                binding.editPassword.hint = resources.getString(R.string.password_hint)
            }
        }
    }

    private fun emailRegex(email: String): Boolean {
        if (android.util.Patterns.EMAIL_ADDRESS.matcher(email).matches()) {
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
                        binding.loginEmail.error = "아이디(이메일)를 입력해주세요."
                    }
                    !emailRegex(s.toString()) -> {
                        binding.loginEmail.error = "이메일 양식이 맞지 않습니다"
                    }
                    else -> {
                        binding.loginEmail.error = null
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