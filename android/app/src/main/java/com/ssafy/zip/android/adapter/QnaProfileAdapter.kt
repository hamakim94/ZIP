package com.ssafy.zip.android.adapter

import android.annotation.SuppressLint
import android.app.Application
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.fragment.app.FragmentManager
import androidx.fragment.app.viewModels
import androidx.navigation.findNavController
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.ssafy.zip.android.CustomDialog
import com.ssafy.zip.android.R
import com.ssafy.zip.android.data.Comment
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.QnaDetail
import com.ssafy.zip.android.repository.BoardRepository
import com.ssafy.zip.android.repository.HomeRepository
import com.ssafy.zip.android.viewmodel.QnaDetailViewModel
import de.hdodenhof.circleimageview.CircleImageView
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import okhttp3.MediaType
import okhttp3.RequestBody


class QnaProfileAdapter(
    private val homeList: ArrayList<FamilyMember>,
    private val viewModel: QnaDetailViewModel,
) : RecyclerView.Adapter<QnaProfileAdapter.QnaProfileViewHolder>() {

    class QnaProfileViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val homeImage: CircleImageView = itemView.findViewById(R.id.home_image)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): QnaProfileViewHolder {

        return QnaProfileViewHolder(
            LayoutInflater.from(parent.context)
                .inflate(R.layout.home_item, parent, false)
        )
    }

    @SuppressLint("ResourceAsColor")
    override fun onBindViewHolder(holder: QnaProfileViewHolder, position: Int) {
        var answered = false

        val homeImage = homeList[position]
        if (homeImage.profileImg == null) {
            holder.homeImage.setImageResource(R.drawable.ex)

        } else {
            Glide.with(holder.itemView)
                .load(homeImage.profileImg)
                .into(holder.homeImage)
        }
        holder.homeImage.borderWidth = 1
        holder.homeImage.borderColor = R.color.lightgray
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