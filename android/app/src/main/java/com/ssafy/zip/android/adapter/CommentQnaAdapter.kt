package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Comment

class CommentQnaAdapter(private val commentList: ArrayList<Comment>) : RecyclerView.Adapter<CommentQnaAdapter.CommentViewHolder>() {

    class CommentViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView){
        val commentQnaUserNickname : TextView = itemView.findViewById(R.id.commentQnaUserNickname)
        val commentQnaReg : TextView = itemView.findViewById(R.id.commentQnaReg)
        val commentQnaContent : TextView = itemView.findViewById(R.id.commentQnaContent)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CommentViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.qna_comment_item, parent, false)
        return CommentViewHolder(view)
    }

    override fun onBindViewHolder(holder: CommentViewHolder, position: Int) {
        val currentItem = commentList[position]
        holder.commentQnaUserNickname.text = currentItem.commentUser
        holder.commentQnaReg.text = currentItem.commentReg
        holder.commentQnaContent.text = currentItem.commentContent
    }

    override fun getItemCount(): Int {
        return commentList.size
    }


}
