package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.Date

@Parcelize
data class Comment(
    val content : String,
    val id : Long,
    val reg : Date,
    val user : User,
) : Parcelable


//{
//    "content": "string",
//    "id": 0,
//    "reg": "2022-11-01T01:58:44.477Z",
//    "user": {
//    "family": {
//        "code": 0,
//        "familyName": "string",
//        "id": 0,
//        "memberNum": 0,
//        "qnaId": 0,
//        "reg": "2022-11-01T01:58:44.477Z"
//    },
//    "hasFamily": true,
//    "id": 0,
//    "name": "string",
//    "nickname": "string",
//    "profileImg": "string"
//}
