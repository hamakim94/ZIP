package com.ssafy.zip.android

import android.content.Context
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Album


class RecordAlbumFragment : Fragment() {
    private lateinit var recyclerView: RecyclerView
    private lateinit var albumList: ArrayList<Album>
    private lateinit var albumsAdapter: AlbumsAdapter
    private lateinit var activity: MainActivity

    companion object {
        fun newInstance() : RecordAlbumFragment = RecordAlbumFragment()
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
    }

    override fun onAttach(context: Context) {
        super.onAttach(context)

        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        return inflater.inflate(R.layout.fragment_record_album, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        recyclerView = view.findViewById(R.id.recycler_view)
        recyclerView.setHasFixedSize(true)
        recyclerView.layoutManager = GridLayoutManager(activity, 2)

        albumList = ArrayList()
        addDataToList()

        albumsAdapter = AlbumsAdapter(albumList)
        recyclerView.adapter = albumsAdapter
    }

    private fun addDataToList(){
        albumList.add(Album(1, R.drawable.ex, "괌 여행", 123))
        albumList.add(Album(2, R.drawable.ex2, "속초", 45))
        albumList.add(Album(3, R.drawable.ex3, "강", 38))
        albumList.add(Album(4, R.drawable.ex4, "북한산", 56))
        albumList.add(Album(5, R.drawable.ex5, "산", 6))
        albumList.add(Album(6, R.drawable.ex6, "쌒마이걸", 7708))
        albumList.add(Album(7, R.drawable.ex7, "나무", 4))
    }
}