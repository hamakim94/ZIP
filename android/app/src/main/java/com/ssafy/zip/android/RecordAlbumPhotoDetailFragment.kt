package com.ssafy.zip.android

import android.os.Bundle
import android.view.*
import android.widget.ImageView
import androidx.appcompat.widget.Toolbar
import androidx.fragment.app.Fragment
import androidx.viewpager2.widget.ViewPager2
import com.ssafy.zip.android.adapter.PhotoSlideAdapter
import com.ssafy.zip.android.data.Photo
import kotlin.properties.Delegates


class RecordAlbumPhotoDetailFragment : Fragment() {
    var imageList : ArrayList<Photo> = ArrayList() // 후에는 Uri로 바뀔듯
    private var position by Delegates.notNull<Int>() // 이미지 현재 위치
    private lateinit var viewPager : ViewPager2
    private lateinit var photoSlideAdapter: PhotoSlideAdapter

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
//        var view : View = inflater.inflate(R.layout.fragment_record_album_photo_detail, container, false)

        // Inflate the layout for this fragment
        return inflater.inflate(R.layout.fragment_record_album_photo_detail, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val toolbar: Toolbar = view.findViewById(R.id.photo_appbar)

        // 앨범명으로 appbar title 지정
        toolbar.title = arguments?.getString("albumTitle")

        imageList = arguments?.getParcelableArrayList<Photo>("photoList") as ArrayList<Photo>
        viewPager = view.findViewById(R.id.photo_viewpager)
        photoSlideAdapter = PhotoSlideAdapter(imageList)
        viewPager.adapter = photoSlideAdapter
        viewPager.orientation = ViewPager2.ORIENTATION_HORIZONTAL // 방향 설정
        viewPager.offscreenPageLimit = 5 // 관리할 페이지 수
        viewPager.registerOnPageChangeCallback(object : ViewPager2.OnPageChangeCallback() {
            // Paging 완료되면 호출
            override fun onPageSelected(position: Int) {
                super.onPageSelected(position)
                println("Page ${position+1}")
            }
        })

//        val imageView : ImageView = view.findViewById(R.id.photo_image)
//
//        arguments?.getInt("photoImage")?.let { imageView.setImageResource(it) }

        // list에서의 현재 이미지의 위치
        position = imageList.indexOfFirst{
            it.image == arguments?.getInt("photoImage")
        }
        viewPager.setCurrentItem(position, false)


        // 뒤로가기
        val backBtn : View = view.findViewById(R.id.back_btn)
        val forwardBtn : View = view.findViewById(R.id.forward_btn)

        backBtn.setOnClickListener{
            if(position > 0){
                position--
                // 이미지 보여주기
                viewPager.setCurrentItem(position, false)

//                imageView.setImageResource(imageList[position].image)
            }
        }

        forwardBtn.setOnClickListener{
            if(position < imageList.size-1){
                position++
                // 이미지 보여주기
                viewPager.setCurrentItem(position, false)

//                imageView.setImageResource(imageList[position].image)
            }
        }
    }
}