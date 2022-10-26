package com.ssafy.zip.android

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class ResponseLoginData(
    val errorMessage : String,
):Parcelable
