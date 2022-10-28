package com.ssafy.zip.android.data.response

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.*

@Parcelize
data class ResponseFamily(
    var code : Int,
    var familyName: String,
    var id : Int,
    var memberNum : Int,
    var qnaId : Int,
    var reg : Date
): Parcelable
