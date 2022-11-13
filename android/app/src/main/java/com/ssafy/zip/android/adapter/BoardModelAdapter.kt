package com.ssafy.zip.android.adapter


import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.constraintlayout.widget.ConstraintLayout
import androidx.core.view.isGone
import androidx.core.view.setPadding
import androidx.navigation.findNavController
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.DateUtil
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.BoardModel
import com.ssafy.zip.android.data.response.ResponseBoardAll
import com.ssafy.zip.android.viewmodel.BoardViewModel
import de.hdodenhof.circleimageview.CircleImageView


class BoardModelAdapter(
    private val adapterData: ArrayList<ResponseBoardAll>, private val viewModel: BoardViewModel
) : RecyclerView.Adapter<BoardModelAdapter.BoardModelAdapterViewHolder>() {

    override fun onCreateViewHolder(
        parent: ViewGroup, viewType: Int
    ): BoardModelAdapterViewHolder {
        val layout = when (viewType) {
            TYPE_BOARD -> R.layout.board_item
            TYPE_QNA -> R.layout.qna_item
            TYPE_LETTER -> R.layout.letter_item
            else -> throw IllegalArgumentException("Invalid type")
        }

        val view = LayoutInflater.from(parent.context).inflate(layout, parent, false)

        return BoardModelAdapterViewHolder(view)
    }


    override fun onBindViewHolder(
        holder: BoardModelAdapterViewHolder, position: Int
    ) {
        holder.bind(adapterData[position], viewModel)
        // 게시글 바인딩 시켜야함
        holder.itemView.setOnClickListener {
            when (adapterData[position].data.javaClass.simpleName.toString()) {
                "Board" -> {
                    val bundle = Bundle()
                    bundle.putParcelable("Board", adapterData[position].data)
                    val data = adapterData[position].data as BoardModel.Board
                    bundle.putLong("id", data.id)
                    it.findNavController()
                        .navigate(R.id.action_recordFragment_to_recordBoardFragment2, bundle)
                }
                "Qna" -> {
                    val bundle = Bundle()
                    val data = adapterData[position].data as BoardModel.Qna
                    bundle.putLong("id", data.id)
                    it.findNavController()
                        .navigate(R.id.action_recordFragment_to_recordQnaDetailFragment, bundle)
                }
                "Letter" -> {
                    val bundle = Bundle()
                    viewModel.userData.value?.let { it1 -> bundle.putLong("userId", it1.id) }
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

    class BoardModelAdapterViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {

        private fun bindBoard(item: ResponseBoardAll) {
            var board: BoardModel.Board = item.data as BoardModel.Board
            if (board != null) {
                if (board.user.profileImg == null) {
                    itemView.findViewById<ShapeableImageView>(R.id.profileImage)
                        .setImageResource(R.drawable.ex)
                } else {
                    Glide.with(itemView).load(board.user.profileImg)
                        .into(itemView.findViewById<ShapeableImageView>(R.id.profileImage))
                }
                itemView.findViewById<TextView>(R.id.userNickname).text = board.user.nickname
                itemView.findViewById<TextView>(R.id.boardReg).text = DateUtil.getRegDate(board.reg)
                //Glide 쓰기..
                if (board.image != null) {
                    itemView.findViewById<ImageView>(R.id.boardImage)
                        .setBackgroundResource(R.drawable.layout_vertical)
                    itemView.findViewById<ImageView>(R.id.boardImage).setPadding(4)
                    Glide.with(itemView).load(board.image)
                        .into(itemView.findViewById<ImageView>(R.id.boardImage))
                }
                itemView.findViewById<TextView>(R.id.boardContent).text = board.content
                itemView.findViewById<TextView>(R.id.commentCnt).text = board.commentCnt.toString()
            }

        }

        private fun bindQna(item: ResponseBoardAll) {
            var qna: BoardModel.Qna = item.data as BoardModel.Qna
            if (qna != null) {
                itemView.findViewById<TextView>(R.id.qnaReg).text = DateUtil.getRegDate(qna.reg)
                itemView.findViewById<TextView>(R.id.qnaContent).text = qna.question
                itemView.findViewById<TextView>(R.id.qnaCommentCount).text = "" + qna.answerCnt
            }

        }

        private fun bindLetter(item: ResponseBoardAll, viewModel: BoardViewModel) {

            var letter: BoardModel.Letter? = item.data as? BoardModel.Letter
            var userId = viewModel.userData.value?.id
            if (userId != null) {
                // 1. 보낸 편지인지, 그냥 mark,email 쓸거
                if (userId == letter?.from?.id) {
                    itemView.findViewById<TextView>(R.id.letterTitle).text =
                        (letter.to.nickname + "에게 쓴 편지")
                    itemView.findViewById<TextView>(R.id.letterReg).text =
                        DateUtil.getRegDate(letter.reg)
                    itemView.findViewById<CircleImageView>(R.id.mailIcon)
                        .setImageResource(R.drawable.ic_outline_email_24)
                    itemView.findViewById<TextView>(R.id.letterContent).text =
                        if (letter.content.length > 8) letter.content.substring(0 until 8) + "..." else letter.content


                }// 2. 받은 편지인지
                else {
                    // 2-1. 읽었는지(isRead == true?) mark_email_read
                    if (letter?.isRead == true) {
                        itemView.findViewById<TextView>(R.id.letterTitle).text =
                            (letter.from.nickname + "에게서 온 편지")
                        itemView.findViewById<TextView>(R.id.letterReg).text =
                            DateUtil.getRegDate(letter.reg)
                        itemView.findViewById<CircleImageView>(R.id.mailIcon)
                            .setImageResource(R.drawable.ic_outline_mark_email_read_24)
                        itemView.findViewById<TextView>(R.id.letterContent).text =
                            if (letter.content.length > 8) letter.content.substring(0 until 8) + "..." else letter.content

                    }
                    // 2-2. 안 읽었는지 mark_email_unread
                    else {
                        if (letter != null) {
                            itemView.findViewById<TextView>(R.id.letterTitle).text =
                                (letter.from.nickname + "에게서 온 편지")
                            itemView.findViewById<TextView>(R.id.letterReg).text =
                                DateUtil.getRegDate(letter.reg)
                            itemView.findViewById<TextView>(R.id.letterContent).isGone = true
                        }

                        itemView.findViewById<CircleImageView>(R.id.mailIcon)
                            .setImageResource(R.drawable.ic_outline_mark_email_unread_24)
                        itemView.findViewById<TextView>(R.id.letterContent).text = letter?.content

                    }

                }
            }


        }

        fun bind(boardModel: ResponseBoardAll, viewModel: BoardViewModel) {
            when (boardModel.category) {
                0 -> bindBoard(boardModel)
                1 -> bindQna(boardModel)
                2 -> bindLetter(boardModel, viewModel)
            }
        }


    }

}