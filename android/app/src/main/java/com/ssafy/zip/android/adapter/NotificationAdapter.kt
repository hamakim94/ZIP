package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Notification

class NotificationAdapter(private val notificationList: ArrayList<Notification>) : RecyclerView.Adapter<NotificationAdapter.NotificationViewHolder>(){
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
        holder.notificationImage.setImageResource(notification.image)
        holder.notificationTitle.text = notification.title
        holder.notificationNum.text = notification.num.toString() + "시간 전"
    }

    override fun getItemCount(): Int {
        return notificationList.size
    }
}