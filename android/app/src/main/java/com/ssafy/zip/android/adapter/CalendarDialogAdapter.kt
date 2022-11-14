package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.ssafy.zip.android.data.FamilyMember


class CalendarDialogAdapter(private val memberList: ArrayList<FamilyMember>?, var link:CalendarFragment.MemberSelectAdapter) : RecyclerView.Adapter<CalendarDialogAdapter.CalendarFamilyViewHolder>() {

    class CalendarFamilyViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val familyImage: ImageView = itemView.findViewById(R.id.family_image)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CalendarFamilyViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.family_item, parent, false)
        return CalendarFamilyViewHolder(view)
        
    }

    override fun onBindViewHolder(holder: CalendarFamilyViewHolder, position: Int) {
        val member = memberList?.get(position)
        if (member?.character == null) {
            holder.familyImage.setImageResource(R.drawable.ex2)
        } else {
            Glide.with(holder.itemView)
                .load(member.character!!.img)
                .into(holder.familyImage)
        }

        // 함께하는 멤버들 id 담을 리스트 생성, 클릭하면 리스트에 담게끔, dialog-fragment로 보내기

        // var withUserId = ArrayList<Int>()
        var checkflag = true // 함께할 가족 선택 유무
        holder.familyImage.setOnClickListener {
            if(checkflag) {
                if (member != null) {
                    link.selectMember(member.id)
                }
                checkflag = false
                holder.familyImage.setAlpha(1f)
            }
            else{
                if (member != null) {
                    link.selectMember(member.id)
                }
                checkflag = true
                holder.familyImage.setAlpha(0.6f)
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





