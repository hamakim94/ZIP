package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Qna

class QnaAdapter(private val qnaList: ArrayList<Qna>) :
        RecyclerView.Adapter<QnaAdapter.MyViewHolder>() {

    class MyViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val qnaReg: TextView = itemView.findViewById(R.id.qnaReg)
        val qnaContent: TextView = itemView.findViewById(R.id.qnaContent)
        val qnaCommentCount: TextView = itemView.findViewById(R.id.qnaCommentCount)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): MyViewHolder {
        val itemView =
            LayoutInflater.from(parent.context).inflate(R.layout.quiz_item, parent, false)
        return MyViewHolder(itemView)
    }

    override fun onBindViewHolder(holder: MyViewHolder, position: Int) {
        val currentItem = qnaList[position]
        holder.qnaReg.text = currentItem.qnaReg
        holder.qnaContent.text = currentItem.qnaContent
        holder.qnaCommentCount.text = currentItem.qnaCommentCount
    }

    override fun getItemCount(): Int {
        return qnaList.size
    }
}