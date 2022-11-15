package com.ssafy.zip.android

import android.content.pm.PackageManager
import android.os.Build
import android.os.Bundle
import android.view.View
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.app.AppCompatActivity
import androidx.core.content.ContextCompat
import androidx.navigation.fragment.NavHostFragment
import androidx.navigation.ui.NavigationUI
import androidx.navigation.ui.setupWithNavController
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.databinding.ActivityMainBinding
import android.Manifest
import android.app.Application
import android.util.Log
import android.widget.Toast
import com.google.android.gms.tasks.OnCompleteListener
import com.google.firebase.messaging.FirebaseMessaging
import com.ssafy.zip.android.repository.HomeRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import java.util.*


class MainActivity : AppCompatActivity() {

    private lateinit var _binding: ActivityMainBinding;
    private val binding get() = _binding!!
    lateinit var User: User

    override fun onCreate(savedInstanceState: Bundle?) {
        TimeZone.setDefault(TimeZone.getTimeZone("GMT"))
        super.onCreate(savedInstanceState)
        _binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        // 네비게이션 호스트
        val navHostFragment =
            supportFragmentManager.findFragmentById(R.id.nav_host) as NavHostFragment
        // 네비게이션 컨트롤러 (네비게이션 그래프 정보를 바탕으로 네비게이션 간 이동을 담당)
        val navController = navHostFragment.navController
        // 자동 로그인
        if (!App.prefs.getString("accesstoken", "").equals("")) {
            CoroutineScope(Dispatchers.Main).launch {
                val instance = HomeRepository.getInstance(Application())
                var response = instance?.getUserData()
                println(response.toString())
                if (response is User) {
                    println(response.toString())
                    if (response.hasFamily) {
                        val navGraph =
                            navController.navInflater.inflate(R.navigation.bottom_bar_nav_graph)
                        navGraph.setStartDestination(R.id.homeFragment)
                        navController.setGraph(navGraph, null)
                    }

                }
            }
            //여기에 가족코드 있는지 없는지 검사


            //조건문
//            val navGraph = navController.navInflater.inflate(R.navigation.bottom_bar_nav_graph)
//            navGraph.setStartDestination(R.id.homeFragment)
//            navController.setGraph(navGraph, null)
        }
        // 바인딩
        binding.bottomNavigationView.setupWithNavController(navController)
        // bottomtab 눌렀을 경우 이전 stack들 다 삭제
        NavigationUI.setupWithNavController(binding.bottomNavigationView, navController, false)
        navController.addOnDestinationChangedListener { _, destination, _ ->
            // 특정화면에서 하단바 없애기
            if (destination.id == R.id.loginFragment || destination.id == R.id.signupFragment || destination.id == R.id.signUpCompleteFragment || destination.id == R.id.recordBoardCreateFragment || destination.id == R.id.recordLetterCreateFragment || destination.id == R.id.recordQnaDetailFragment || destination.id == R.id.recordBoardDetailFragment
                || destination.id == R.id.familyEnterFragment || destination.id == R.id.familyCreateFragment || destination.id == R.id.characterFragment) {
                binding.bottomNavigationView.visibility = View.GONE
                binding.bottomAppBar.visibility = View.GONE
                binding.fab.visibility = View.GONE
                binding.mainFlContainer.setPadding(0, 0, 0, 0)
                // 여기에 작성 페이지, 패딩을 0으로 넣으면 될 듯 ^^;
            } else {
                binding.bottomNavigationView.visibility = View.VISIBLE
                binding.bottomAppBar.visibility = View.VISIBLE
                binding.fab.visibility = View.VISIBLE
                val dm = resources.displayMetrics
                val size = Math.round(56 * dm.density)
                binding.mainFlContainer.setPadding(0, 0, 0, size)
                // dp로 나타내야할듯
            }
        }
//        test()
    }
//    private fun test() {
//        FirebaseMessaging.getInstance().token.addOnCompleteListener(OnCompleteListener { task ->
//            if (!task.isSuccessful) {
//                Log.w("A", "Fetching FCM registration token failed", task.exception)
//                return@OnCompleteListener
//            }
//
//            // Get new FCM registration token
//            val token = task.result
//            println("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n"+token)
//        })
//
//    }


    // [START ask_post_notifications]
    // Declare the launcher at the top of your Activity/Fragment:
    private val requestPermissionLauncher = registerForActivityResult(
        ActivityResultContracts.RequestPermission()
    ) { isGranted: Boolean ->
        if (isGranted) {
            var token = FirebaseMessaging.getInstance().token;
        } else {
            // TODO: Inform user that that your app will not show notifications.
        }
    }

    private fun askNotificationPermission() {
        // This is only necessary for API level >= 33 (TIRAMISU)
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU) {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.POST_NOTIFICATIONS) ==
                PackageManager.PERMISSION_GRANTED
            ) {
                // FCM SDK (and your app) can post notifications.
            } else if (shouldShowRequestPermissionRationale(Manifest.permission.POST_NOTIFICATIONS)) {
                // TODO: display an educational UI explaining to the user the features that will be enabled
                //       by them granting the POST_NOTIFICATION permission. This UI should provide the user
                //       "OK" and "No thanks" buttons. If the user selects "OK," directly request the permission.
                //       If the user selects "No thanks," allow the user to continue without notifications.
            } else {
                // Directly ask for the permission
                requestPermissionLauncher.launch(Manifest.permission.POST_NOTIFICATIONS)
            }
        }
    }
    // [END ask_post_notifications]


}