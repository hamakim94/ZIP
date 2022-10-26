package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

sealed class BoardModel : Parcelable {

    @Parcelize
    data class Board(
        var userImage: Int,
        var userNickname: String,
        var boardReg: String,
        var boardImage: Int,
        var boardContent: String,
        var commentCount: String,
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
    ) : BoardModel()
}