package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.*

sealed class MissionModel : Parcelable{

    @Parcelize
    data class Letter(
        var isSent : Boolean,
        var today : Int,
        var user: User
    ) : MissionModel()

    @Parcelize
    data class Qna (
        var answerCnt : Int,
        var id : Int,
        var question : String,
        var reg : Date
    ) : MissionModel()


}
