package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.User
import de.hdodenhof.circleimageview.CircleImageView


class CalendarDialogAdapter(private val memberList: ArrayList<User>) : RecyclerView.Adapter<CalendarDialogAdapter.CalendarFamilyViewHolder>() {
    class CalendarFamilyViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val familyImage: ImageView = itemView.findViewById(R.id.family_image)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CalendarFamilyViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.family_item, parent, false)
        return CalendarFamilyViewHolder(view)
        
    }

    override fun onBindViewHolder(holder: CalendarFamilyViewHolder, position: Int) {
        val member = memberList[position]
        holder.familyImage.setImageResource(member.img)
    }

    override fun getItemCount(): Int {
        return memberList.size

    }
}





