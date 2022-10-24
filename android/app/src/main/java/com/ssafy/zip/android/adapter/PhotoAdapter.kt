package com.ssafy.zip.android

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import androidx.navigation.findNavController
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Photo

class PhotoAdapter(private val photoList:ArrayList<Photo>, var photo_onClick_interface: photo_onClick_interface) : RecyclerView.Adapter<PhotoAdapter.PhotoViewHolder>(){
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

        holder.itemView.setOnClickListener{
            // photo item 클릭했을 때 실행
            val bundle = Bundle()
            bundle.putLong("photoId", photo.id)
            bundle.putInt("photoImage", photo.image)
            bundle.putString("albumTitle", photo_onClick_interface.onClickPhoto()) // 사진 상세 페이지의 appbar에 넣기 위해서 데이터 전달
            bundle.putParcelableArrayList("photoList", photoList) // Parcel에 객체를 write/read 하도록 만들어주는 인터페이스
            it.findNavController().navigate(R.id.action_recordAlbumPicturesFragment2_to_recordAlbumPhotoDetailFragment2, bundle)
        }

        holder.itemView.setOnLongClickListener{
            // album item을 길게 클릭했을 때 실행
            // album 삭체
            return@setOnLongClickListener true
        }
    }

    override fun getItemCount(): Int {
        return photoList.size
    }
}