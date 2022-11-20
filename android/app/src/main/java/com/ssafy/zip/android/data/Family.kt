package com.ssafy.zip.android.data

import android.os.Parcelable
import com.google.gson.annotations.SerializedName
import kotlinx.parcelize.Parcelize
import java.util.*

@Parcelize
data class Family(
    var code: Int,
    var familyName: String,
    var id: Int,
    var memberNum: Int,
    var qnaId: Int,
    var points : Int,
    var reg: Date,
    @SerializedName("simpleUserResponseDTOList")
    var familyList : ArrayList<FamilyMember>
):Parcelable
