package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.User


class CalendarDialogAdapter(private val memberList: ArrayList<FamilyMember>?) : RecyclerView.Adapter<CalendarDialogAdapter.CalendarFamilyViewHolder>() {

    class CalendarFamilyViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val familyImage: ImageView = itemView.findViewById(R.id.family_image)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CalendarFamilyViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.family_item, parent, false)
        return CalendarFamilyViewHolder(view)
        
    }

    override fun onBindViewHolder(holder: CalendarFamilyViewHolder, position: Int) {
        val member = memberList?.get(position)
        if (member?.profileImg == null) {
            holder.familyImage.setImageResource(R.drawable.ex2)
        } else {
            Glide.with(holder.itemView)
                .load(member.profileImg)
                .into(holder.familyImage)
        }
        var checkflag = true
        holder.familyImage.setOnClickListener {
            if(checkflag) {
                println("더하기")
                checkflag = false
            }
            else{
                println("뺴기")
                checkflag = true
            }
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
        return memberList?.size ?: 0

    }
}





