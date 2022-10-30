package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.databinding.DataBindingUtil
import androidx.navigation.findNavController
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Album
import com.ssafy.zip.android.databinding.AlbumItemBinding

class AlbumAdapter(private val albumList:ArrayList<Album>) : RecyclerView.Adapter<AlbumAdapter.AlbumViewHolder>(){
    private lateinit var albumItemBinding: AlbumItemBinding

    inner class AlbumViewHolder(val binding: AlbumItemBinding) : RecyclerView.ViewHolder(binding.root){
//        val albumImage : ImageView = itemView.findViewById(R.id.album_image)
//        val albumTitle : TextView = itemView.findViewById(R.id.album_title)
//        val albumNum : TextView = itemView.findViewById(R.id.album_num)
//
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
//        val view = LayoutInflater.from(parent.context).inflate(R.layout.album_item, parent, false)
        albumItemBinding = DataBindingUtil.inflate(LayoutInflater.from(parent.context), R.layout.album_item, parent, false)

        return AlbumViewHolder(albumItemBinding)
    }

    override fun onBindViewHolder(holder: AlbumAdapter.AlbumViewHolder, position: Int){
        if(holder is AlbumViewHolder){
            val album = albumList[position]
            holder.binding.albumTitle.text = album.title
//            holder.binding.albumImage.setImageResource(album.photoList[0].url)
            holder.binding.albumNum.text = (if(album.photoList != null) album.photoList.size.toString() else "0") + "개의 추억"

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

//        val album = albumList[position]
//        holder.albumImage.setImageResource(album.photoList[0].url)
//        holder.albumTitle.text = album.title
//        holder.albumNum.text = album.photoList.size.toString() + "개의 추억"
//
//        holder.itemView.setOnClickListener{
//            // album item 클릭했을 때 실행
//            val bundle = Bundle()
//            bundle.putLong("albumId", album.id)
//            bundle.putString("albumTitle", album.title)
//            it.findNavController().navigate(R.id.action_recordFragment_to_recordAlbumPicturesFragment2, bundle)
//        }
//
//        holder.itemView.setOnLongClickListener{
//            // album item을 길게 클릭했을 때 실행
//            // album 삭체
//            return@setOnLongClickListener true
//        }
    }

    override fun getItemCount(): Int {
        return albumList.size
    }
}