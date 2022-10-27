package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class Family (
    val id: Long,
    val image: Int
): Parcelable
