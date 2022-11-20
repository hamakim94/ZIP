package com.ssafy.zip.android.data.request

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class RequestLoginData(
    var email : String,
    var password : String,
) : Parcelable
