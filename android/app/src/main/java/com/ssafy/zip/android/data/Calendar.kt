package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.*

@Parcelize
data class Calendar(
    val content: String,
    val endDate: Date,   //Date
    val id: Long,
    val startDate: Date, //Date
    val user: ArrayList<User>

) : Parcelable
