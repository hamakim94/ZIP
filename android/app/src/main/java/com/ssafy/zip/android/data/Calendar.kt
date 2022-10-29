package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.*

@Parcelize
data class Calendar(
    val content: String,
    val endDate: Int,   //Date
    val id: Long,
    val startDate: Int, //Date
    val user: ArrayList<User>

) : Parcelable