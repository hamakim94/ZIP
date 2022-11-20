package com.ssafy.zip.android.adapter

import android.annotation.SuppressLint
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.viewmodel.QnaDetailViewModel
import de.hdodenhof.circleimageview.CircleImageView


class QnaProfileAdapter(
    private val homeList: ArrayList<FamilyMember>,
    private val viewModel: QnaDetailViewModel,
) : RecyclerView.Adapter<QnaProfileAdapter.QnaProfileViewHolder>() {

    class QnaProfileViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val homeImage: CircleImageView = itemView.findViewById(R.id.home_image2)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): QnaProfileViewHolder {
        return QnaProfileViewHolder(
            LayoutInflater.from(parent.context)
                .inflate(R.layout.qna_participate_item, parent, false)
        )
    }

    @SuppressLint("ResourceAsColor")
    override fun onBindViewHolder(holder: QnaProfileViewHolder, position: Int) {
        var answered = false

        val homeImage = homeList[position]
        if (homeImage.character == null) {
            holder.homeImage.setImageResource(R.drawable.ex)

        } else {
            Glide.with(holder.itemView)
                .load(homeImage.character!!.img)
                .into(holder.homeImage)
        }
        holder.homeImage.borderWidth = 1
        holder.homeImage.borderColor = R.color.lightgray
        /*holder.homeText.text = homeImage.nickname*/

        // 조건넣기
        var answerList = viewModel.qnaDetail.value?.answers
        var familyMemberId = homeList[position].id
        if (answerList != null) {
            var newList = answerList.filter { it.user.id == familyMemberId.toLong() }
            if (!newList.isEmpty()) {
                answered = true
            }
        }
        if (!answered) {
            holder.homeImage.setAlpha(0.4f)
            holder.homeImage.borderWidth = 0
        }

    }

    override fun getItemCount(): Int {
        return homeList.size
    }


}