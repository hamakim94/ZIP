package com.ssafy.zip.android.adapter

import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.navigation.findNavController
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.BoardModel

class BoardModelAdapter(private val adapterData: ArrayList<BoardModel>) :
    RecyclerView.Adapter<BoardModelAdapter.BoardModelAdapterViewHolder>() {

    class BoardModelViewHolder(itemView:View) : RecyclerView.ViewHolder(itemView){
        val profileImage : ImageView = itemView.findViewById(R.id.profileImage)
    }

    override fun onCreateViewHolder(
        parent: ViewGroup,
        viewType: Int
    ): BoardModelAdapterViewHolder {

        val layout = when (viewType) {
            TYPE_BOARD -> R.layout.board_item
            TYPE_QNA -> R.layout.qna_item
            TYPE_LETTER -> R.layout.letter_item
            else -> throw IllegalArgumentException("Invalid type")
        }

        val view = LayoutInflater
            .from(parent.context)
            .inflate(layout, parent, false)

        return BoardModelAdapterViewHolder(view)
    }


    override fun onBindViewHolder(
        holder: BoardModelAdapterViewHolder,
        position: Int
    ) {
        holder.bind(adapterData[position])
        val boardItem = adapterData[position]
        // 게시글 바인딩 시켜야함
        holder.itemView.setOnClickListener{
            if(adapterData[position].javaClass.simpleName.equals("Board")){
                val bundle = Bundle()
                bundle.putParcelable("Board", adapterData[position])
                it.findNavController().navigate(R.id.action_recordFragment_to_recordBoardFragment2, bundle)
            }
//            it.findNavController().navigate(R.id.action_recordFragment_to_recordBoardFragment2)
        }
//        itemView.findViewById<ShapeableImageView>(R.id.profileImage).setImageResource(item.userImage)
//        itemView.findViewById<TextView>(R.id.userNickname).text = item.userNickname
//        itemView.findViewById<TextView>(R.id.boardReg).text = item.boardReg
//        itemView.findViewById<ImageView>(R.id.boardImage).setImageResource(item.boardImage)
//        itemView.findViewById<TextView>(R.id.boardContent).text =  item.boardContent
//        itemView.findViewById<TextView>(R.id.commentCount).text = item.commentCount
//        holder.photoImage.setImageResource(photo.image)
//
//        holder.itemView.setOnClickListener{
//            // photo item 클릭했을 때 실행
//            val bundle = Bundle()
//            bundle.putLong("photoId", photo.id)
//            bundle.putInt("photoImage", photo.image)
//            bundle.putString("albumTitle", photo_onClick_interface.onClickPhoto()) // 사진 상세 페이지의 appbar에 넣기 위해서 데이터 전달
//            bundle.putParcelableArrayList("photoList", photoList) // Parcel에 객체를 write/read 하도록 만들어주는 인터페이스
//            it.findNavController().navigate(R.id.action_recordAlbumPicturesFragment2_to_recordAlbumPhotoDetailFragment2, bundle)
//        }

    }

    override fun getItemCount(): Int = adapterData.size

    override fun getItemViewType(position: Int): Int {
        return when (adapterData[position]) {
            is BoardModel.Board -> TYPE_BOARD
            is BoardModel.Qna -> TYPE_QNA
            is BoardModel.Letter -> TYPE_LETTER
            else -> throw IllegalArgumentException("Invalid type")
        }
    }

    fun setData(data: List<BoardModel>) {
        adapterData.apply {
            clear()
            addAll(data)
        }
    }

    companion object {
        private const val TYPE_BOARD = 0
        private const val TYPE_QNA = 1
        private const val TYPE_LETTER = 2
    }

    class BoardModelAdapterViewHolder(itemView : View) :
        RecyclerView.ViewHolder(itemView) {

        private fun bindBoard(item: BoardModel.Board) {
            itemView.findViewById<ShapeableImageView>(R.id.profileImage).setImageResource(item.userImage)
            itemView.findViewById<TextView>(R.id.userNickname).text = item.userNickname
            itemView.findViewById<TextView>(R.id.boardReg).text = item.boardReg
            itemView.findViewById<ImageView>(R.id.boardImage).setImageResource(item.boardImage)
            itemView.findViewById<TextView>(R.id.boardContent).text =  item.boardContent
            itemView.findViewById<TextView>(R.id.commentCount).text = item.commentCount

        }

        private fun bindQna(item: BoardModel.Qna) {
            itemView.findViewById<TextView>(R.id.qnaReg).text = item.qnaReg
            itemView.findViewById<TextView>(R.id.qnaContent).text = item.qnaContent
            itemView.findViewById<TextView>(R.id.qnaCommentCount).text = item.qnaCommentCount
        }

        private fun bindLetter(item: BoardModel.Letter) {
            itemView.findViewById<TextView>(R.id.letterTitle).text = item.letterTitle
            itemView.findViewById<TextView>(R.id.letterReg).text = item.letterReg
            itemView.findViewById<TextView>(R.id.letterContent).text = item.letterContent
        }

        fun bind(boardModel: BoardModel) {
            when (boardModel) {
                is BoardModel.Board -> bindBoard(boardModel)
                is BoardModel.Qna -> bindQna(boardModel)
                is BoardModel.Letter -> bindLetter(boardModel)
            }
        }


    }

}