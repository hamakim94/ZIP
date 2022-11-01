package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.fragment.app.FragmentManager
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Calendar
import com.ssafy.zip.android.data.FamilyMember

class CalendarAdapter(
    private val calendarList: List<Calendar>,
    childFragmentManager: FragmentManager
) : RecyclerView.Adapter<CalendarAdapter.CalendarViewHolder>(){
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
       // holder.calendarStart.text = calendar.startDate.toString()
        holder.calendarStart.text = calendar.startDate.hours.toString() + ":" + calendar.startDate.minutes.toString()
        holder.calendarEnd.text = calendar.endDate.hours.toString() + ":" + calendar.endDate.minutes.toString()
        calendarMemberAdapter = CalendarMemberAdapter(calendar.users)
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
        val calendarStart: TextView = itemView.findViewById(R.id.calendar_start_time)
        val calendarEnd: TextView = itemView.findViewById(R.id.calendar_end_time)
        // val calendarImage : ImageView = itemView.findViewById(R.id.calendar_image)
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



