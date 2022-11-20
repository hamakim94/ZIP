package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import android.text.Editable
import android.text.TextWatcher
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.fragment.app.Fragment
import androidx.navigation.findNavController
import androidx.navigation.fragment.findNavController
import com.bumptech.glide.Glide
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.ssafy.zip.android.data.request.RequestSignup
import com.ssafy.zip.android.databinding.FragmentSignupBinding
import com.ssafy.zip.android.repository.UserRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import java.util.regex.Pattern

class SignupFragment : Fragment() {
    private var _binding: FragmentSignupBinding? = null
    private val binding get() = _binding!!

    private var emailFlag = false
    private var emailCheck = false
    private var passwordFlag = false
    private var passwordCheckFlag = false
    private var nameFlag = false
    private var nicknameFlag = false
    private var characterFlag = false

    private lateinit var activity: MainActivity

    private var selectedCharacter : com.ssafy.zip.android.data.Character? = null

    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
//        println("signup create")

        _binding = FragmentSignupBinding.inflate(inflater,container,false)
//        println("binding.editEmail.text: " + binding.editEmail.text)

        // 캐릭터 선택
        binding.profile.setOnClickListener{
            val action = SignupFragmentDirections.actionSignupFragmentToCharacterFragment(selectedCharacter)
            binding.root.findNavController().navigate(action)
            /*binding.root.findNavController().navigate(R.id.action_signupFragment_to_characterFragment)*/
        }

        binding.btnDuplicate.setOnClickListener{
            if(binding.editEmail.text.toString().length>0) {
                CoroutineScope(Dispatchers.Main).launch {
                    val instance = UserRepository.getInstance(Application())
                    var response = instance?.emailCheck(
                        email = binding.editEmail.text.toString()
                    )
                    if(response.equals("200")){
                        MaterialAlertDialogBuilder(activity)
                            .setMessage("확인됐습니다.")
                            .setPositiveButton("확인") { dialog, which ->
                                dialog.dismiss()
                            }
                            .show()

                        emailCheck = true
                        flagCheck()
//                        Toast.makeText(context,"확인됐습니다.", Toast.LENGTH_SHORT).show()
                    }
                    else{
                        MaterialAlertDialogBuilder(activity)
                            .setMessage("중복된 이메일입니다.")
                            .setPositiveButton("확인") { dialog, which ->
                                dialog.dismiss()
                            }
                            .show()
                        emailCheck = false
                        flagCheck()
                        binding.signupEmail.error = "중복된 이메일입니다."
                    }
                }
            }
        }
        binding.btnSignup.setOnClickListener{
            CoroutineScope(Dispatchers.Main).launch {
                val instance = UserRepository.getInstance(Application())
                var response : String? = ""

                if(selectedCharacter != null){
//                    println("selectedCharacter: " + selectedCharacter)
//                    println("selectedCharacter!!.id: " + selectedCharacter!!.id)
                    response = instance?.signUp(
                        RequestSignup(
                            characterId = selectedCharacter!!.id,
                            email = binding.editEmail.text.toString(),
                            password = binding.editPassword.text.toString(),
                            name = binding.editName.text.toString(),
                            nickname = binding.editNickname.text.toString()
                        )
                    )
                }

                if(response.equals("200")){
                    val action = SignupFragmentDirections.actionSignupFragmentToSignUpCompleteFragment()
                    binding.root.findNavController().navigate(action)
                } else{
                    Toast.makeText(context,"회원 정보를 다시 확인해주세요", Toast.LENGTH_SHORT)
                }
            }
        }
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        initView()

