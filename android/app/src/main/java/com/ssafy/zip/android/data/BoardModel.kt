package com.ssafy.zip.android.data

sealed class BoardModel {

    data class Board(
        var userImage: Int,
        var userNickname: String,
        var boardReg: String,
        var boardImage: Int,
        var boardContent: String,
        var commentCount: String,
    ) : BoardModel()

    data class Qna (
        var qnaReg : String,
        var qnaContent : String,
        var qnaCommentCount : String,
    ) : BoardModel()

    data class Letter(
        var letterTitle : String,
        var letterReg : String,
        var letterContent : String,
    ) : BoardModel()
}