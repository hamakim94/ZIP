package com.ssafy.zip.android

import android.content.Context
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toolbar
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Notification


class NotificationFragment : Fragment() {
    private lateinit var recyclerView: RecyclerView
    private lateinit var notificationList: ArrayList<Notification>
    private lateinit var notificationAdapter: NotificationAdapter
    private lateinit var activity: MainActivity

    companion object {
        fun newInstance() : NotificationFragment = NotificationFragment()
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
    }

    override fun onAttach(context: Context) {
        super.onAttach(context)

        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        return inflater.inflate(R.layout.fragment_notification, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        recyclerView = view.findViewById(R.id.recycler_view)
        recyclerView.setHasFixedSize(true)
        recyclerView.layoutManager = GridLayoutManager(activity, 1)

        notificationList = ArrayList()
        addDataToList()

        notificationAdapter = NotificationAdapter(notificationList)
        recyclerView.adapter = notificationAdapter
    }

    private fun addDataToList(){
        notificationList.add(Notification(1, R.drawable.ex, "파덜이 괌여행 폴더에 사진을 올렸습니다.", 1))
        notificationList.add(Notification(2, R.drawable.ex2, "마덜이 10월 19일에 일정을 등록했습니다.", 1))
        notificationList.add(Notification(3, R.drawable.ex3, "부라덜이 게시글을 등록했습니다.", 1))
        notificationList.add(Notification(4, R.drawable.ex4, "부라덜이 릴레이 편지를 보냈습니다. \n이어서 편지를 보내보세요!", 1))
        notificationList.add(Notification(5, R.drawable.ex5, "백문백답이 등록되었습니다. \n참여해서 포인트를 얻어보세요!", 1))

    }
}