package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.databinding.DataBindingUtil.setContentView
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Calendar
import com.ssafy.zip.android.data.User

class CalendarAdapter(private val calendarList:ArrayList<Calendar>) : RecyclerView.Adapter<CalendarAdapter.CalendarViewHolder>(){
    private val viewPool = RecyclerView.RecycledViewPool()
    private lateinit var calendarMemberAdapter : CalendarMemberAdapter

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CalendarViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.calendar_item, parent, false)
        return CalendarViewHolder(view)

    }
    override fun getItemCount(): Int {
        return calendarList.size
    }

    override fun onBindViewHolder(holder: CalendarViewHolder, position: Int) {
        val calendar = calendarList[position]
        // holder.calendarImage.setImageResource(calendar.user)
        holder.calendarTitle.text = calendar.content
      //  holder.calendarStart.text = calendar.startDate.toString()
        //holder.calendarEnd.text = calendar.endDate.toString()
        calendarMemberAdapter = CalendarMemberAdapter(calendar.user)
        val cnt2 = when (calendarMemberAdapter.itemCount) {
            in 1..4 -> calendarMemberAdapter.itemCount
           // in 5..6 -> 4
            else -> 4
        }
        holder.recyclerView.apply {
            adapter = calendarMemberAdapter
            layoutManager = GridLayoutManager(holder.recyclerView.context, cnt2)
        }
    }
    class CalendarViewHolder(itemView:View) : RecyclerView.ViewHolder(itemView){
       // val calendarStart: TextView = itemView.findViewById(R.id.calendar_start_time)
        //val calendarEnd: TextView = itemView.findViewById(R.id.calendar_end_time)
//        val calendarImage : ImageView = itemView.findViewById(R.id.calendar_image)
        val calendarTitle : TextView = itemView.findViewById(R.id.calendar_title)
        // val calendarNum : TextView = itemView.findViewById(R.id.calendar_num)
        // val calendarFamily : TextView = itemView.findViewById(R.id.calendar_family)
        val recyclerView: RecyclerView = itemView.findViewById(R.id.calendar_image)
    }

//    fun countRowNum(adapter: CalendarMemberAdapter) : Int{
//        val cnt2 = when (adapter.itemCount) {
//            in 1..4 -> adapter.itemCount
//            in 5..6 -> 3
//            else -> 4
//        }
//        return cnt2
//    }

    }



