package com.ssafy.zip.android

import android.content.Context
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.viewpager2.adapter.FragmentStateAdapter
import androidx.viewpager2.widget.ViewPager2
import com.google.android.material.tabs.TabLayout
import com.google.android.material.tabs.TabLayoutMediator

class RecordFragment : Fragment() {
    private lateinit var tabLayout: TabLayout
    private lateinit var viewPager: ViewPager2

    companion object {
        fun newInstance(): RecordFragment = RecordFragment()
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
    }

    override fun onAttach(context: Context) {
        super.onAttach(context)
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        var view: View = inflater.inflate(R.layout.fragment_record, container, false)

        tabLayout = view.findViewById(R.id.record_tablayout)
        viewPager = view.findViewById(R.id.record_viewpager)

        viewPager.adapter = RecordFragmentViewPagerAdapter(this)

        val tabName = arrayOf<String>("앨범", "게시글")

        // 슬라이드로 이동했을 때, 탭이 같이 변경되도록 (TabLayout과 ViewPager2를 연동을 도와주는 객체)
        TabLayoutMediator(tabLayout, viewPager) { tab, position ->
            tab.text = tabName[position].toString()
        }.attach()

        // 탭이 선택되었을 때, 뷰페이저가 같이 변경되도록
        tabLayout.addOnTabSelectedListener(object : TabLayout.OnTabSelectedListener {
            override fun onTabSelected(tab: TabLayout.Tab?) {
                viewPager.currentItem = tab!!.position
            }

            override fun onTabUnselected(tab: TabLayout.Tab?) {
            }

            override fun onTabReselected(tab: TabLayout.Tab?) {
            }
        })

        //여기서 만약 Album을 받으면 그대로, Board를 받으면 1로 가도록 한다면?
        if (arguments?.getString("Board") == "Board") {
            // arguments 분기 나누기, 게시판, 오늘의 편지(QNA),
//            val args = Bundle()
//            args.putString("link", "Board")
//            when (arguments?.getString("link")) {
//                "Board" -> {
//                    val args = Bundle()
//                    args.putString("link", "Board")
//                }
//            }

            tabLayout.selectTab(tabLayout.getTabAt(1));
        }

        return view
    }

    class RecordFragmentViewPagerAdapter(fragment: Fragment) : FragmentStateAdapter(fragment) {
        override fun getItemCount(): Int {
            return 2
        }

        override fun createFragment(position: Int): Fragment {
            return when (position) {
                0 -> RecordAlbumFragment()
                1 -> RecordBoardFragment()
                else -> RecordAlbumFragment()
            }
        }
    }
}