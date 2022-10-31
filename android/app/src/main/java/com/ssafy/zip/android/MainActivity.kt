package com.ssafy.zip.android

import android.os.Bundle
import android.view.View
import androidx.appcompat.app.AppCompatActivity
import androidx.navigation.fragment.NavHostFragment
import androidx.navigation.ui.NavigationUI
import androidx.navigation.ui.setupWithNavController
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private lateinit var _binding: ActivityMainBinding;
    private val binding get() = _binding!!
    lateinit var User: User

    override fun onCreate(savedInstanceState: Bundle?) {
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
            val navGraph = navController.navInflater.inflate(R.navigation.bottom_bar_nav_graph)
            navGraph.setStartDestination(R.id.homeFragment)
            navController.setGraph(navGraph, null)
        }
        // 바인딩
        binding.bottomNavigationView.setupWithNavController(navController)
        // bottomtab 눌렀을 경우 이전 stack들 다 삭제
        NavigationUI.setupWithNavController(binding.bottomNavigationView, navController, false)
        navController.addOnDestinationChangedListener { _, destination, _ ->
            // 특정화면에서 하단바 없애기
            if (destination.id == R.id.loginFragment || destination.id == R.id.signupFragment || destination.id == R.id.signUpCompleteFragment) {
                binding.bottomNavigationView.visibility = View.GONE
                binding.bottomAppBar.visibility = View.GONE
                binding.fab.visibility = View.GONE
            } else {
                binding.bottomNavigationView.visibility = View.VISIBLE
                binding.bottomAppBar.visibility = View.VISIBLE
                binding.fab.visibility = View.VISIBLE
            }
        }
    }
}