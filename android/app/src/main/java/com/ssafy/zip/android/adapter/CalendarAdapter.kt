package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Calendar

class CalendarAdapter(private val calendarList:ArrayList<Calendar>) : RecyclerView.Adapter<CalendarAdapter.CalendarViewHolder>(){
    class CalendarViewHolder(itemView:View) : RecyclerView.ViewHolder(itemView){
        val calendarImage : ImageView = itemView.findViewById(R.id.calendar_image)
        val calendarTitle : TextView = itemView.findViewById(R.id.calendar_title)
        val calendarNum : TextView = itemView.findViewById(R.id.calendar_num)

    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CalendarViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.calendar_item, parent, false)
        return CalendarViewHolder(view)
    }

    override fun onBindViewHolder(holder: CalendarViewHolder, position: Int) {
        val calendar = calendarList[position]
        holder.calendarImage.setImageResource(calendar.image)
        holder.calendarTitle.text = calendar.title
        holder.calendarNum.text = calendar.num.toString() + "시"
    }

    override fun getItemCount(): Int {
        return calendarList.size
    }
}