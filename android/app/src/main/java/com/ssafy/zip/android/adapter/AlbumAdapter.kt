package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.navigation.findNavController
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Album

class AlbumAdapter(private val albumList:ArrayList<Album>) : RecyclerView.Adapter<AlbumAdapter.AlbumViewHolder>(){
    class AlbumViewHolder(itemView:View) : RecyclerView.ViewHolder(itemView){
        val albumImage : ImageView = itemView.findViewById(R.id.album_image)
        val albumTitle : TextView = itemView.findViewById(R.id.album_title)
        val albumNum : TextView = itemView.findViewById(R.id.album_num)

//        init {
//            itemView.setOnClickListener{
//                // album item 클릭했을 때 실행
//                val bundle = Bundle()
//                bundle.putLong("albumId", )
//                it.findNavController().navigate(R.id.action_recordAlbumFragment3_to_recordAlbumPicturesFragment)
//            }
//
//            itemView.setOnLongClickListener{
//                // album item을 길게 클릭했을 때 실행
//                // album 삭체
//                return@setOnLongClickListener true
//            }
//        }
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): AlbumViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.album_item, parent, false)
        return AlbumViewHolder(view)
    }

    override fun onBindViewHolder(holder: AlbumViewHolder, position: Int){
        val album = albumList[position]
        holder.albumImage.setImageResource(album.image)
        holder.albumTitle.text = album.title
        holder.albumNum.text = album.num.toString() + "개의 추억"

        holder.itemView.setOnClickListener{
            // album item 클릭했을 때 실행
            val bundle = Bundle()
            bundle.putLong("albumId", album.id)
            bundle.putString("albumTitle", album.title)
            it.findNavController().navigate(R.id.action_recordFragment_to_recordAlbumPicturesFragment2, bundle)
        }

        holder.itemView.setOnLongClickListener{
            // album item을 길게 클릭했을 때 실행
            // album 삭체
            return@setOnLongClickListener true
        }
    }

    override fun getItemCount(): Int {
        return albumList.size
    }
}