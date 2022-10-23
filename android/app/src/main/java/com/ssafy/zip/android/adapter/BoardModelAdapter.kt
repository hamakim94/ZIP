package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.BoardModel

class BoardModelAdapter :
    RecyclerView.Adapter<BoardModelAdapter.BoardModelAdapterViewHolder>() {
    private val adapterData = mutableListOf<BoardModel>()

    override fun onCreateViewHolder(
        parent: ViewGroup,
        viewType: Int
    ): BoardModelAdapterViewHolder {

        val layout = when (viewType) {
            TYPE_BOARD -> R.layout.board_item
            TYPE_QNA -> R.layout.quiz_item
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