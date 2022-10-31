package com.ssafy.zip.android.data
import android.os.Parcelable
import com.google.gson.annotations.SerializedName
import kotlinx.parcelize.Parcelize

@Parcelize
data class User(
    @SerializedName("family")
    var userFamily : UserFamily,
    var hasFamily : Boolean,
    var id : Long,
    var name : String,
    var nickname: String,
    var profileImg : String? // 추후 수정?
): Parcelable

