package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class Comment(
    val commentUser: String,
    val commentReg: String,
    val commentContent: String,
) : Parcelable


