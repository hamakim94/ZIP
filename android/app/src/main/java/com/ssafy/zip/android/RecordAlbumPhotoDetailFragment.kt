package com.ssafy.zip.android

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import androidx.appcompat.widget.Toolbar
import com.ssafy.zip.android.data.Photo

class RecordAlbumPhotoDetailFragment : Fragment() {
    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        return inflater.inflate(R.layout.fragment_record_album_photo_detail, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val toolbar: Toolbar = view.findViewById(R.id.photo_appbar)

        // 앨범명으로 appbar title 지정
        toolbar.title = arguments?.getString("albumTitle")

//        println("photoList: " + arguments?.getParcelableArrayList<Photo>("photoList"))

        val imageView : ImageView = view.findViewById(R.id.photo_image)

        val img : Int

        if(arguments?.getInt("photoImage") != null) img = arguments?.getInt("photoImage")!!
        else img = -1

        println("img: " + img)

        imageView.setImageResource(R.drawable.ex10)
    }
}