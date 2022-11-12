package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.content.res.Configuration
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import android.widget.Toast
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.datepicker.MaterialDatePicker
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.google.android.material.textfield.TextInputEditText
import com.google.android.material.textfield.TextInputLayout
import com.google.android.material.timepicker.MaterialTimePicker
import com.google.android.material.timepicker.TimeFormat
import com.prolificinteractive.materialcalendarview.*
import com.prolificinteractive.materialcalendarview.format.TitleFormatter
import com.ssafy.zip.android.data.Calendar
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.request.RequestCalendar
import com.ssafy.zip.android.databinding.FragmentCalendarBinding
import com.ssafy.zip.android.viewmodel.CalendarViewModel
import java.lang.IllegalArgumentException
import java.text.DateFormat
import java.text.SimpleDateFormat
import java.time.LocalDate
import java.time.LocalDateTime
import java.time.LocalTime
import java.time.ZoneId
import java.time.ZonedDateTime
import java.util.*
import java.util.Calendar.getInstance
import kotlin.collections.ArrayList
import kotlin.properties.Delegates


class CalendarFragment : Fragment(), OnDateSelectedListener {
    private var _binding: FragmentCalendarBinding? = null
    private val binding get() = _binding!!
    private val oneDayDecorator : OneDayDecorator? = OneDayDecorator(date = CalendarDay.today())
    private lateinit var materialCalendarView: MaterialCalendarView
    private lateinit var recyclerView: RecyclerView
    private lateinit var dialogRecyclerView: RecyclerView
    private lateinit var calendarAdapter: CalendarAdapter
    private lateinit var activity: MainActivity
    private lateinit var customAlertDialogView: View
    private lateinit var calendarView: MaterialCalendarView
    private lateinit var calendarTextField: TextInputLayout
    private lateinit var calendarDialogAdapter: CalendarDialogAdapter
    private var curYear by Delegates.notNull<Int>() // 현재 캘린더에서 선택된 년도
    private var curMonth by Delegates.notNull<Int>() // 현재 캘린더에서 선택된 월
    private var curDay by Delegates.notNull<Int>() // 현재 캘린더에서 선택된 날짜
    private val viewModel by viewModels<CalendarViewModel> { CalendarViewModel.Factory(Application()) }
    private var selectedMemberList: ArrayList<Long> = ArrayList() //선택된 가족 멤버들 id 담을 리스트
    var link = MemberSelectAdapter()

//    var link = CalendarAdapter(calendar)

    companion object {
        fun newInstance(): CalendarFragment = CalendarFragment()
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val languageToLoad = "kor" // your language
        val locale = Locale(languageToLoad)
        Locale.setDefault(locale)
        val config = Configuration()
        config.locale = locale
        activity.resources.updateConfiguration(
            config,
            activity.resources.displayMetrics
        )
        this.findViewById(R.layout.fragment_calendar, R.layout.dialog_add_calendar)
    }

    private fun findViewById(fragmentCalendar: Int, dialogAddCalendar: Int) {

    }

