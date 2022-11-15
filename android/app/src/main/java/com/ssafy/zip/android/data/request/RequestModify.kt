package com.ssafy.zip.android.data.request

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class RequestModify(
    var characterId: Long,
    var familyName: String,
    var nickname: String
):Parcelable
