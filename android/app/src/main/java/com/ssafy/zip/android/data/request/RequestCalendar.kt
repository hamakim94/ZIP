package com.ssafy.zip.android.data.request

import android.os.Parcelable
import kotlinx.parcelize.Parcelize
import java.time.LocalDate
import java.time.LocalDateTime
import kotlin.collections.ArrayList

@Parcelize
data class RequestCalendar(
    var content: String,
    var endDate: String,
    var startDate: String,
    var userIds: ArrayList<Long>
    ) : Parcelable
