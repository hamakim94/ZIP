package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Album
import com.ssafy.zip.android.data.Photo

class PhotoAdapter(private val photoList:ArrayList<Photo>) : RecyclerView.Adapter<PhotoAdapter.PhotoViewHolder>(){
    class PhotoViewHolder(itemView:View) : RecyclerView.ViewHolder(itemView){
        val photoImage : ImageView = itemView.findViewById(R.id.photo_image)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): PhotoViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.photo_item, parent, false)
        return PhotoViewHolder(view)
    }

    override fun onBindViewHolder(holder: PhotoViewHolder, position: Int) {
        val photo = photoList[position]
        holder.photoImage.setImageResource(photo.image)
    }

    override fun getItemCount(): Int {
        return photoList.size
    }
}