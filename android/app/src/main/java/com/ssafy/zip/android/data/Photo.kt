package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.android.parcel.Parcelize

@Parcelize
data class Photo (
    val id: Long,
    val image: Int
) : Parcelable