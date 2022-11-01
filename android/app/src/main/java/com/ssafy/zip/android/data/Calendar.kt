package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.time.LocalDate
import java.util.*

@Parcelize
data class Calendar(
    val content: String,
    val endDate: LocalDate,   //Date
    val id: Int,
    val startDate: LocalDate, //Date
    val user: ArrayList<User>

) : Parcelable
