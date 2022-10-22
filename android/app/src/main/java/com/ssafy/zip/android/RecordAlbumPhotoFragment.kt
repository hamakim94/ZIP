package com.ssafy.zip.android

import android.app.Notification.Action
import android.content.Context
import android.content.Intent
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.appcompat.widget.Toolbar
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Photo


class RecordAlbumPicturesFragment : Fragment() {
    private lateinit var recyclerView: RecyclerView
    private lateinit var photoList: ArrayList<Photo>
    private lateinit var photoAdapter: PhotoAdapter
    private lateinit var activity: MainActivity

    override fun onAttach(context: Context) {
        super.onAttach(context)

        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {

        return inflater.inflate(R.layout.fragment_record_album_photo, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        val toolbar: Toolbar = view.findViewById(R.id.album_appbar)

        // 앨범명으로 appbar title 지정
        toolbar.title = arguments?.getString("albumTitle")
        toolbar.setOnMenuItemClickListener{
            when(it.itemId) {
                R.id.add_album_btn -> {
                    println("add_album_btn")
//                    startActivity(Intent(context, SecondActivity::class.java))
                    true
                }
                else -> false
            }
        }

        // 사진 목록 보여주기
        recyclerView = view.findViewById(R.id.album_photo_recycler_view)
        recyclerView.setHasFixedSize(true)
        recyclerView.layoutManager = GridLayoutManager(activity, 4)

        photoList = ArrayList()
        addDataToList()

        photoAdapter = PhotoAdapter(photoList)
        recyclerView.adapter = photoAdapter
    }

    private fun addDataToList(){
        photoList.add(Photo(1, R.drawable.ex))
        photoList.add(Photo(2, R.drawable.ex2))
        photoList.add(Photo(3, R.drawable.ex3))
        photoList.add(Photo(4, R.drawable.ex4))
        photoList.add(Photo(5, R.drawable.ex5))
        photoList.add(Photo(6, R.drawable.ex6))
        photoList.add(Photo(7, R.drawable.ex7))
        photoList.add(Photo(1, R.drawable.ex))
        photoList.add(Photo(2, R.drawable.ex2))
        photoList.add(Photo(3, R.drawable.ex3))
        photoList.add(Photo(4, R.drawable.ex4))
        photoList.add(Photo(5, R.drawable.ex5))
        photoList.add(Photo(6, R.drawable.ex6))
        photoList.add(Photo(7, R.drawable.ex7))
        photoList.add(Photo(1, R.drawable.ex))
        photoList.add(Photo(2, R.drawable.ex2))
        photoList.add(Photo(3, R.drawable.ex3))
        photoList.add(Photo(4, R.drawable.ex4))
        photoList.add(Photo(5, R.drawable.ex5))
        photoList.add(Photo(6, R.drawable.ex6))
        photoList.add(Photo(7, R.drawable.ex7))
        photoList.add(Photo(1, R.drawable.ex))
        photoList.add(Photo(2, R.drawable.ex2))
        photoList.add(Photo(3, R.drawable.ex3))
        photoList.add(Photo(4, R.drawable.ex4))
        photoList.add(Photo(5, R.drawable.ex5))
        photoList.add(Photo(6, R.drawable.ex6))
        photoList.add(Photo(7, R.drawable.ex7))
        photoList.add(Photo(1, R.drawable.ex))
        photoList.add(Photo(2, R.drawable.ex2))
        photoList.add(Photo(3, R.drawable.ex3))
        photoList.add(Photo(4, R.drawable.ex4))
        photoList.add(Photo(5, R.drawable.ex5))
        photoList.add(Photo(6, R.drawable.ex6))
        photoList.add(Photo(7, R.drawable.ex7))
        photoList.add(Photo(1, R.drawable.ex))
        photoList.add(Photo(2, R.drawable.ex2))
        photoList.add(Photo(3, R.drawable.ex3))
        photoList.add(Photo(4, R.drawable.ex4))
        photoList.add(Photo(5, R.drawable.ex5))
        photoList.add(Photo(6, R.drawable.ex6))
        photoList.add(Photo(7, R.drawable.ex7))
        photoList.add(Photo(1, R.drawable.ex))
        photoList.add(Photo(2, R.drawable.ex2))
        photoList.add(Photo(3, R.drawable.ex3))
        photoList.add(Photo(4, R.drawable.ex4))
        photoList.add(Photo(5, R.drawable.ex5))
        photoList.add(Photo(6, R.drawable.ex6))
        photoList.add(Photo(7, R.drawable.ex7))
    }
}