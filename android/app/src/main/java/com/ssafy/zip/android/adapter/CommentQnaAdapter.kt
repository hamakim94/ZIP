package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.constraintlayout.utils.widget.ImageFilterButton
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.App
import com.ssafy.zip.android.DateUtil
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Comment
import com.ssafy.zip.android.viewmodel.QnaDetailViewModel

class CommentQnaAdapter(private val commentList: ArrayList<Comment>) :
    RecyclerView.Adapter<CommentQnaAdapter.CommentViewHolder>() {

    class CommentViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val commentQnaUserNickname: TextView = itemView.findViewById(R.id.commentQnaUserNickname)
        val commentQnaReg: TextView = itemView.findViewById(R.id.commentQnaReg)
        val commentQnaContent: TextView = itemView.findViewById(R.id.commentQnaContent)
        val commentQnaProfileImage: ShapeableImageView =
            itemView.findViewById(R.id.commentQnaProfileImage)
        val commentButton : ImageFilterButton = itemView.findViewById(R.id.commentButton)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CommentViewHolder {
        val view =
            LayoutInflater.from(parent.context).inflate(R.layout.qna_comment_item, parent, false)
        return CommentViewHolder(view)
    }

    override fun onBindViewHolder(holder: CommentViewHolder, position: Int) {
        var userId = App.prefs.getString("userId", "").toLong()
        val currentItem = commentList[position]

        holder.commentButton.setImageResource(R.drawable.ic_baseline_edit_24)
        if(userId != null){
            if(currentItem.user.id!= userId) {
                holder.commentButton.setImageResource(0)
            }
        }

        holder.commentQnaUserNickname.text = currentItem.user.nickname
        holder.commentQnaReg.text = DateUtil.txtDate(currentItem.reg)
        holder.commentQnaContent.text = currentItem.content
        if (currentItem.user.profileImg == null) {
            holder.commentQnaProfileImage.setImageResource(R.drawable.ex)
        } else{
            Glide.with(holder.itemView).load(currentItem.user.profileImg)
                .into(holder.itemView.findViewById(R.id.commentQnaProfileImage))
        }

    }

    override fun getItemCount(): Int {
        return commentList.size
    }


}
