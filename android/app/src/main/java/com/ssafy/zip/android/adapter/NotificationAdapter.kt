package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.navigation.NavDeepLinkBuilder
import androidx.navigation.findNavController
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.ssafy.zip.android.data.Notification
import com.ssafy.zip.android.repository.BoardRepository
import com.ssafy.zip.android.repository.NotificationRepository
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

// GLIDE 이미지 처리
// id, message, link, image, isRead
class NotificationAdapter(private val notificationList: ArrayList<Notification>) : RecyclerView.Adapter<NotificationAdapter.NotificationViewHolder>(){

    private lateinit var context : Context

    override fun onAttachedToRecyclerView(recyclerView: RecyclerView) {
        super.onAttachedToRecyclerView(recyclerView)
        context = recyclerView.context
    }

    class NotificationViewHolder(itemView:View) : RecyclerView.ViewHolder(itemView){
        val notificationImage : ImageView = itemView.findViewById(R.id.notification_image)
        val notificationTitle : TextView = itemView.findViewById(R.id.notification_title)
        val notificationNum : TextView = itemView.findViewById(R.id.notification_num)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): NotificationViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.notification_item, parent, false)
        return NotificationViewHolder(view)
    }

    override fun onBindViewHolder(holder: NotificationViewHolder, position: Int) {
        val notification = notificationList[position]
        if (notification.image == null) {
            holder.notificationImage.setImageResource(R.drawable.ex)
        } else {
            Glide.with(holder.itemView)
                .load(notification.image)
                .into(holder.notificationImage)
        }
        holder.notificationTitle.text = notification.message
        holder.notificationNum.text = DateUtil.txtDate(notification.reg)


        // 누르면, 텍스트에 뭐가 들어가있는 지 따라
        holder.itemView.setOnClickListener {
            // post 해서 해당 알림 읽음처리.
            CoroutineScope(Dispatchers.Main).launch {
                val instance = NotificationRepository.getInstance(Application())
                instance?.readNotification(notificationList[position].id)
            }
            // 게시판, 알림, 앨범 으로 이동하도록 하자 ,.
            if(notificationList[position].message?.contains("일정") == true){

                it.findNavController().navigate(R.id.action_notificationFragment_to_calendarFragment)
            } else if (notificationList[position].message?.contains("성공") == true || notificationList[position].message?.contains("되었습니다. ") == true){
                it.findNavController().navigate(R.id.action_notificationFragment_to_homeFragment)
            } else{
//                데이터 가져와서 뿌려서 가면 좋았을 텐데 안 된다.,.,
//                CoroutineScope(Dispatchers.Main).launch {
//                    val args = Bundle()
//                    val instance = BoardRepository.getInstance(Application())
//                    val board = instance?.getBoardDetailById(20)?.board
//                    args.putParcelable("Board", board)
//                    println("aaaaaaaaaaaaaaaaaaaaaaa\n" + args.toString())
//                    val pendingIntent = NavDeepLinkBuilder(context)
//                        .setGraph(R.navigation.bottom_bar_nav_graph)
//                        .setDestination(R.id.recordBoardDetailFragment)
//                        .setArguments(args)
//                        .createPendingIntent()
//                }
                it.findNavController().navigate(R.id.action_notificationFragment_to_recordFragment)
            }
        }






    }

    override fun getItemCount(): Int {
        return notificationList.size
    }
}