    override fun onAttach(context: Context) {
        super.onAttach(context)

        activity = context as MainActivity
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentCalendarBinding.inflate(inflater, container, false)
        binding.viewmodel = viewModel
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        recyclerView = view.findViewById(R.id.calendar_recycler_view)
        recyclerView.setHasFixedSize(true)
        recyclerView.layoutManager = GridLayoutManager(activity, 1)

        curYear = CalendarDay.today().year
        curMonth = CalendarDay.today().month
        curDay = CalendarDay.today().day

        // 일단 adapter reset
        calendarAdapter = CalendarAdapter(
            ArrayList(), link, this.activity
        )
        recyclerView.adapter = calendarAdapter

        // 여기서 list 불러오고나서 다시 reset 해줌
        observeCalendarFamily(activity)
        observeCalendarList(activity)

        calendarView = view.findViewById(R.id.calendarView)
        calendarView.setTitleFormatter(TitleFormatter { "${curYear}년 ${curMonth}월" })

        // 날짜 표시
        val dayText: TextView = view.findViewById(R.id.day_text)
        val dataFormat: DateFormat = SimpleDateFormat("MM월 d일",  Locale.KOREA)

        dayText.text = dataFormat.format(Date())


        // 캘린더 height 조절
        calendarView.setDynamicHeightEnabled(true)
        // 날짜 선택시 동그라미
        /*calendarView.setOnDateChangedListener(this)*/
        // 오늘 날짜 색상 변경
        calendarView.addDecorator(oneDayDecorator)

        // 캘린더 month 변경됐을 때
        // 일정 list 바꿔줘야 함
        calendarView.setOnMonthChangedListener(object : OnMonthChangedListener{
            override fun onMonthChanged(widget: MaterialCalendarView?, date: CalendarDay?) {
                if(date?.year != null && date?.month != null){
                    curYear = date.year
                    curMonth = date.month
                    curDay = date.day
                    dayText.text = "${curMonth}월 ${curDay}일"

                    viewModel.updateCalendarList(date.year, date.month) // 일정 list 업데이트
                }
                calendarView.setTitleFormatter(TitleFormatter { "${date?.year}년 ${date?.month}월" })
            }
        })

        // 캘린더에서 선택한 날짜 변경됐을 때
        // 아래 일정 변경해줌
        calendarView.setOnDateChangedListener(object : OnDateSelectedListener{
            override fun onDateSelected(widget : MaterialCalendarView, date : CalendarDay , selected : Boolean) {
                val curDate = date.date
                curYear = curDate.year
                curMonth = curDate.monthValue
                curDay = curDate.dayOfMonth

                /*calendarView.setTitleFormatter(TitleFormatter { "${curDate.year}년 ${curDate.dayOfMonth}월" })*/

                dayText.text = "${curMonth}월 ${curDay}일"

                var dayCalendarList = getDayCalendarList(curYear, curMonth, curDay, viewModel.calendarList.value!!) // 날짜 필터링
                recyclerView.setHasFixedSize(true)
                recyclerView.layoutManager = GridLayoutManager(activity, 1)
                var adapter = CalendarAdapter(dayCalendarList, link, activity)
                recyclerView.adapter = adapter
            }
        })

        // 날짜-일정 연결
        var pickedHour = 0
        var pickedMinute = 0
        var pickedHour2 = 0
        var pickedMinute2 = 0

        // 일정 추가
        val fab: View = view.findViewById(R.id.add_calendar_fab)
        fab.setOnClickListener { view ->
            customAlertDialogView = LayoutInflater.from(activity)
                .inflate(R.layout.dialog_add_calendar, null, false)

            // dialog recycler view
            dialogRecyclerView = customAlertDialogView.findViewById(R.id.family_recycler_view)
            dialogRecyclerView.setHasFixedSize(true)
            //api 연결 Family.familyList
            calendarDialogAdapter = CalendarDialogAdapter(viewModel.calendarFamilyData.value, link)

            val cnt = when (calendarDialogAdapter.itemCount) {
                in 1..4 -> calendarDialogAdapter.itemCount
                in 5..6 -> 3
                else -> 4
            }

            dialogRecyclerView.adapter = calendarDialogAdapter
            dialogRecyclerView.layoutManager = GridLayoutManager(activity, cnt)

            // 시작 날짜
//            var startPickDateButton: TextView? = null
            var startShowSelectedDateText: TextView? = null
            var startShowSelectedTimeText: TextView? = null
//            startPickDateButton = customAlertDialogView.findViewById(R.id.btn_startDate)
            startShowSelectedDateText = customAlertDialogView.findViewById(R.id.btn_startDate)
            startShowSelectedTimeText = customAlertDialogView.findViewById(R.id.btn_startTime)
            var materialDateBuilder: MaterialDatePicker.Builder<*> =
                MaterialDatePicker.Builder.datePicker()

            materialDateBuilder.setTitleText("시작날짜")
            materialDateBuilder.setPositiveButtonText("확인")
            materialDateBuilder.setNegativeButtonText("취소")

            var materialDatePicker = materialDateBuilder.build()
            // material design date picker
            startShowSelectedDateText.setOnClickListener{
                        materialDatePicker.show(
                            requireActivity().supportFragmentManager,
                            "MATERIAL_DATE_PICKER")
                }
            startShowSelectedTimeText.setOnClickListener{  materialDatePicker.show(
                requireActivity().supportFragmentManager,
                "MATERIAL_DATE_PICKER") }

            // 시작 시간
            materialDatePicker.addOnPositiveButtonClickListener {
                var startText = materialDatePicker.headerText
                val materialTimePicker: MaterialTimePicker = MaterialTimePicker.Builder()
                    .setTitleText("시작 시간")
                    .setPositiveButtonText("확인")
                    .setNegativeButtonText("취소")
                    .setHour(12)
                    .setMinute(10)
//                    .setTimeFormat(TimeFormat.CLOCK_12H)
                    .build()


                materialTimePicker.show(requireActivity().supportFragmentManager, "MainActivity")

                materialTimePicker.addOnPositiveButtonClickListener {

                    pickedHour = materialTimePicker.hour
                    pickedMinute = materialTimePicker.minute

                    val formattedTime: String = when {
                        pickedHour > 12 -> {
                            if (pickedMinute < 10) {
                                "오후 ${materialTimePicker.hour - 12}:0${materialTimePicker.minute}"
                            } else {
                                "오후 ${materialTimePicker.hour - 12}:${materialTimePicker.minute}"
                            }
                        }
                        pickedHour == 12 -> {
                            if (pickedMinute < 10) {
                                "오후 ${materialTimePicker.hour}:0${materialTimePicker.minute}"
                            } else {
                                "오후 ${materialTimePicker.hour}:${materialTimePicker.minute}"
                            }
                        }
                        pickedHour == 0 -> {
                            if (pickedMinute < 10) {
                                "오전 ${materialTimePicker.hour + 12}:0${materialTimePicker.minute} "
                            } else {
                                "오전 ${materialTimePicker.hour + 12}:${materialTimePicker.minute}"
                            }
                        }
                        else -> {
                            if (pickedMinute < 10) {
                                "오전 ${materialTimePicker.hour}:0${materialTimePicker.minute}"
                            } else {
                                "오전 ${materialTimePicker.hour}:${materialTimePicker.minute}"
                            }
                        }
                    }

                    // then update the preview TextView
                    startShowSelectedDateText.text = startText
                    startShowSelectedTimeText.text = formattedTime
                }
            }

            // 종료 날짜
            var endShowSelectedDateText: TextView? = null
            var endShowSelectedTimeText: TextView? = null

            endShowSelectedDateText = customAlertDialogView.findViewById(R.id.btn_endDate)
            endShowSelectedTimeText = customAlertDialogView.findViewById(R.id.btn_endTime)

            var materialDateBuilder2: MaterialDatePicker.Builder<*> =
                MaterialDatePicker.Builder.datePicker()

            materialDateBuilder2.setTitleText("종료날짜")
            materialDateBuilder2.setPositiveButtonText("확인")
            materialDateBuilder2.setNegativeButtonText("취소")

            var materialDatePicker2 = materialDateBuilder2.build()

            // material design date picker
            endShowSelectedDateText.setOnClickListener{
                        materialDatePicker2.show(
                            requireActivity()!!.supportFragmentManager,
                            "MATERIAL_DATE_PICKER"
                        )
                }
            endShowSelectedTimeText.setOnClickListener{
                materialDatePicker2.show(
                    requireActivity()!!.supportFragmentManager,
                    "MATERIAL_DATE_PICKER"
                )
            }

            // 종료 시간
            materialDatePicker2.addOnPositiveButtonClickListener {
                var endText = materialDatePicker2.headerText
                val materialTimePicker2: MaterialTimePicker = MaterialTimePicker.Builder()
                    .setTitleText("종료시간")
                    .setPositiveButtonText("확인")
                    .setNegativeButtonText("취소")
                    .setHour(12)
                    .setMinute(10)
                    //                    .setTimeFormat(TimeFormat.CLOCK_12H)
                    .build()


                materialTimePicker2.show(
                    requireActivity().supportFragmentManager,
                    "MainActivity"
                )

                materialTimePicker2.addOnPositiveButtonClickListener {
                    pickedHour2 = materialTimePicker2.hour
                    pickedMinute2 = materialTimePicker2.minute
                    val formattedTime: String = when {
                        pickedHour2 > 12 -> {
                            if (pickedMinute2 < 10) {
                                "오후 ${materialTimePicker2.hour - 12}:0${materialTimePicker2.minute}"
                            } else {
                                "오후 ${materialTimePicker2.hour - 12}:${materialTimePicker2.minute}"
                            }
                        }
                        pickedHour2 == 12 -> {
                            if (pickedMinute2 < 10) {
                                "오후 ${materialTimePicker2.hour}:0${materialTimePicker2.minute}"
                            } else {
                                "오후 ${materialTimePicker2.hour}:${materialTimePicker2.minute}"
                            }
                        }
                        pickedHour2 == 0 -> {
                            if (pickedMinute2 < 10) {
                                "오전 ${materialTimePicker2.hour + 12}:0${materialTimePicker2.minute}"
                            } else {
                                "오전 ${materialTimePicker2.hour + 12}:${materialTimePicker2.minute}"
                            }
                        }
                        else -> {
                            if (pickedMinute2 < 10) {
                                "오전 ${materialTimePicker2.hour}:0${materialTimePicker2.minute}"
                            } else {
                                "오전 ${materialTimePicker2.hour}:${materialTimePicker2.minute}"
                            }
                        }
                    }
                    // then update the preview TextView
                    endShowSelectedTimeText.text = formattedTime
                    endShowSelectedDateText.text = endText
                }
            }

            MaterialAlertDialogBuilder(activity)
                .setView(customAlertDialogView)
                .setPositiveButton(resources.getString(R.string.confirm)) { dialog, which ->
                    var content = customAlertDialogView.findViewById<TextInputEditText>(R.id.calendar_content_text).text
                    if(startShowSelectedDateText.text.equals("시작 날짜") && endShowSelectedDateText.text.equals("종료 날짜") && content.isNullOrEmpty()){
                        println("뭐 골라라")
                    }else {
                        var startLocalDate =
                            textToLocalDate(startShowSelectedDateText.text.toString())
                        var startLocalTime = LocalTime.of(pickedHour, pickedMinute)
                        var endLocalDate = textToLocalDate(endShowSelectedDateText.text.toString())
                        var endLocalTime = LocalTime.of(pickedHour2, pickedMinute2)
                        var startDate = LocalDateTime.of(
                            startLocalDate.year,
                            startLocalDate.monthValue,
                            startLocalDate.dayOfMonth,
                            startLocalTime.hour,
                            startLocalTime.minute,
                            1,
                        )
                        var endDate = LocalDateTime.of(
                            endLocalDate.year,
                            endLocalDate.monthValue,
                            endLocalDate.dayOfMonth,
                            endLocalTime.hour,
                            endLocalTime.minute,
                            1,
                        )

                        println(endDate)
                        var addedCalendar = RequestCalendar(content.toString(), endDate.toString(), startDate.toString(), selectedMemberList)
                        println(addedCalendar)

                        viewModel.addCalendar(addedCalendar)
                        Toast.makeText(activity, "일정 추가", Toast.LENGTH_SHORT).show()
                        dialog.dismiss()
                    }
                }
                .setNegativeButton(resources.getString(R.string.cancel)) { dialog, _ ->
                    dialog.dismiss()
                }
                .show()

        }
    }


