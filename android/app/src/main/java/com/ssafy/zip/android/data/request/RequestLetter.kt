package com.ssafy.zip.android.data.request

import android.os.Parcelable
import kotlinx.parcelize.Parcelize


@Parcelize
data class RequestLetter(
    var content: String,
    var stationery: String,
    var toUserId: Long
) : Parcelable