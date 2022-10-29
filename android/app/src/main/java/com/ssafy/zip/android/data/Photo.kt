package com.ssafy.zip.android.data

import android.os.Parcelable
import com.google.gson.annotations.SerializedName
import kotlinx.android.parcel.Parcelize
import java.util.*

@Parcelize
data class Photo (
    var id: Long,
//    var image: Int,
    var fileName: String,
    var reg: Date,
    @SerializedName("url")
    var url: String,
//    var url: Int,
    var albumId: Long,
    var userId: Long
) : Parcelable