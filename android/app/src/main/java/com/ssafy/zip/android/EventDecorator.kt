package com.ssafy.zip.android

import android.content.Context
import android.graphics.Color
import com.prolificinteractive.materialcalendarview.CalendarDay
import com.prolificinteractive.materialcalendarview.DayViewDecorator
import com.prolificinteractive.materialcalendarview.DayViewFacade

class EventDecorator(
    private val context: Context,
    private val stringProductColor2: Array<String>,
    private val dates: CalendarDay) : DayViewDecorator {

    private lateinit var colors: IntArray

    override fun shouldDecorate(day: CalendarDay): Boolean  = dates == day

    override fun decorate(view: DayViewFacade) {
        colors = IntArray(stringProductColor2.size)
        for (i in stringProductColor2.indices) {
            colors[i] = Color.parseColor(stringProductColor2[i])
        }
        view.addSpan(CustomMultipleDotSpan(6f, colors))
    }
}