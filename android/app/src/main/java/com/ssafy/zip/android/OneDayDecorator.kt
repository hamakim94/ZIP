package com.ssafy.zip.android

import android.graphics.Color
import android.graphics.Typeface
import android.text.style.ForegroundColorSpan
import android.text.style.RelativeSizeSpan
import android.text.style.StyleSpan
import com.prolificinteractive.materialcalendarview.CalendarDay
import com.prolificinteractive.materialcalendarview.DayViewDecorator
import com.prolificinteractive.materialcalendarview.DayViewFacade

class OneDayDecorator(
    private var date: CalendarDay) : DayViewDecorator {

    fun OneDayDecorator() {
        date = CalendarDay.today()
    }

    override fun shouldDecorate(day: CalendarDay): Boolean {
        return day.equals(date)
    }

    override fun decorate(view: DayViewFacade) {
        view.addSpan(RelativeSizeSpan(1.2f))
        view.addSpan(ForegroundColorSpan(Color.rgb(3, 218, 198)))
    }

    fun setDate(date:
                org.threeten.bp.LocalDate) {
        this.date = CalendarDay.from(date)
    }
}