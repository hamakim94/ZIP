package com.ssafy.zip.android.data.request

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class RequestFamilyroom(
    var familyName : String,
    var memberNum : Int
):Parcelable
