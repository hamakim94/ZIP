package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.ssafy.zip.android.DateUtil
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Comment

class CommentAdapter(private val commentList: ArrayList<Comment>) :
    RecyclerView.Adapter<CommentAdapter.CommentViewHolder>() {

    class CommentViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val commentUser: TextView = itemView.findViewById(R.id.commentUserNickname)
        val commentReg: TextView = itemView.findViewById(R.id.commentReg)
        val commentContent: TextView = itemView.findViewById(R.id.commentContent)
        val commentUserImage: ImageView = itemView.findViewById(R.id.commentProfileImage)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CommentViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.comment_item, parent, false)
        return CommentViewHolder(view)
    }

    override fun onBindViewHolder(holder: CommentViewHolder, position: Int) {
        val currentItem = commentList[position]
        holder.commentUser.text = currentItem.user.nickname
        holder.commentReg.text = DateUtil.txtDate(currentItem.reg)
        holder.commentContent.text = currentItem.content
        if(currentItem.user.character != null) {
            Glide.with(holder.itemView).load(currentItem.user.character!!.img)
                .into(holder.commentUserImage)
        } else{
            holder.commentUserImage.setImageResource(R.drawable.ex)
        }


    }

    override fun getItemCount(): Int {
        return commentList.size
    }


}
