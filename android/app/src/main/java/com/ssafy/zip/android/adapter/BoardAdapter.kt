package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Board

class BoardAdapter(private val boardList: ArrayList<Board>) :
    RecyclerView.Adapter<BoardAdapter.MyViewHolder>() {

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): MyViewHolder {
        val itemView =
            LayoutInflater.from(parent.context).inflate(R.layout.board_item, parent, false)
        return MyViewHolder(itemView)
    }

    override fun onBindViewHolder(holder: MyViewHolder, position: Int) {
        val currentItem = boardList[position]
        holder.userImage.setImageResource(currentItem.userImage)
        holder.userNickname.text = currentItem.userNickname
        holder.boardReg.text = currentItem.boardReg
        holder.boardImage.setImageResource(currentItem.boardImage)
        holder.boardContent.text = currentItem.boardContent
        holder.commentCount.text = currentItem.commentCount


    }

    override fun getItemCount(): Int {
        return boardList.size
    }

    class MyViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val userImage: ShapeableImageView = itemView.findViewById(R.id.profileImage)
        val userNickname: TextView = itemView.findViewById(R.id.userNickname)
        val boardReg: TextView = itemView.findViewById(R.id.boardReg)
        val boardImage: ImageView = itemView.findViewById(R.id.boardImage)
        val boardContent: TextView = itemView.findViewById(R.id.boardContent)
        val commentCount : TextView = itemView.findViewById(R.id.commentCount)

    }
}