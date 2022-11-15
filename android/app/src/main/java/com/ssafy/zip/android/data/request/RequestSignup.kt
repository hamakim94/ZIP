package com.ssafy.zip.android.data.request

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class RequestSignup(
    /*var characterId : Long,*/
    var email : String,
    var name: String,
    var nickname : String,
    var password : String
) :Parcelable
