package com.ssafy.zip.android


import java.sql.Timestamp
import java.text.SimpleDateFormat
import java.time.LocalDateTime
import java.time.format.DateTimeFormatter
import java.util.Date

object DateUtil {

    const val SEC = 60
    const val MIN = 60
    const val HOUR = 24
    const val DAY = 30
    const val MONTH = 12

    /**
     * x초전, x분전, x시간 전m, x일 전, x개월전, x년전
     * @param 날짜
     * @return 분 표시
     */
    fun txtDate(tempDate: Date): String {
        val curTime = System.currentTimeMillis()
        val regTime: Long = tempDate.time
        var diffTime = (curTime - regTime) / 1000 //+ 32400
        var msg: String? = null
        if (diffTime < SEC) {
            msg = "방금 전"
        } else if (SEC.let { diffTime /= it; diffTime } < MIN) {
            msg = diffTime.toString() + "분 전"
        } else if (MIN.let { diffTime /= it; diffTime } < HOUR) {
            msg = diffTime.toString() + "시간 전"
        } else if (HOUR.let { diffTime /= it; diffTime } < DAY) {
            msg = diffTime.toString() + "일 전"
        } else if (DAY.let { diffTime /= it; diffTime } < MONTH) {
            msg = diffTime.toString() + "개월 전"
        } else {
            val sdf = SimpleDateFormat("yyyy")
            val curYear: String = sdf.format(curTime)
            val passYear: String = sdf.format(tempDate)
            val diffYear = curYear.toInt() - passYear.toInt()
            msg = diffYear.toString() + "년 전"
        }
        return msg
    }

    fun getRegDate(tempDate : Date) : String{
        val format = SimpleDateFormat("yyyy/MM/dd (E)")
        return format.format(tempDate)
    }
}