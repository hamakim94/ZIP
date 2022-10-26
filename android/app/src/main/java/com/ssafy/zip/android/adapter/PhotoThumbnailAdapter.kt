package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Photo

class PhotoThumbnailAdapter(private val photoList : ArrayList<Photo>) : RecyclerView.Adapter<PhotoThumbnailAdapter.PhotoThumbnailViewHolder>(){
    inner class PhotoThumbnailViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val photoImage : ImageView = itemView.findViewById(R.id.photo_thumbnail_image)

//        fun bind(position: Int) {
//            photoImage.setImageResource(photoList[position].image)
//        }
    }

    // ViewHolder 를 새로 만들어야 할 때 호출
    // 각 아이템을 위한 XML 레이아웃을 활용한 뷰 객체를 생성하고 이를 뷰 홀더 객체에 담아 리턴
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): PhotoThumbnailViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(
            R.layout.photo_thumbnail_item,
            parent,
            false
        )

        return PhotoThumbnailViewHolder(view)
    }

    // ViewHolder 를 어떠한 데이터와 연결할 때 호출되는 메소드
    // ViewHolder 객체들의 레이아웃을 채우게 된다.
    // position 이라는 파라미터를 활용하여 데이터의 순서에 맞게 아이템 레이아웃을 바인딩
    override fun onBindViewHolder(holder: PhotoThumbnailViewHolder, position: Int) {
        holder.photoImage.setImageResource(
            photoList[position].image
        )
        holder.itemView.setOnClickListener{
            println("클릭: " + position)
            // 아래 사진 바꾸기
            // 스타일 적용 하기
        }

        holder.photoImage.width
    }

    override fun getItemCount(): Int {
        return photoList.size
    }
}