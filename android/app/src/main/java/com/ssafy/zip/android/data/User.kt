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
    @SerializedName("profileImg")
    var character : Character
): Parcelable

