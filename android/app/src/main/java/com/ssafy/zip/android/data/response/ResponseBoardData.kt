package com.ssafy.zip.android.data.response

import android.os.Parcelable
import com.ssafy.zip.android.data.User
import kotlinx.parcelize.Parcelize

@Parcelize
data class ResponseBoardData(
    var id : Long,
    var familyId : Long,
    var user : User,
    var content : String,
    var image : String?, // 추후 string
    var reg : String
) : Parcelable
