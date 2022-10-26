package com.ssafy.zip.android.data
import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class Member(
    val id: Long,
    val name: String,
    val family: String,
    val nickname: String,
    val image: Int
): Parcelable

