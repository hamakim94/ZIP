package com.ssafy.zip.android

import android.content.Context
import android.content.Intent
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.google.android.material.textfield.TextInputLayout
import com.ssafy.zip.android.data.Album


class RecordAlbumFragment : Fragment() {
    private lateinit var recyclerView: RecyclerView
    private lateinit var albumList: ArrayList<Album>
    private lateinit var albumAdapter: AlbumAdapter
    private lateinit var activity: MainActivity
    private lateinit var customAlertDialogView : View
    private lateinit var albumTextField : TextInputLayout
//    var imageList: ArrayList<Uri> = ArrayList()

//    private val startForResult = registerForActivityResult(ActivityResultContracts.StartActivityForResult()){
//        if(it.resultCode == Activity.RESULT_OK) {
//            if (it.data!!.clipData != null) { // 멀티 이미지
//                val count = it.data!!.clipData!!.itemCount // 이미지 개수
//
//                for(index in 0 until count){
//                    val imageUri = it.data!!.clipData!!.getItemAt(index).uri // 이미지 담기
//                    imageList.add(imageUri) // 이미지 추가
//                }
//            } else { // 싱글 이미지
//                val imageUri = it.data!!.data
//                imageList.add(imageUri!!)
//            }
//        }
//    }

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

        // 앨범 목록 보여주기
        recyclerView = view.findViewById(R.id.album_recycler_view)
        recyclerView.setHasFixedSize(true)
        recyclerView.layoutManager = GridLayoutManager(activity, 2)

        albumList = ArrayList()
        addDataToList()

        albumAdapter = AlbumAdapter(albumList)
        recyclerView.adapter = albumAdapter

        // 앨범 추가 버튼 눌렀을 때
        val fab: View = view.findViewById(R.id.add_album_fab)
        fab.setOnClickListener { view ->
            customAlertDialogView = LayoutInflater.from(activity)
                .inflate(R.layout.dialog_add_album, null, false)

            albumTextField = customAlertDialogView.findViewById(R.id.album_text_field)

            MaterialAlertDialogBuilder(activity)
                .setView(customAlertDialogView)
                .setTitle(resources.getString(R.string.new_album))
                .setMessage(R.string.add_album_msg)
                .setPositiveButton(resources.getString(R.string.confirm)) { dialog, which ->
                    val albumTitle = albumTextField.editText?.text.toString()

                    // 확인 버튼 눌렀을 때 할 일
                    // 앨범 생성



                    // 앨범 생성 후, 갤러리에서 사진 다중 선택
                    // 갤러리 호출
//                    val photoPickerIntent = Intent(Intent.ACTION_PICK)
//                    photoPickerIntent.type = "image/*"
//                    // 다중 선택 가능
//                    photoPickerIntent.putExtra(Intent.EXTRA_ALLOW_MULTIPLE, true)
//                    startForResult.launch(photoPickerIntent)

                    dialog.dismiss()
                }
                .setNegativeButton(resources.getString(R.string.cancel)) { dialog, _ ->
                    dialog.dismiss()
                }
                .show()
        }
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)


    }

    private fun addDataToList(){
        albumList.add(Album(1, R.drawable.ex, "괌 여행", 123))
        albumList.add(Album(2, R.drawable.ex2, "속초", 45))
        albumList.add(Album(3, R.drawable.ex3, "강", 38))
        albumList.add(Album(4, R.drawable.ex4, "북한산", 56))
    }
}