package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.User


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
        holder.familyImage.setImageResource(0) //member.img
        holder.familyImage.setOnClickListener {
            itemClickListener.onClick(it, position)
        }
    }
    // (2) 리스너 인터페이스
    interface OnItemClickListener {
        fun onClick(v: View, position: Int)
    }
    // (3) 외부에서 클릭 시 이벤트 설정
    fun setItemClickListener(onItemClickListener: Any) {
        this.itemClickListener = onItemClickListener as OnItemClickListener
    }
    // (4) setItemClickListener로 설정한 함수 실행
    private lateinit var itemClickListener : OnItemClickListener



    override fun getItemCount(): Int {
        return memberList.size

    }
}





