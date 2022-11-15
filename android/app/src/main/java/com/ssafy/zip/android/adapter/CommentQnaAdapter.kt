package com.ssafy.zip.android.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.google.android.material.imageview.ShapeableImageView
import com.ssafy.zip.android.App
import com.ssafy.zip.android.DateUtil
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Comment

class CommentQnaAdapter(private val commentList: ArrayList<Comment>, id: Long?) :
    RecyclerView.Adapter<CommentQnaAdapter.CommentViewHolder>() {
    private val qnaLogId = id;

    class CommentViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val commentQnaUserNickname: TextView = itemView.findViewById(R.id.commentQnaUserNickname)
        val commentQnaReg: TextView = itemView.findViewById(R.id.commentQnaReg)
        val commentQnaContent: TextView = itemView.findViewById(R.id.commentQnaContent)
        val commentQnaProfileImage: ShapeableImageView =
            itemView.findViewById(R.id.commentQnaProfileImage)
//        val commentButton: ImageFilterButton = itemView.findViewById(R.id.commentButton)
//        val editCommentQnaContentContainer : TextInputLayout = itemView.findViewById( R.id.edit_comment_qna_content_container)
//        val editCommentQnaContent: TextInputEditText =
//            itemView.findViewById(R.id.edit_comment_qna_content)

        val editItem: Button = itemView.findViewById(R.id.edit_btn)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CommentViewHolder {
        val view =
            LayoutInflater.from(parent.context).inflate(R.layout.qna_comment_item, parent, false)
        return CommentViewHolder(view)
    }

    override fun onBindViewHolder(holder: CommentViewHolder, position: Int) {
        var userId = App.prefs.getString("userId", "").toLong()
        val currentItem = commentList[position]

//        holder.commentButton.setImageResource(R.drawable.ic_baseline_edit_24)
//        if (userId != null) {
//            if (currentItem.user.id != userId) {
//                holder.commentButton.setImageResource(0)
//            }
//        }
//        holder.commentButton.setOnClickListener {
//            holder.commentQnaContent.isGone = true
//            holder.editCommentQnaContent.isGone = false
//            holder.commentButton.isGone = true
//            holder.editCommentQnaContentContainer.isGone = false
//            holder.editItem.isGone = false
//        }
//        holder.editItem.setOnClickListener {
//            holder.commentQnaContent.isGone = false
//            holder.editCommentQnaContent.isGone = true
//            holder.commentButton.isGone = false
//            holder.editCommentQnaContentContainer.isGone = true
//            holder.editItem.isGone = true

            // id 이용해서 수정 가능하도록 해야함.. 좀만 이따 하자
//            CoroutineScope(Dispatchers.Main).launch {
//                val instance = BoardRepository.getInstance(Application())
//                var response = qnaLogId?.let { it1 ->
//                    RequestQnaAnswer(
//                        content = holder.editCommentQnaContent.toString(),
//                        qnaLogId = it1
//                    )
//                }?.let { it2 ->
//                    instance?.editQnaAnswer(
//                        it2
//                    )
//                }
//            }
//        }


        holder.commentQnaUserNickname.text = currentItem.user.nickname
        holder.commentQnaReg.text = DateUtil.txtDate(currentItem.reg)
        holder.commentQnaContent.text = currentItem.content
        if (currentItem.user.character == null) {
            holder.commentQnaProfileImage.setImageResource(R.drawable.ex)
        } else {
            Glide.with(holder.itemView).load(currentItem.user.character!!.img)
                .into(holder.itemView.findViewById(R.id.commentQnaProfileImage))
        }

//        holder.editCommentQnaContent.hint = holder.commentQnaContent.text
//        holder.editCommentQnaContent.setOnFocusChangeListener { _, hasFocus ->
//            if (hasFocus) {
//                holder.editCommentQnaContent.hint = ""
//            } else {
//                holder.editCommentQnaContent.hint = holder.commentQnaContent.text
//            }
//        }

    }

    override fun getItemCount(): Int {
        return commentList.size
    }


}
