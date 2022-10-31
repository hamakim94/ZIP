package com.ssafy.zip.android.data

import android.os.Parcel
import android.os.Parcelable
import android.view.inspector.IntFlagMapping
import kotlinx.parcelize.Parcelize
import java.util.Date

@Parcelize
open class BoardModel : Parcelable {


    //    var category : Int,
    @Parcelize
    data class Board(
        var id : Long,
        var familyId : Long,
        var user : User,
        var content : String?,
        var image : String?, // 추후 string
        var reg : Date,
        var commentCnt : Long
//        var userImage: Int,
//        var userNickname: String,
//        var boardReg: String,
//        var boardImage: Int,
//        var boardContent: String,
//        var commentCount: String,
    ) : BoardModel()

    @Parcelize
    data class Qna (
        var id : Long,
        var question: String,
        var reg : Date,
        var answerCnt : Long,

//        var qnaReg : String,
//        var qnaContent : String,
//        var qnaCommentCount : String,
    ) : BoardModel()

    @Parcelize
    data class Letter(
        var id : Long,
        var from : User,
        var to : User,
        var reg : Date,
        var isRead : Boolean,
        var content : String,
        var stationery : String,

//        var letterTitle : String,
//        var letterReg : String,
//        var letterContent : String,
//        var letterFrom : String,
//        var letterTo : String,
    ) : BoardModel()


}