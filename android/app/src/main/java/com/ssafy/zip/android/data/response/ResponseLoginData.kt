package com.ssafy.zip.android.data.response

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.*

@Parcelize
data class ResponseLoginData(
    var familyResponseDTO : FamilyResponseDTO,
    var hasFamily : Boolean,
    var id : Int,
    var name : String,
    var nickname: String,
    var profileImg : String
):Parcelable

@Parcelize
data class FamilyResponseDTO(
    var code : Int,
    var familyName: String,
    var id : Int,
    var memberNum : Int,
    var qnaId : Int,
    var reg : Date
):Parcelable
