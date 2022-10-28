package com.ssafy.zip.android.data

import android.os.Parcelable
import com.google.gson.annotations.SerializedName
import com.ssafy.zip.android.data.response.ResponseBoardAll
import kotlinx.parcelize.Parcelize

@Parcelize
data class BoardTest(
    @SerializedName("")val boardList : List<ResponseBoardAll>
    )
    :Parcelable
