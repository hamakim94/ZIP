package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class Missions(
    var letter: MissionModel.Letter,
    var qna: BoardModel.Qna
) : Parcelable