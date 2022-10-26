package com.ssafy.zip.android.adapter

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Member
import de.hdodenhof.circleimageview.CircleImageView
//fragmentManager: FragmentManager
class MemberAdapter (private val memberList :ArrayList<Member>) : RecyclerView.Adapter<MemberAdapter.MemberViewHolder>(){
//    private var mFragmentManager : FragmentManager
//    init {
//        mFragmentManager = fragmentManager
//    }

    class MemberViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val memberImage: CircleImageView = itemView.findViewById(R.id.member_image)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): MemberViewHolder {
        return MemberViewHolder(
            LayoutInflater.from(parent.context)
                .inflate(R.layout.qna_profile_item, parent, false)
        )

    }

    override fun onBindViewHolder(holder: MemberViewHolder, position: Int) {
        val memberImage = memberList[position]
        holder.memberImage.setImageResource(memberImage.image)
        holder.memberImage.setOnClickListener {
//            val dialog = CustomDialog()
            val args = Bundle()
//            args.putParcelable("key", homeImage)
//            dialog.arguments = args
//            dialog.show(mFragmentManager, "됐다")
        }

    }


    override fun getItemCount(): Int {
        return memberList.size
    }

}