package com.ssafy.zip.android.data.response

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.*

@Parcelize
data class ResponseFamilyroom(
    var code : Int,
    var familyName : String,
    var id : Int,
    var qnaId : Int,
    var reg : Date
):Parcelable
