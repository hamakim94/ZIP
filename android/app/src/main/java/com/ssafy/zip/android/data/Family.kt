package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.*

@Parcelize
data class Family(
    var code: Int,
    var familyName: String,
    var id: Int,
    var memberNum: Int,
    var qnaId: Int,
    var reg: Date
) : Parcelable
