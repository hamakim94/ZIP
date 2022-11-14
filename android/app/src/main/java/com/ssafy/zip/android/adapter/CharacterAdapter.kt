package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.ssafy.zip.android.MainActivity
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.CharacterItem
import de.hdodenhof.circleimageview.CircleImageView


class CharacterAdapter(private val characterItemList:ArrayList<CharacterItem>, var activity: MainActivity) : RecyclerView.Adapter<CharacterAdapter.CharacterViewHolder>() {
    private var listener : OnItemClickListener? = null // 리스너 객체 참조를 저장하는 변수

    inner class CharacterViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView){
        val characterImage: CircleImageView = itemView.findViewById(R.id.character_image)
    }

    interface OnItemClickListener{
        fun onItemClick(view:View, position : Int)
    }

    // OnItemClickListener 리스너 객체 참조를 어댑터에 전달하는 메서드
    fun setOnItemClickListener(listener : OnItemClickListener) {
        this.listener = listener
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CharacterViewHolder {
        return CharacterViewHolder(
            LayoutInflater.from(parent.context)
                .inflate(R.layout.character_item, parent, false)
        )
    }

    override fun onBindViewHolder(holder: CharacterViewHolder, position: Int) {
        val characterItem = characterItemList[position]

        if(characterItem.character.img == null) {
            holder.characterImage.setImageResource(R.drawable.ex)
        } else{
            /*holder.characterImage.setImageResource(characterItem.character.img)*/
            Glide.with(holder.itemView)
                .load(characterItem.character.img)
                .override(200, 200)
                .into(holder.characterImage)
        }

        if (position != RecyclerView.NO_POSITION) {
            holder.characterImage.setOnClickListener { view ->
                listener?.onItemClick(view, position)
                println(characterItem.isSelected)
                characterItem.isSelected = !characterItem.isSelected
                println(characterItem.isSelected)
            }
        }

        if (characterItem.isSelected) {
            holder.characterImage.alpha = 1f
        } else {
            holder.characterImage.alpha = 0.5f
        }
    }

    override fun onBindViewHolder(holder: CharacterViewHolder, position: Int, payloads: List<Any?>) {
        if (payloads.isEmpty()) {
            super.onBindViewHolder(holder, position, payloads)
        } else {
            val characterItem = characterItemList[position]

            if (characterItem.character.img == null) {
                holder.characterImage.setImageResource(R.drawable.ex)
            } else {
                /*holder.characterImage.setImageResource(characterItem.character.img)*/
                Glide.with(holder.itemView)
                .load(characterItem.character.img)
                .override(200, 200)
                .into(holder.characterImage)
            }

            for (payload in payloads) {
                if (payload.toString().equals("unselect")) {
                    if (position != RecyclerView.NO_POSITION) {
                        characterItem.isSelected = !characterItem.isSelected
                    }
                    if (characterItem.isSelected) {
                        holder.characterImage.alpha = 1f
                    } else {
                        holder.characterImage.alpha = 0.5f
                    }
                }
            }
        }
    }

    override fun getItemCount(): Int {
        return characterItemList.size
    }
}