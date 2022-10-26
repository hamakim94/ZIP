package com.ssafy.zip.android

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class RequestLoginData(
    val email : String,
    val password : String,
) : Parcelable
