package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Calendar
import com.ssafy.zip.android.data.User

class CalendarMemberAdapter(private val memberList:ArrayList<User>) : RecyclerView.Adapter<CalendarMemberAdapter.ViewHolder>(){

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.calendar_member_item, parent, false)
        return ViewHolder(view)
    }

    override fun getItemCount(): Int {
        return memberList.size
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        val user = memberList[position]
        holder.imageView.setImageResource(0) //member.img


    }

   inner class ViewHolder(itemView : View) : RecyclerView.ViewHolder(itemView) {
       val imageView: ImageView = itemView.findViewById(R.id.calendar_member_image)
   }



}



