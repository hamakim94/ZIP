package com.ssafy.zip.android

import android.app.Activity
import android.content.Context
import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.widget.Toolbar
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.ssafy.zip.android.data.Photo


class RecordAlbumPicturesFragment : Fragment(), photo_onClick_interface {
    private lateinit var recyclerView: RecyclerView
    private lateinit var photoList: ArrayList<Photo>
    private lateinit var photoAdapter: PhotoAdapter
    private lateinit var activity: MainActivity
    var imageList: ArrayList<Uri> = ArrayList()

    private val startForResult = registerForActivityResult(ActivityResultContracts.StartActivityForResult()){
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

        photoList = ArrayList()
        addDataToList()

        photoAdapter = PhotoAdapter(photoList, this)
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
        photoList.add(Photo(8, R.drawable.ex30))
        photoList.add(Photo(11, R.drawable.ex))
        photoList.add(Photo(12, R.drawable.ex2))
        photoList.add(Photo(13, R.drawable.ex3))
        photoList.add(Photo(14, R.drawable.ex4))
        photoList.add(Photo(15, R.drawable.ex5))
        photoList.add(Photo(16, R.drawable.ex6))
        photoList.add(Photo(17, R.drawable.ex7))
        photoList.add(Photo(21, R.drawable.ex))
        photoList.add(Photo(22, R.drawable.ex2))
        photoList.add(Photo(23, R.drawable.ex3))
        photoList.add(Photo(24, R.drawable.ex4))
        photoList.add(Photo(25, R.drawable.ex5))
        photoList.add(Photo(26, R.drawable.ex6))
        photoList.add(Photo(27, R.drawable.ex7))
        photoList.add(Photo(31, R.drawable.ex))
        photoList.add(Photo(32, R.drawable.ex2))
        photoList.add(Photo(33, R.drawable.ex3))
        photoList.add(Photo(34, R.drawable.ex4))
        photoList.add(Photo(35, R.drawable.ex5))
        photoList.add(Photo(36, R.drawable.ex6))
        photoList.add(Photo(37, R.drawable.ex7))
        photoList.add(Photo(41, R.drawable.ex))
        photoList.add(Photo(42, R.drawable.ex2))
        photoList.add(Photo(43, R.drawable.ex3))
        photoList.add(Photo(44, R.drawable.ex4))
        photoList.add(Photo(45, R.drawable.ex5))
        photoList.add(Photo(46, R.drawable.ex6))
        photoList.add(Photo(47, R.drawable.ex7))
        photoList.add(Photo(51, R.drawable.ex))
        photoList.add(Photo(52, R.drawable.ex2))
        photoList.add(Photo(53, R.drawable.ex3))
        photoList.add(Photo(54, R.drawable.ex4))
        photoList.add(Photo(55, R.drawable.ex5))
        photoList.add(Photo(56, R.drawable.ex6))
        photoList.add(Photo(57, R.drawable.ex7))
        photoList.add(Photo(61, R.drawable.ex))
        photoList.add(Photo(62, R.drawable.ex2))
        photoList.add(Photo(63, R.drawable.ex3))
        photoList.add(Photo(64, R.drawable.ex4))
        photoList.add(Photo(65, R.drawable.ex5))
        photoList.add(Photo(66, R.drawable.ex6))
        photoList.add(Photo(67, R.drawable.ex7))
    }

    // fragment에서 adapter에 data를 전달하기 위함
    override fun onClickPhoto(): String? {
        return arguments?.getString("albumTitle");
    }
}