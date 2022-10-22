package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Letter

class LetterAdapter(private val letterList: ArrayList<Letter>) :
    RecyclerView.Adapter<LetterAdapter.MyViewHolder>() {

    class MyViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val letterTitle: TextView = itemView.findViewById(R.id.letterTitle)
        val letterReg: TextView = itemView.findViewById(R.id.letterReg)
        val letterContent: TextView = itemView.findViewById(R.id.letterContent)

    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): MyViewHolder {
        val itemView =
            LayoutInflater.from(parent.context).inflate(R.layout.letter_item, parent, false)
        return MyViewHolder(itemView)
    }

    override fun onBindViewHolder(holder: MyViewHolder, position: Int) {
        val currentItem = letterList[position]
        holder.letterTitle.text = currentItem.letterTitle
        holder.letterReg.text = currentItem.letterReg
        holder.letterContent.text = currentItem.letterContent
    }

    override fun getItemCount(): Int {
        return letterList.size
    }


}