package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.appcompat.widget.Toolbar
import androidx.core.view.isGone
import androidx.databinding.DataBindingUtil
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Notification
import com.ssafy.zip.android.databinding.FragmentNotificationBinding
import com.ssafy.zip.android.viewmodel.NotificationViewModel


class NotificationFragment : Fragment() {
    private var _binding: FragmentNotificationBinding? = null
    private val binding get() = _binding!!

    private lateinit var recyclerView: RecyclerView
    private lateinit var notificationList: ArrayList<Notification>
    private lateinit var notificationAdapter: NotificationAdapter
    private lateinit var activity: MainActivity

    private val viewModel by viewModels<NotificationViewModel>{NotificationViewModel.Factory(
        Application()
    )}

    override fun onAttach(context: Context) {
        super.onAttach(context)
        activity = context as MainActivity

    }
    override fun onResume() {
        super.onResume()
        viewModel.getNotification()
    }


    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = DataBindingUtil.inflate(
            inflater, R.layout.fragment_notification, container, false)
        binding.viewmodel = viewModel

        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        observeNotificationList(activity)
        val toolbar: Toolbar = binding.notificationDetailAppbar
        toolbar.title = "알림"

        recyclerView = view.findViewById(R.id.notification_recycler_view)
        recyclerView.setHasFixedSize(true)
        recyclerView.layoutManager = GridLayoutManager(activity, 1)

        notificationList = ArrayList()

        notificationAdapter = NotificationAdapter(notificationList)
        recyclerView.adapter = notificationAdapter
    }

    private fun observeNotificationList(activity: MainActivity){
        val observer = object : Observer<ArrayList<Notification>>{
            override fun onChanged(notificationList : ArrayList<Notification>?) {
                notificationAdapter = notificationList?.let { NotificationAdapter(it) }!!
                recyclerView.adapter = notificationAdapter
                if(notificationList.isEmpty()){
                    binding.notificationZero.isGone = false
                } else{
                    binding.notificationZero.isGone = true
                }
            }

        }
        viewModel.notificationList.observe(viewLifecycleOwner, observer)
    }


}