        findNavController().currentBackStackEntry
            ?.savedStateHandle
            ?.getLiveData<com.ssafy.zip.android.data.Character>("character")
            ?.observe(viewLifecycleOwner) {
                selectedCharacter = it
                characterFlag = true
                Glide.with(view)
                    .load(it.img)
                    .into(binding.profile)
                flagCheck()
            }
    }

   private fun initView(){
       binding.btnDuplicate.isEnabled = false
       binding.btnSignup.isEnabled = false
        binding.signupEmail.editText?.addTextChangedListener(emailListener)
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
        binding.editPassword.setOnFocusChangeListener { _, hasFocus ->
            if(hasFocus){
                binding.editPassword.hint = ""
            } else{
                binding.editPassword.hint = resources.getString(R.string.password_hint)
            }
        }
       binding.signupPasswordcheck.editText?.addTextChangedListener(passwordcheckListener)
        binding.editPasswordcheck.hint = resources.getString(R.string.password_check)
        binding.editPasswordcheck.setOnFocusChangeListener { _, hasFocus ->
            if(hasFocus){
                binding.editPasswordcheck.hint = ""
            } else{
                binding.editPasswordcheck.hint = resources.getString(R.string.password_check)
            }
        }
       binding.signupName.editText?.addTextChangedListener(nameListener)
       binding.editName.hint = resources.getString(R.string.name_hint)
       binding.editName.setOnFocusChangeListener { _, hasFocus ->
           if(hasFocus){
               binding.editName.hint = ""
           } else{
               binding.editName.hint = resources.getString(R.string.name_hint)
           }
       }
       binding.signupNickname.editText?.addTextChangedListener(nicknameListener)
        binding.editNickname.hint = resources.getString(R.string.nickname_hint)
        binding.editNickname.setOnFocusChangeListener { _, hasFocus ->
            if(hasFocus){
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

    private fun flagCheck() {
        binding.btnSignup.isEnabled = emailFlag && emailCheck && passwordFlag && passwordCheckFlag && nameFlag && nicknameFlag && characterFlag
    }
    private val emailListener = object : TextWatcher {
        override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun afterTextChanged(s: Editable?) {
            if (s != null) {
                when {
                    s.isEmpty() -> {
                        binding.signupEmail.error = "아이디(이메일)를 입력해주세요."
                        emailFlag = false
                        emailCheck = false
                        binding.btnDuplicate.isEnabled = false
                    }
                    !emailRegex(s.toString()) -> {
                        binding.signupEmail.error = "이메일 양식이 맞지 않습니다"
                        emailFlag = false
                        emailCheck = false
                        binding.btnDuplicate.isEnabled = true
                    }
                    else -> {
                        binding.signupEmail.error = null
                        emailFlag = true
                        emailCheck = false
                        binding.btnDuplicate.isEnabled = true
                    }
                }
                flagCheck()
            }
        }
    }

    private fun passwordRegex(password: String):Boolean{
        if(Pattern.matches("^(?=.*[A-Za-z])(?=.*[0-9])(?=.*[$@$!%*#?&]).{8,20}.$", password)){
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
                        passwordFlag = false
                    }
                    s.isNotEmpty() -> {
                        binding.signupPassword.error = null
                        passwordFlag = true
                        when {
                            binding.signupPasswordcheck.editText?.text.toString() != ""
                                    && binding.signupPassword.editText?.text.toString() != binding.signupPasswordcheck.editText?.text.toString() -> {
                                binding.signupPasswordcheck.error = "비밀번호가 일치하지 않습니다"
                                passwordCheckFlag = false
                                passwordFlag = true
                            }
                            !passwordRegex(s.toString()) -> {
                                binding.signupPassword.error = "8~20자 영문, 숫자, 특수문자를 사용하세요."
                                passwordFlag = false
                            }
                            else -> {
                                binding.signupPasswordcheck.error = null
                                passwordCheckFlag = true
                            }
                        }
                    }
                }
                flagCheck()
            }
        }
    }

    private val passwordcheckListener = object : TextWatcher {
        override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun afterTextChanged(s: Editable?) {
            if (s != null) {
                when {
                    s.isEmpty() -> {
                        binding.signupPasswordcheck.error = "비밀번호를 입력해주세요."
                        passwordCheckFlag = false
                    }
                    binding.signupPasswordcheck.editText?.text.toString() != ""
                            && binding.signupPassword.editText?.text.toString() != binding.signupPasswordcheck.editText?.text.toString() -> {
                        binding.signupPasswordcheck.error = "비밀번호가 일치하지 않습니다."
                        passwordCheckFlag = false
                    }
                    else -> {
                        binding.signupPasswordcheck.error = null
                        passwordCheckFlag = true
                    }
                }
                flagCheck()
            }
        }
    }

    private val nameListener = object : TextWatcher {
        override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun afterTextChanged(s: Editable?) {
            if (s != null) {
                when {
                    s.isEmpty() -> {
                        binding.signupName.error = "이름을 입력해주세요."
                        nameFlag = false
                    }
                    else -> {
                        binding.signupName.error = null
                        nameFlag = true
                    }
                }
                flagCheck()
            }
        }
    }

    private val nicknameListener = object : TextWatcher {
        override fun beforeTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun onTextChanged(p0: CharSequence?, p1: Int, p2: Int, p3: Int) {
        }
        override fun afterTextChanged(s: Editable?) {
            if (s != null) {
                when {
                    s.isEmpty() -> {
                        binding.signupNickname.error = "애칭을 입력해주세요."
                        nicknameFlag = false
                    }
                    else -> {
                        binding.signupNickname.error = null
                        nicknameFlag = true
                    }
                }
                flagCheck()
            }
        }
    }

    override fun onDestroyView() {
//        println("signup destroy")
        super.onDestroyView()
        _binding = null
    }
}