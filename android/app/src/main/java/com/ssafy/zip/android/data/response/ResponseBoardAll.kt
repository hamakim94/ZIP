package com.ssafy.zip.android.data.response

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import kotlinx.parcelize.RawValue

@Parcelize
data class ResponseBoardAll(
    var category: Int,
    var data: @RawValue Any
):Parcelable
