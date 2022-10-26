package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Comment

class CommentAdapter(private val commentList: ArrayList<Comment>) : RecyclerView.Adapter<CommentAdapter.CommentViewHolder>() {

    class CommentViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView){
        val commentUser : TextView = itemView.findViewById(R.id.commentUserNickname)
        val commentReg : TextView = itemView.findViewById(R.id.commentReg)
        val commentContent : TextView = itemView.findViewById(R.id.commentContent)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CommentViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.comment_item, parent, false)
        return CommentViewHolder(view)
    }

    override fun onBindViewHolder(holder: CommentViewHolder, position: Int) {
        val currentItem = commentList[position]
        holder.commentUser.text = currentItem.commentUser
        holder.commentReg.text = currentItem.commentReg
        holder.commentContent.text = currentItem.commentContent
    }

    override fun getItemCount(): Int {
        return commentList.size
    }


}
