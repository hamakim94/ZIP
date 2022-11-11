package com.ssafy.zip.android

import android.app.Application
import android.content.ClipData
import android.content.ClipboardManager
import android.content.Context
import android.content.Context.CLIPBOARD_SERVICE
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.core.view.isGone
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.navigation.findNavController
import androidx.recyclerview.widget.GridLayoutManager
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.ssafy.zip.android.adapter.HomeAdapter
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.Missions
import com.ssafy.zip.android.databinding.FragmentHomeBinding
import com.ssafy.zip.android.repository.UserRepository
import com.ssafy.zip.android.viewmodel.HomeViewModel
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch


class HomeFragment : Fragment() {
    private var _binding: FragmentHomeBinding? = null
    private val binding get() = _binding!!
    private lateinit var activity: MainActivity
    private lateinit var homeList: ArrayList<FamilyMember>
    private lateinit var homeAdapter: HomeAdapter
    private val viewModel by viewModels<HomeViewModel>{HomeViewModel.Factory(Application())}

    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentHomeBinding.inflate(inflater, container, false)
        binding.viewmodel = viewModel

        binding.topText.setOnClickListener {
            CoroutineScope(Dispatchers.Main).launch {
                val instance = UserRepository.getInstance(Application())
                var response = instance?.logout()
                if(response.equals("200")){
                    val action = HomeFragmentDirections.actionHomeFragmentToLoginFragment()
                    binding.root.findNavController().navigate(action)
                }
            }
        }
        binding.mission1Btn.setOnClickListener{
            var bundle = Bundle()
            viewModel.missions.value?.qna?.let { it1 -> bundle.putLong("id",  it1.id) }
            binding.root.findNavController().navigate(R.id.action_homeFragment_to_recordQnaDetailFragment, bundle)
        }

        binding.mission2Btn.setOnClickListener{
            var bundle = Bundle()
            bundle.putParcelable("Letter", viewModel.missions.value?.letter)
            bundle.putParcelable("User", viewModel.userData.value)
            if(viewModel.missions.value?.letter?.isSent == true){
                MaterialAlertDialogBuilder(activity)
                    .setMessage("이미 작성하셨습니다")
                    .setPositiveButton("확인") { dialog, which ->
                        dialog.dismiss()
                    }
                    .show()
            } else{
                binding.root.findNavController().navigate(R.id.action_homeFragment_to_recordLetterCreateFragment, bundle)
            }
        }
        binding.familyCodeCopyContainer.setOnClickListener{
            val clipboard = requireActivity().getSystemService(CLIPBOARD_SERVICE) as ClipboardManager
            val clip = ClipData.newPlainText("label", binding.familyCode.text)
            clipboard.setPrimaryClip(clip)
            Toast.makeText(context, R.string.family_code_clipboard, Toast.LENGTH_SHORT).show()
        }
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        binding.homeRecyclerView.setHasFixedSize(true)
        observeFamily(activity)
        observeMission(activity)
        homeList = ArrayList()

    }

    private fun observeFamily(activity: MainActivity){
        val observer = Observer<Family> { _ ->
            binding.viewmodel = viewModel
            if(viewModel.familyData.value != null){
                homeList = viewModel.familyData.value!!.familyList
            }
            homeAdapter = HomeAdapter(homeList, viewModel.familyData.value?.familyName!!, childFragmentManager)
            binding.homeRecyclerView.adapter = homeAdapter

            val cnt = when(homeAdapter.itemCount){
                in 1..4 -> homeAdapter.itemCount
                in 5..6 -> 3
                else -> 4
            }
            binding.homeRecyclerView.layoutManager = GridLayoutManager(activity, cnt)
            binding.familyCode.text = viewModel.familyData.value?.code.toString()
            binding.familyPoint.text = viewModel.familyData.value?.points.toString()
        }
        viewModel.familyData.observe(viewLifecycleOwner, observer)
    }

    private fun observeMission(activity: MainActivity){
        val observer = Observer<Missions> { _ ->
            binding.viewmodel = viewModel
            if(viewModel.familyData.value?.familyList?.size!!>1){
                val size = viewModel.familyData.value?.familyList?.size!!.toDouble()
                binding.mission1Progress.progress = ((viewModel.missions.value?.qna?.answerCnt!!/size)*100).toInt()
                binding.mission2Progress.progress = ((viewModel.missions.value?.letter?.today!!/size)*100).toInt()
            } else{
                binding.missionContainer.isGone = true
                binding.mission1Progress.progress = 0
                binding.mission2Progress.progress = 0
                binding.missionContainerFamilyzero.isGone = false
            }
        }
        viewModel.missions.observe(viewLifecycleOwner, observer)
    }

}
