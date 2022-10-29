package com.ssafy.zip.android.data

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
<<<<<<< HEAD

@Parcelize
data class Family (
    val id: Long,
    val image: Int
): Parcelable
=======
import java.util.*

@Parcelize
data class Family(
    var code: Int,
    var familyName: String,
    var id: Int,
    var memberNum: Int,
    var qnaId: Int,
    var reg: Date
) : Parcelable
>>>>>>> 9cc117dc25d74859e8aefca962f1cfecb8adf42b
