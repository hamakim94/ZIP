package com.ssafy.zip.android.data
import android.os.Parcelable
import com.google.gson.annotations.SerializedName
import kotlinx.parcelize.Parcelize

@Parcelize
data class User(
    @SerializedName("familyResponseDTO")
    var family : Family,
    var hasFamily : Boolean,
    var id : Int,
    var name : String,
    var nickname: String,
    var profileImg : String
): Parcelable

