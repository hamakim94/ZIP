package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class FamilyMember(
    var id : Long,
    var name : String,
    var nickname : String,
    var profileImg : String?
): Parcelable
