package com.ssafy.zip.android.data.response

import android.os.Parcelable
import com.ssafy.zip.android.data.BoardModel
import kotlinx.parcelize.Parcelize
import kotlinx.parcelize.RawValue

@Parcelize
data class ResponseBoardAll(
    var category: Int,
    var data:  BoardModel
):Parcelable
