package com.ssafy.zip.android

import android.app.Application
import android.content.*
import android.content.Context.CLIPBOARD_SERVICE
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.constraintlayout.widget.ConstraintLayout
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
import com.unity3d.player.UnityPlayer
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
    private lateinit var mUnityPlayer : UnityPlayer
    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        mUnityPlayer = (getActivity() as MainActivity).mUnityPlayer
        _binding = FragmentHomeBinding.inflate(inflater, container, false)
        var lp = ConstraintLayout.LayoutParams(ConstraintLayout.LayoutParams.MATCH_PARENT, ConstraintLayout.LayoutParams.MATCH_PARENT)
        if(mUnityPlayer.view.parent == null) {
            binding.homeHouse.addView(mUnityPlayer.view, 0, lp)
        }
        else{
            binding.homeHouse.addView(mUnityPlayer.view, 0, lp)
        }
        binding.viewmodel = viewModel
        binding.topText.setOnClickListener {
            CoroutineScope(Dispatchers.Main).launch {
                val instance = UserRepository.getInstance(Application())
                var response = instance?.logout()
                if(response.equals("200")){
                    val action = HomeFragmentDirections.actionHomeFragmentToLoginFragment()
//                    binding.root.findNavController().navigate(action)
                }
            }
//            UnityPlayer.UnitySendMessage("MainPanel", "Exit","")
            mUnityPlayer.windowFocusChanged(false)
        }
        binding.mission1Btn.setOnClickListener{
            var bundle = Bundle()
            viewModel.missions.value?.qna?.let { it1 -> bundle.putLong("id",  it1.id) }
//            binding.root.findNavController().navigate(R.id.action_homeFragment_to_recordQnaDetailFragment, bundle)
            mUnityPlayer.resume()
            mUnityPlayer.windowFocusChanged(true)
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

    override fun onPause() {
        super.onPause()
        println("pause")
        binding.homeHouse.removeView(binding.homeHouse.getChildAt(0))
    }

    override fun onStop() {
        super.onStop()
        println("stop")
    }

    override fun onDestroyView() {
        super.onDestroyView()
        binding.homeHouse.removeView(binding.homeHouse.getChildAt(0))
        _binding = null
    }

    // Quit Unity
//    override fun onDestroy() {
//        mUnityPlayer.destroy()
//        super.onDestroy()
//    }

    // If the activity is in multi window mode or resizing the activity is allowed we will use
    // onStart/onStop (the visibility callbacks) to determine when to pause/resume.
    // Otherwise it will be done in onPause/onResume as Unity has done historically to preserve
    // existing behavior.
//    override fun onStop() {
//        super.onStop()
//        if (!MultiWindowSupport.getAllowResizableWindow(activity)) return
//        mUnityPlayer.pause()
//        mUnityPlayer.windowFocusChanged(false)
//    }
//
//    override fun onStart() {
//        super.onStart()
//        if (!MultiWindowSupport.getAllowResizableWindow(activity)) return
//        mUnityPlayer.resume()
//        mUnityPlayer.windowFocusChanged(true)
//    }
//
//    // Pause Unity
//    override fun onPause() {
//        super.onPause()
//        MultiWindowSupport.saveMultiWindowMode(activity)
//        if (MultiWindowSupport.getAllowResizableWindow(activity)) return
//        mUnityPlayer.pause()
//        mUnityPlayer.windowFocusChanged(false)
//    }
//
//    // Resume Unity
//    override fun onResume() {
//        super.onResume()
//        if (MultiWindowSupport.getAllowResizableWindow(activity) && !MultiWindowSupport.isMultiWindowModeChangedToTrue(
//                activity
//            )
//        ) return
//        mUnityPlayer.resume()
//    }
//
//    // Low Memory Unity
//    override fun onLowMemory() {
//        super.onLowMemory()
//        mUnityPlayer.lowMemory()
//        mUnityPlayer.windowFocusChanged(false)
//    }

    // Trim Memory Unity


/*    override fun onStop() {
        super.onStop()
        if (!MultiWindowSupport.getAllowResizableWindow(activity)) return
        println("정지")
    }
    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
        mUnityPlayer.windowFocusChanged(false)
        mUnityPlayer.destroy()
        println("종료")

    }*/

}
