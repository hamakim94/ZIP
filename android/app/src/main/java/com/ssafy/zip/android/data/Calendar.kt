package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.time.LocalDate
import java.util.*

@Parcelize
data class Calendar(
    val content: String,
    val endDate: Date,
    val id: Long,
    val startDate: Date,
    val users: ArrayList<FamilyMember>

) : Parcelable
