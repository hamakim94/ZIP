package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class BoardDetail(
    val board: BoardModel.Board,
    val comments: ArrayList<Comment>
) : Parcelable


