package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.ssafy.zip.android.data.FamilyMember

class CalendarMemberAdapter(private val memberList:ArrayList<FamilyMember>) : RecyclerView.Adapter<CalendarMemberAdapter.ViewHolder>(){

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.calendar_member_item, parent, false)
        return ViewHolder(view)
    }

    override fun getItemCount(): Int {
        return memberList.size
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        val user = memberList[position]
        if (user.character == null) {
            holder.imageView.setImageResource(R.drawable.ex2)
        } else {
            Glide.with(holder.itemView)
                .load(user.character!!.img)
                .into(holder.imageView)
        }

    }

   inner class ViewHolder(itemView : View) : RecyclerView.ViewHolder(itemView) {
       val imageView: ImageView = itemView.findViewById(R.id.calendar_member_image)
   }



}



