package com.ssafy.zip.android.data

import android.os.Parcelable
import android.view.inspector.IntFlagMapping
import kotlinx.parcelize.Parcelize
import java.util.Date

sealed class BoardModel : Parcelable {
//    var category : Int,
    @Parcelize
    data class Board(
        var id : Long,
        var familyId : Long,
        var user : User,
        var content : String,
        var image : String?, // 추후 string
        var reg : String
//        var userImage: Int,
//        var userNickname: String,
//        var boardReg: String,
//        var boardImage: Int,
//        var boardContent: String,
//        var commentCount: String,
    ) : BoardModel()

    @Parcelize
    data class Qna (
        var qnaReg : String,
        var qnaContent : String,
        var qnaCommentCount : String,
    ) : BoardModel()

    @Parcelize
    data class Letter(
        var letterTitle : String,
        var letterReg : String,
        var letterContent : String,
        var letterFrom : String,
        var letterTo : String,
    ) : BoardModel()
}