package com.ssafy.zip.android.data

import android.os.Parcelable
import com.google.gson.annotations.SerializedName
import kotlinx.parcelize.Parcelize

@Parcelize
data class Character (
    val id : Long,
    @SerializedName("image")
    val img : String,
    @SerializedName("assetName")
    val asset : String
) : Parcelable