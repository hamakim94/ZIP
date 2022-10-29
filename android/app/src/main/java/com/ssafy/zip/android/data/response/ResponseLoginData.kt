package com.ssafy.zip.android.data.response

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class ResponseLoginData(
    var familyResponseDTO : ResponseFamily,
    var hasFamily : Boolean,
    var id : Int,
    var name : String,
    var nickname: String,
    var profileImg : String
):Parcelable