    private fun textToLocalDate (text : String) : LocalDate{
        println("textToLocalDate: " + text) // textToLocalDate: 2022년 11월 3일

        val textArray = text.split(" ")

        val year : Int = textArray[0].substring(0, textArray[0].length-1).toInt()
        val month : Int = textArray[1].substring(0, textArray[1].length-1).toInt()
        var day : Int = textArray[2].substring(0, textArray[2].length-1).toInt()

        return LocalDate.of(year, month, day)
    }

    private fun observeCalendarFamily(activity: MainActivity) {
        val observer = Observer<ArrayList<FamilyMember>> { _ ->
            binding.viewmodel = viewModel
            customAlertDialogView = LayoutInflater.from(activity)
                .inflate(R.layout.dialog_add_calendar, null, false)
            // dialog recycler view

            dialogRecyclerView = customAlertDialogView.findViewById(R.id.family_recycler_view)
            dialogRecyclerView.setHasFixedSize(true)
            calendarDialogAdapter = CalendarDialogAdapter(viewModel.calendarFamilyData.value, link)
            dialogRecyclerView.adapter = calendarDialogAdapter

            val cnt = when (calendarDialogAdapter.itemCount) {
                in 1..4 -> calendarDialogAdapter.itemCount
                in 5..6 -> 3
                else -> 4
            }
            dialogRecyclerView.layoutManager = GridLayoutManager(activity, cnt)
        }
        viewModel.calendarFamilyData.observe(viewLifecycleOwner, observer)
    }

