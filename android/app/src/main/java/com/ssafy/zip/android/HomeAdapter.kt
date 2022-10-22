package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import de.hdodenhof.circleimageview.CircleImageView

class HomeAdapter(private val homeList:ArrayList<Member>) : RecyclerView.Adapter<HomeAdapter.HomeViewHolder>() {
    class HomeViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val homeImage: CircleImageView = itemView.findViewById(R.id.home_image)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): HomeViewHolder {
        return HomeViewHolder(
            LayoutInflater.from(parent.context)
                .inflate(R.layout.home_item, parent, false)
        )
    }

    override fun onBindViewHolder(holder: HomeViewHolder, position: Int) {
        val homeImage = homeList[position]
        holder.homeImage.setImageResource(homeImage.image)
    }

    override fun getItemCount(): Int {
        return homeList.size
    }
}