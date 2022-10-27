package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.FragmentManager
import androidx.recyclerview.widget.RecyclerView
import de.hdodenhof.circleimageview.CircleImageView


class CalendarDialogAdapter(private val calendarFamilyList: ArrayList<Member>, fragmentManager: FragmentManager) : RecyclerView.Adapter<CalendarDialogAdapter.CalendarFamilyViewHolder>() {
    private var mFragmentManager : FragmentManager

    init {
        mFragmentManager = fragmentManager
    }

    class CalendarFamilyViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val familyImage: CircleImageView = itemView.findViewById(R.id.family_image)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CalendarFamilyViewHolder {
        return CalendarFamilyViewHolder(
            LayoutInflater.from(parent.context)
                .inflate(R.layout.family_item, parent, false)
        )
    }

    override fun onBindViewHolder(holder: CalendarFamilyViewHolder, position: Int) {
        val familyImage = calendarFamilyList[position]
        holder.familyImage.setImageResource(familyImage.image)



    }

    override fun getItemCount(): Int {
        return calendarFamilyList.size
    }

}