    private fun observeCalendarList(activity: MainActivity) {
        val observer =
            Observer<List<Calendar>> {
                println("observeViewModel 불림")
//                // 처음에 현재 날짜 선택
//                calendarView.setSelectedDate(CalendarDay.today())
                if(!calendarView.isSelected){
                    // 처음에 현재 날짜 선택
                    calendarView.setSelectedDate(CalendarDay.today())
                }

                // 일정 있는 날짜 리스트 가져오기
//                val dateList = ArrayList<CalendarDay>()
                for(index in 1 until getDaysInMonth(curYear, curMonth)+1){
                    if(hasCalendar(curYear, curMonth, index, viewModel.calendarList.value!!)){
                        calendarView.addDecorator(EventDecorator(activity, arrayOf("#03DAC6"), CalendarDay.from(curYear, curMonth, index)))
//                        dateList.add(CalendarDay(curYear, curMonth, index))
                    }
                }


                binding.viewmodel = viewModel
//                var today = LocalDate.now()
                if (viewModel.calendarList.value != null) {
//                    var dayCalendarList =
//                        getDayCalendarList(
//                            today.year, today.monthValue - 1, today.dayOfMonth,
//                            viewModel.calendarList.value!!
//                        ) // 날짜 필터링
//                    println("선택된 날짜: " + curYear + "/" + curMonth + "/" + curDay)

                    // 현재 선택된 날짜에 해당하는 일정 필터링
                    var dayCalendarList = getDayCalendarList(curYear, curMonth, curDay, viewModel.calendarList.value!!)


                    binding.calendarRecyclerView.setHasFixedSize(true)
                    binding.calendarRecyclerView.layoutManager = GridLayoutManager(activity, 1)
                    println("dayCalendarList: " + dayCalendarList)

                    var adapter = CalendarAdapter(dayCalendarList, link, activity)
                    binding.calendarRecyclerView.adapter = adapter
                }
            }

        viewModel.calendarList.observe(viewLifecycleOwner, observer)
    }

