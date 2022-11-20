package com.ssafy.zip.android.data.request

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class RequestQnaComment(
    var content: String,
    var qnaId: Long
) : Parcelable