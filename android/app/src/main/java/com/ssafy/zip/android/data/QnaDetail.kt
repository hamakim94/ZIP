package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class QnaDetail(
    val Id : Long,
    val answers : Comment,
    val question : String,

) : Parcelable
