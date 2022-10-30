package com.ssafy.zip.android.data.request

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class RequestPhoto(
    var albumId: Long?,
    var pictureId: Long?
//    "albumId": 0,
//    "pictureId": 0,
//    "userId": 0
) : Parcelable
