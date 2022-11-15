package com.ssafy.zip.android.data.request

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class RequestQnaAnswer(
    var content: String,
    var qnaLogId: Long
) : Parcelable