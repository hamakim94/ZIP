package com.ssafy.zip.android

import android.os.Bundle
import android.text.Editable
import android.text.TextWatcher
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.navigation.findNavController
import com.ssafy.zip.android.data.request.RequestLoginData
import com.ssafy.zip.android.databinding.FragmentLoginBinding
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
//            ApiService.getApiService.requsetLogin(
//                RequestLoginData(
//                    email = binding.editEmail.text.toString(),
//                    password = binding.editPassword.text.toString()
//                )
//            ).(object : Callback<User> {
//                override fun onResponse(
//                    call: Call<User>,
//                    response: Response<User>
//                ) {
//                    if (response.code().toString().equals("200")) {
//                        val headers = response.headers()
//                        val accesstoken = headers.get("ACCESSTOKEN").toString()
//                        val refreshtoken = headers.get("REFRESHTOKEN").toString()
//                        App.prefs.setString("accesstoken", accesstoken)
//                        App.prefs.setString("refreshtoken", refreshtoken)
//                        Log.d("log1", response.body().toString())
//                        val user = response.body()?.toString()
//                        App.prefs.setString("user", user.toString())
//                        var action = LoginFragmentDirections.actionLoginFragmentToHomeFragment()
//                        if (App.prefs.getString("accesstoken", "").equals("")) {
////                            binding.root.findNavController().navigate(action)
//                        } else {
//                            action =
//                                LoginFragmentDirections.actionLoginFragmentToFamilyroomFragment()
////                          binding.root.findNavController().navigate(action)
//
//                        }
////                        (activity as MainActivity).User
//                    }
//                }
//
//                override fun onFailure(call: Call<User>, t: Throwable) {
//                    // 실패
//                    Log.d("log3", t.message.toString())
//                    Log.d("log4", "fail")
//                    Log.d("log5", t.toString())
//                }
//            })
            CoroutineScope(Dispatchers.Main).launch {
                val response = ApiService.getApiService.requsetLogin(
                    RequestLoginData(
                        email = binding.editEmail.text.toString(),
                        password = binding.editPassword.text.toString()
                    )
                )
                if (response.isSuccessful) {
                    val headers = response.headers()
                    val accesstoken = headers.get("ACCESSTOKEN").toString()
                    val refreshtoken = headers.get("REFRESHTOKEN").toString()
                    App.prefs.setString("accesstoken", accesstoken)
                    App.prefs.setString("refreshtoken", refreshtoken)
                    Log.d("log1", response.body().toString())
                    val user = response.body()?.toString()
                    App.prefs.setString("user", user.toString())
                    var action = LoginFragmentDirections.actionLoginFragmentToHomeFragment()
                    binding.root.findNavController().navigate(action)
//                        if (!App.prefs.getString("accesstoken", "").equals("")) {
//                        } else {
//                            action =
//                                LoginFragmentDirections.actionLoginFragmentToFamilyroomFragment()
//                          binding.root.findNavController().navigate(action)
//                        }
                }
            }

        }
        binding.signupText.setOnClickListener {
//            CoroutineScope(Dispatchers.IO).launch {
//                ApiService.getApiService.getBoard()
//            }
        }
        binding.passwordfindText.setOnClickListener {
            // 토큰 잘 쓰는지 테스트용이였음
//            api.requestReissue().enqueue(object : Callback<ResponseLoginData> {
//                override fun onResponse(
//                    call: Call<ResponseLoginData>,
//                    response: Response<ResponseLoginData>
//                ) {
//                    Log.d("log1", response.toString())
////                    if(response.code().toString().equals("200")) {
////                        val headers = response.headers()
////                        val accesstoken = headers.get("ACCESSTOKEN").toString()
////                        val refreshtoken = headers.get("REFRESHTOKEN").toString()
////                        App.prefs.setString("accesstoken", accesstoken)
////                        App.prefs.setString("refreshtoken", refreshtoken)
////                        Log.d("log1", response.toString())
////                    }
//                }
//
//                override fun onFailure(call: Call<ResponseLoginData>, t: Throwable) {
//                    // 실패
//                    Log.d("log3",t.message.toString())
//                    Log.d("log4","fail")
//                }
//            })
//            val action = LoginFragmentDirections.actionLoginFragmentToPasswordfindFragment()
//            binding.root.findNavController().navigate(action)
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
        binding.editPassword.setOnFocusChangeListener { _, hasfocus ->
            if (hasfocus) {
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