    private fun getDaysInMonth(year: Int, month: Int): Int{
        return when(month-1){
            0, 2, 4, 6, 7, 9, 11 -> 31
            3, 5, 8, 10 -> 30
            1 -> if(year%4==0 && year%100!=0 || year%400==0) 29 else 28
            else -> throw IllegalArgumentException("Invalid Month")
        }
    }

    // 선택된 날짜에 해당하는 일정 list return
    private fun getDayCalendarList(
        year: Int,
        month: Int,
        day: Int,
        calendarList: List<Calendar>
    ): List<Calendar> {
        var curDate = LocalDate.of(year, month, day) // 캘린더에서 선택된 날짜
        val dayCalendarList: ArrayList<Calendar> = ArrayList()

        for (index in 0 until calendarList.size) { // 해당 월의 전체 리스트
            val startLocalDate = dateToLocalDate(calendarList[index].startDate)
            val endLocalDate = dateToLocalDate(calendarList[index].endDate)
            if ((startLocalDate.isBefore(curDate) || startLocalDate.isEqual(curDate)) &&
                (endLocalDate.isEqual(curDate) || endLocalDate.isAfter(curDate))
            ) {
                dayCalendarList.add(calendarList[index])
            }
        }

        return dayCalendarList


    }

    private fun hasCalendar(
        year: Int,
        month: Int,
        day: Int,
        calendarList: List<Calendar>
    ): Boolean {
        var curDate = LocalDate.of(year, month, day) // 일정이 있는지 확인하고 싶은 날짜

        for (index in 0 until calendarList.size) { // 해당 월의 전체 리스트
            val startLocalDate = dateToLocalDate(calendarList[index].startDate)
            val endLocalDate = dateToLocalDate(calendarList[index].endDate)
            if ((startLocalDate.isBefore(curDate) || startLocalDate.isEqual(curDate)) &&
                (endLocalDate.isEqual(curDate) || endLocalDate.isAfter(curDate))
            ) {
                return true;
            }
        }
        return false;
    }

    private fun dateToLocalDate(date: Date):LocalDate{
        return date.toInstant().atZone(ZoneId.systemDefault()).toLocalDate()
    }

    // 해당 Fragment의 다른 함수를 받아주기 위해서는 class가 아닌 inner class여야 함
    inner class MemberSelectAdapter {
        // 선택된 가족들 모아주기
        // 있으면 뺴고, 없으면 넣어서 넘겨주기
        fun selectMember(id: Long) {
            if (selectedMemberList.contains(id)) { // 리스트에 해당 가족이 있으면,
                selectedMemberList.remove(id)
            } else {
                selectedMemberList.add(id)
            }
            selectedMemberList.sort()
            println("selectedMemberList: " + selectedMemberList)
        }

        fun deleteCalendar(calendar : Calendar){
            viewModel.deleteCalendar(calendar)
            }
        }

    override fun onDateSelected(
        widget: MaterialCalendarView,
        date: CalendarDay,
        selected: Boolean
    ) {
    }
}





