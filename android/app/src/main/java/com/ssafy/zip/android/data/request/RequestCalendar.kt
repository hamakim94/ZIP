package com.ssafy.zip.android.data.request

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.util.*
import kotlin.collections.ArrayList

@Parcelize
data class RequestCalendar(
    var content : String,
    var endDate : Date,
    var startDate: Date,
    var userIds: ArrayList<Long>
    ) : Parcelable
