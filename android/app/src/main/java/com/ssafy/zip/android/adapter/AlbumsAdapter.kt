package com.ssafy.zip.android

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Album

class AlbumsAdapter(private val albumList:ArrayList<Album>) : RecyclerView.Adapter<AlbumsAdapter.AlbumViewHolder>(){
    class AlbumViewHolder(itemView:View) : RecyclerView.ViewHolder(itemView){
        val albumImage : ImageView = itemView.findViewById(R.id.album_image)
        val albumTitle : TextView = itemView.findViewById(R.id.album_title)
        val albumNum : TextView = itemView.findViewById(R.id.album_num)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): AlbumViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.album_item, parent, false)
        return AlbumViewHolder(view)
    }

    override fun onBindViewHolder(holder: AlbumViewHolder, position: Int) {
        val album = albumList[position]
        holder.albumImage.setImageResource(album.image)
        holder.albumTitle.text = album.title
        holder.albumNum.text = album.num.toString() + "개의 추억"
    }

    override fun getItemCount(): Int {
        return albumList.size
    }
}