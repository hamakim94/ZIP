package com.ssafy.zip.android

import android.Manifest
import android.app.Application
import android.content.Intent
import android.content.pm.PackageManager
import android.os.Build
import android.os.Bundle
import android.view.View
import android.view.ViewGroup
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.app.AppCompatActivity
import androidx.core.content.ContextCompat
import androidx.navigation.fragment.NavHostFragment
import androidx.navigation.ui.NavigationUI
import androidx.navigation.ui.setupWithNavController
import com.google.firebase.messaging.FirebaseMessaging
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.databinding.ActivityMainBinding
import com.ssafy.zip.android.repository.HomeRepository
import com.unity3d.player.UnityPlayer
import com.unity3d.player.UnityPlayerActivity
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import java.util.*


class MainActivity : AppCompatActivity() {
    private lateinit var _binding: ActivityMainBinding
    private val binding get() = _binding!!
    var mUnityPlayer : UnityPlayer = UnityPlayer(App.ApplicationContext())
    var stopCheck : Boolean = false
    lateinit var checkView : ViewGroup

    override fun onCreate(savedInstanceState: Bundle?) {
        TimeZone.setDefault(TimeZone.getTimeZone("GMT+9"))
        super.onCreate(savedInstanceState)
        _binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val glesMode: Int = mUnityPlayer.getSettings().getInt("gles_mode", 1)
        val trueColor8888 = false
        mUnityPlayer.init(glesMode, trueColor8888)
        UnityPlayer.UnitySendMessage("Panel", "InitHome", App.prefs.getString("accesstoken",""))
        // 네비게이션 호스트
        val navHostFragment =
            supportFragmentManager.findFragmentById(R.id.nav_host) as NavHostFragment
        // 네비게이션 컨트롤러 (네비게이션 그래프 정보를 바탕으로 네비게이션 간 이동을 담당)
        val navController = navHostFragment.navController
        binding.fab.setOnClickListener{
            stopCheck = true;
            var intent = Intent(this@MainActivity, UnityPlayerActivity::class.java)
            intent.putExtra("token", App.prefs.getString("accesstoken",""))
            startActivity(intent)
        }
        // 자동 로그인
        if (!App.prefs.getString("accesstoken", "").equals("")) {
            CoroutineScope(Dispatchers.Main).launch {
                val instance = HomeRepository.getInstance(Application())
                var response = instance?.getUserData()
                if (response is User) {
                    if (response.hasFamily) {
//                        Handler(Looper.getMainLooper()).postDelayed({}, 2000) 딜레이로 시작화면 다르게 해보기
                        val navGraph =
                            navController.navInflater.inflate(R.navigation.bottom_bar_nav_graph)
                        navGraph.setStartDestination(R.id.homeFragment)
                        navController.setGraph(navGraph, null)
                    }
                }
            }

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
            } else {
                // Directly ask for the permission
                requestPermissionLauncher.launch(Manifest.permission.POST_NOTIFICATIONS)
            }
        }
    }

    // Low Memory Unity
    override fun onLowMemory() {
        super.onLowMemory()
        mUnityPlayer.lowMemory()
    }

    // Trim Memory Unity
    override fun onTrimMemory(level: Int) {
        super.onTrimMemory(level)
        if (level == TRIM_MEMORY_RUNNING_CRITICAL) {
            mUnityPlayer.lowMemory()
        }
    }
    // [END ask_post_notifications]
    fun restart(){
        finishAffinity()
        val intent = Intent(this, MainActivity::class.java)
        startActivity(intent)
        System.exit(0)
    }

    override fun onResume() {
        super.onResume()
        if(stopCheck) {
            restart()
        }
    }
}