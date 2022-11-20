package com.ssafy.zip.android

//import androidx.recyclerview.widget.LinearLayoutManager
//import androidx.recyclerview.widget.RecyclerView
import android.content.Context
import android.graphics.Point
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.appcompat.widget.Toolbar
import androidx.fragment.app.Fragment
import androidx.viewpager2.widget.ViewPager2
import com.ssafy.zip.android.adapter.PhotoSlideAdapter
import com.ssafy.zip.android.adapter.PhotoThumbnailAdapter
import com.ssafy.zip.android.data.Photo
import kotlin.properties.Delegates


class RecordAlbumPhotoDetailFragment : Fragment() {
    var imageList : ArrayList<Photo> = ArrayList() // 후에는 Uri로 바뀔듯
    private var position by Delegates.notNull<Int>() // 이미지 현재 위치
    private lateinit var viewPager : ViewPager2
    private lateinit var photoSlideAdapter: PhotoSlideAdapter
    private lateinit var photoThumbnailAdapter: PhotoThumbnailAdapter
//    private lateinit var recyclerView : RecyclerView
    private lateinit var activity: MainActivity
    private var width by Delegates.notNull<Int>()

    override fun onAttach(context: Context) {
        super.onAttach(context)

        activity = context as MainActivity

    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
//        var view : View = inflater.inflate(R.layout.fragment_record_album_photo_detail, container, false)

        // 디스플레이 가로 픽셀
        val display = activity.windowManager.defaultDisplay
        val size = Point()
        display.getRealSize(size)
        width = size.x

        // Inflate the layout for this fragment
        return inflater.inflate(R.layout.fragment_record_album_photo_detail, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val toolbar: Toolbar = view.findViewById(R.id.photo_appbar)

        // 앨범명으로 appbar title 지정
        toolbar.title = arguments?.getString("albumTitle")

        imageList = arguments?.getParcelableArrayList<Photo>("photoList") as ArrayList<Photo>
        photoSlideAdapter = PhotoSlideAdapter(imageList)
        photoThumbnailAdapter = PhotoThumbnailAdapter(imageList)

        position = arguments?.getString("photoImage")?.let { getPosition(it) }!!

        viewPager = view.findViewById(R.id.photo_viewpager)
        viewPager.adapter = photoSlideAdapter
        viewPager.orientation = ViewPager2.ORIENTATION_HORIZONTAL // 방향 설정
        viewPager.offscreenPageLimit = 1 // 관리할 페이지 수
        viewPager.registerOnPageChangeCallback(object : ViewPager2.OnPageChangeCallback() {
            // page 바뀔 때마다 호출
            override fun onPageSelected(position: Int) {
                super.onPageSelected(position)
//                recyclerView.scrollToPosition(position)
//                println("Page ${position+1}")
            }
        })
//        viewPager.setCurrentItem(position, false)

//        recyclerView = view.findViewById(R.id.photo_recycler_view)
//        recyclerView.setHasFixedSize(true)
//        recyclerView.adapter = photoThumbnailAdapter
//        recyclerView.layoutManager = LinearLayoutManager(context, LinearLayoutManager.HORIZONTAL, false)

        // list에서의 현재 이미지의 위치 업데이트
        arguments?.getString("photoImage")?.let { setPosition(it, false) }

//        val imageView : ImageView = view.findViewById(R.id.photo_image)
//
//        arguments?.getInt("photoImage")?.let { imageView.setImageResource(it) }


        // 뒤로가기
        val backBtn : View = view.findViewById(R.id.back_btn)
        val forwardBtn : View = view.findViewById(R.id.forward_btn)

        backBtn.setOnClickListener{
            if(position > 0){
                position--
                // 이미지 보여주기
//                setPosition(imageList[position].url, true)
                setPosition(imageList[position].url, true)


//                viewPager.setCurrentItem(position, true)
            }
        }

        forwardBtn.setOnClickListener{
            if(position < imageList.size-1){
                position++
                // 이미지 보여주기
                setPosition(imageList[position].url, true)
//                viewPager.setCurrentItem(position, true)
            }
        }

//        val fab: View = view.findViewById(R.id.download_fab)
//        fab.setOnClickListener { view ->
//
//            println("position: " + position)
//
//        }
    }

    inner class roomListAdapterToList {
        fun getPhoto(photo: Photo) {
            setPosition(photo.url, false)
        }

        fun getItemWidth(){

        }
    }

    private fun setPosition(image: String, smoothScroller : Boolean) {
        val position = getPosition(image)
        viewPager.setCurrentItem(position, smoothScroller)
//        recyclerView.scrollToPosition(position)
    }

    private fun getPosition(image: String): Int {
        return imageList.indexOfFirst{
            it.url == image
        }
    }

    private fun downloadPhoto(position : Int){

    }
//    // selectedPosition: Recyclerview adapter 를 통해 받아온 클릭된(선택된) 아이템의 position
//    private fun scrollSelectedItemToCenter(selectedPosition: Int) {
//        val layoutManager = recyclerView.layoutManager as? LinearLayoutManager
//
//        // 가운데로 스크롤할 아이템이 왼쪽으로부터 떨어진 거리.
//        // == 스크린너비/2 - 아이템의너비/2
//        val offset = (width / 2 - imageList[selectedPosition] / 2)
//
//        // [selectedPosition]번째 아이템을 왼쪽 가장자리에서 offset 만큼 떨어진 위치로 스크롤한다.
//        layoutManager?.scrollToPositionWithOffset(selectedPosition, offset)
//    }
}