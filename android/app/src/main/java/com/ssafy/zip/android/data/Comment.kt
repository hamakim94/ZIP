package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.Date

@Parcelize
data class Comment(
    val content : String,
    val id : Long,
    val reg : Date,
    val user : User,
) : Parcelable
