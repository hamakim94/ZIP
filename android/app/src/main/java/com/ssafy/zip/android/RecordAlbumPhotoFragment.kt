package com.ssafy.zip.android

import android.app.Activity
import android.app.Application
import android.content.Context
import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.widget.Toolbar
import androidx.databinding.DataBindingUtil
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Album
import com.ssafy.zip.android.data.Photo
import com.ssafy.zip.android.databinding.FragmentRecordAlbumPhotoBinding
import com.ssafy.zip.android.viewmodel.AlbumPhotoViewModel
import java.util.*
import kotlin.collections.ArrayList


class RecordAlbumPhotoFragment : Fragment(), photo_onClick_interface {
    private lateinit var recyclerView: RecyclerView
    private lateinit var photoAdapter: PhotoAdapter
    private lateinit var activity: MainActivity
    private val viewModel by viewModels<AlbumPhotoViewModel>{ AlbumPhotoViewModel.Factory(Application(), arguments?.getLong("albumId"))}

    private val startForResult = registerForActivityResult(ActivityResultContracts.StartActivityForResult()){
        var imageList: ArrayList<Uri> = ArrayList() // 업로드할 사진 uri list
        if(it.resultCode == Activity.RESULT_OK) {
            if (it.data!!.clipData != null) { // 멀티 이미지
                val count = it.data!!.clipData!!.itemCount // 이미지 개수

                for(index in 0 until count){
                    val imageUri = it.data!!.clipData!!.getItemAt(index).uri // 이미지 담기
                    imageList.add(imageUri) // 이미지 추가
                }
            } else { // 싱글 이미지
                val imageUri = it.data!!.data
                imageList.add(imageUri!!)
            }

            viewModel.addPhotos(imageList, arguments?.getLong("albumId"), null, activity)
        }
    }

    override fun onAttach(context: Context) {
        super.onAttach(context)

        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // xml에서 layout, data 설정해야됨
        val binding: FragmentRecordAlbumPhotoBinding = DataBindingUtil.inflate(
            inflater, R.layout.fragment_record_album_photo, container, false
        )
        binding.viewmodel = viewModel
        val view = binding.root

        return view
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        val toolbar: Toolbar = view.findViewById(R.id.album_appbar)

        // 앨범명으로 appbar title 지정
        toolbar.title = arguments?.getString("albumTitle")
        toolbar.setOnMenuItemClickListener{
            when(it.itemId) {
                R.id.add_album_btn -> {
                    // 갤러리 호출
                    val photoPickerIntent = Intent(Intent.ACTION_PICK)
                    photoPickerIntent.data = android.provider.MediaStore.Images.Media.EXTERNAL_CONTENT_URI
                    photoPickerIntent.type = "image/*"
                    // 다중 선택 가능
                    photoPickerIntent.putExtra(Intent.EXTRA_ALLOW_MULTIPLE, true)
                    startForResult.launch(photoPickerIntent)
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

//        photoList = ArrayList()
//        addDataToList()
        observeViewModel(this)

//        photoAdapter = PhotoAdapter(photoList, this)
//        recyclerView.adapter = photoAdapter
    }

//    private fun addDataToList(){
////        photoList.add(Photo(1, "사진1", Date(), null, R.drawable.ex, 1, 5))
////        photoList.add(Photo(2, "사진2", Date(), null, R.drawable.ex, 1, 5))
////        photoList.add(Photo(3, "사진3", Date(), null, R.drawable.ex, 1, 5))
////        photoList.add(Photo(4, "사진4", Date(), null, R.drawable.ex2, 2, 5))
////        photoList.add(Photo(5, "사진5", Date(), null, R.drawable.ex2, 2, 5))
////        photoList.add(Photo(6, "사진6", Date(), null, R.drawable.ex2, 2, 5))
////        photoList.add(Photo(7, "사진7", Date(), null, R.drawable.ex3, 3, 5))
////        photoList.add(Photo(8, "사진8", Date(), null, R.drawable.ex3, 3, 5))
////        photoList.add(Photo(9, "사진9", Date(), null, R.drawable.ex4, 4, 5))
//    }

    // fragment에서 adapter에 data를 전달하기 위함
    override fun onClickPhoto(): String? {
        return arguments?.getString("albumTitle");
    }

    fun observeViewModel(photo_onClick_interface : photo_onClick_interface) {
        val observer = object : Observer<Album> {
            override fun onChanged(t: Album?) {
                photoAdapter = t?.let { it -> PhotoAdapter(it.photoList, photo_onClick_interface) }!!
                recyclerView.adapter = photoAdapter
            }
        }

        viewModel.album.observe(viewLifecycleOwner, observer)
    }
}