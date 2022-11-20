package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.Date

@Parcelize
data class Notification (
    val id: Long,
    val message : String?,
    val link : String?,
    val image: String?,
    val isRead: Boolean,
    val reg : Date
) : Parcelable ;