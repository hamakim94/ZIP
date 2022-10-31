package com.ssafy.zip.android.data

import com.google.gson.annotations.SerializedName

data class Album(
    val id: Long,
    @SerializedName("name")
    val title: String,
    @SerializedName("pictures")
    val photoList: ArrayList<Photo>
)