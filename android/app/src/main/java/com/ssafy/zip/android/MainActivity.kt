package com.ssafy.zip.android

import android.content.Context
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.AttributeSet
import android.view.View
import androidx.navigation.fragment.NavHostFragment
import androidx.navigation.ui.NavigationUI
import androidx.navigation.ui.setupWithNavController
import com.ssafy.zip.android.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private lateinit var binding : ActivityMainBinding;

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        // 네비게이션 호스트
        val navHostFragment = supportFragmentManager.findFragmentById(R.id.nav_host) as NavHostFragment
        // 네비게이션 컨트롤러 (네비게이션 그래프 정보를 바탕으로 네비게이션 간 이동을 담당)
        val navController = navHostFragment.navController
        // 바인딩
        binding.bottomNavigationView.setupWithNavController(navController)
        // bottomtab 눌렀을 경우 이전 stack들 다 삭제
        NavigationUI.setupWithNavController(binding.bottomNavigationView, navController, false)
    }
}