package com.ssafy.zip.android.adapter

import android.content.Context
import android.os.Bundle
import android.util.TypedValue
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.navigation.findNavController
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.data.response.ResponseBoardAll


class BoardModelAdapter(private val adapterData: ArrayList<ResponseBoardAll>) :
    RecyclerView.Adapter<BoardModelAdapter.BoardModelAdapterViewHolder>() {


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
        // 게시글 바인딩 시켜야함
        holder.itemView.setOnClickListener {
            when (adapterData[position].data.javaClass.simpleName.toString()) {
                "Board" -> {
                    val bundle = Bundle()
                    bundle.putParcelable("Board", adapterData[position].data)
                    it.findNavController()
                        .navigate(R.id.action_recordFragment_to_recordBoardFragment2, bundle)
                }
                "Qna" -> {
                    val bundle = Bundle()
                    bundle.putParcelable("Qna", adapterData[position].data)
                    it.findNavController()
                        .navigate(R.id.action_recordFragment_to_recordQnaDetailFragment, bundle)
                }
                "Letter" -> {
                    val bundle = Bundle()
                    bundle.putParcelable("Letter", adapterData[position].data)
                    it.findNavController()
                        .navigate(R.id.action_recordFragment_to_recordLetterDetailFragment, bundle)
                }
            }
        }
    }

    override fun getItemCount(): Int = adapterData.size

    override fun getItemViewType(position: Int): Int {
        return adapterData[position].category
    }

    companion object {
        private const val TYPE_BOARD = 0
        private const val TYPE_QNA = 1
        private const val TYPE_LETTER = 2
    }

    class BoardModelAdapterViewHolder(itemView: View) :
        RecyclerView.ViewHolder(itemView) {

        private fun bindBoard(item: ResponseBoardAll) {
            var board: BoardModel.Board = item.data as BoardModel.Board
            if (board != null) {
                itemView.findViewById<ShapeableImageView>(R.id.profileImage)
                    .setImageResource(0)
                itemView.findViewById<TextView>(R.id.userNickname).text = board.user.nickname
                itemView.findViewById<TextView>(R.id.boardReg).text = board.reg.toString()
                //Glide 쓰기..
                if(board.image != null ) {
                    itemView.findViewById<ImageView>(R.id.boardImage).layoutParams.height = 800
                    Glide.with(itemView)
                        .load(board.image)
                        .into(itemView.findViewById<ImageView>(R.id.boardImage))
                }
                itemView.findViewById<TextView>(R.id.boardContent).text = board.content
                itemView.findViewById<TextView>(R.id.commentCnt).text = board.commentCnt.toString()
            }

        }

        private fun bindQna(item: ResponseBoardAll) {
            var qna: BoardModel.Qna = item.data as BoardModel.Qna
            if (qna != null) {
                itemView.findViewById<TextView>(R.id.qnaReg).text = qna.reg.toString()
                itemView.findViewById<TextView>(R.id.qnaContent).text = qna.question
                itemView.findViewById<TextView>(R.id.qnaCommentCount).text = "" + qna.answerCnt
            }

        }

        private fun bindLetter(item: ResponseBoardAll) {
            var letter: BoardModel.Letter? = item.data as? BoardModel.Letter
            if (letter != null) {
                itemView.findViewById<TextView>(R.id.letterTitle).text =
                    (letter.from.nickname + "에서" + letter.to.nickname + "에게 보내는 편지")
                itemView.findViewById<TextView>(R.id.letterReg).text = letter.reg.toString()
                itemView.findViewById<TextView>(R.id.letterContent).text = letter.content
            }

        }

        fun bind(boardModel: ResponseBoardAll) {
            when (boardModel.category) {
                0 -> bindBoard(boardModel)
                1 -> bindQna(boardModel)
                2 -> bindLetter(boardModel)
            }
        }


    }

}