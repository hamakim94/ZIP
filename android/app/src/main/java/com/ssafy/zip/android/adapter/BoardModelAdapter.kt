package com.ssafy.zip.android.adapter

import android.os.Bundle
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
import com.ssafy.zip.android.data.response.ResponseBoardAll

class BoardModelAdapter(private val adapterData: ArrayList<ResponseBoardAll>) :
    RecyclerView.Adapter<BoardModelAdapter.BoardModelAdapterViewHolder>() {

    class BoardModelViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val profileImage: ImageView = itemView.findViewById(R.id.profileImage)
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
        holder.itemView.setOnClickListener {
            if (adapterData[position].category == 0) {
                val bundle = Bundle()
                bundle.putParcelable("Board", adapterData[position])
                it.findNavController()
                    .navigate(R.id.action_recordFragment_to_recordBoardFragment2, bundle)
            } else if (adapterData[position].category == 1) {
                val bundle = Bundle()
                bundle.putParcelable("Qna", adapterData[position])
                it.findNavController()
                    .navigate(R.id.action_recordFragment_to_recordQnaDetailFragment, bundle)
            } else if (adapterData[position].category == 2){
                val bundle = Bundle()
                bundle.putParcelable("Letter", adapterData[position])
                it.findNavController().navigate(R.id.action_recordFragment_to_recordLetterDetailFragment, bundle)
            }
        }
    }

    override fun getItemCount(): Int = adapterData.size

    override fun getItemViewType(position: Int): Int {
        return adapterData[position].category
    }

    fun setData(data: List<ResponseBoardAll>) {
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

    class BoardModelAdapterViewHolder(itemView: View) :
        RecyclerView.ViewHolder(itemView) {

        private fun bindBoard(item: ResponseBoardAll) {
            itemView.findViewById<ShapeableImageView>(R.id.profileImage)
                .setImageResource(0)
            itemView.findViewById<TextView>(R.id.userNickname).text = item.user.nickname
            itemView.findViewById<TextView>(R.id.boardReg).text = item.reg
            itemView.findViewById<ImageView>(R.id.boardImage).setImageResource(0)
            itemView.findViewById<TextView>(R.id.boardContent).text = item.content
//            itemView.findViewById<TextView>(R.id.commentCount).text = item.

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

        fun bind(boardModel: ResponseBoardAll) {
            if(boardModel.category == 0 ){
                bindBoard(boardModel)
            } else if (boardModel.category == 1){
                bindQna(boardModel)
            } else{
                bindLetter(boardModel)
            }
//            when (boardModel.category) {
//                is 0 -> bindBoard(boardModel)
//                is 1 -> bindQna(boardModel)
//                is 2 -> bindLetter(boardModel)
//            }
        }


    }

}