package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class Character(
    var id : Long,
    var image : String,
    var assetName : String,
):Parcelable
