package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.Date

@Parcelize
data class QnaDetail(
    val Id : Long,
    val answers : ArrayList<Comment>,
    val question : String,
    val reg: Date,

) : Parcelable
