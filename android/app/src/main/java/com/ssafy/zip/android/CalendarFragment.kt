package com.ssafy.zip.android

import android.app.Application
import android.content.Context
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.CalendarView
import android.widget.TextView
import android.widget.Toast
import androidx.databinding.DataBindingUtil
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.Observer
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.datepicker.MaterialDatePicker
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.google.android.material.textfield.TextInputLayout
import com.google.android.material.timepicker.MaterialTimePicker
import com.google.android.material.timepicker.TimeFormat
import com.ssafy.zip.android.data.Calendar
import com.ssafy.zip.android.data.Family
import com.ssafy.zip.android.data.FamilyMember
import com.ssafy.zip.android.data.User
import com.ssafy.zip.android.databinding.FragmentCalendarBinding
import com.ssafy.zip.android.databinding.FragmentHomeBinding
import com.ssafy.zip.android.viewmodel.CalendarViewModel
import java.text.DateFormat
import java.text.SimpleDateFormat
import java.time.LocalDate
import java.time.ZoneId
import java.util.*
import kotlin.collections.ArrayList
import kotlin.properties.Delegates


class CalendarFragment : Fragment() {
    private var _binding: FragmentCalendarBinding? = null
    private val binding get() = _binding!!
    private lateinit var recyclerView: RecyclerView
    private lateinit var dialogRecyclerView: RecyclerView
    private lateinit var calendarAdapter: CalendarAdapter
    private lateinit var activity: MainActivity
    private lateinit var customAlertDialogView: View
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

//    override fun onCreate(savedInstanceState: Bundle?) {
//        super.onCreate(savedInstanceState)
//        initRecycler()
//      setContentView(R.layout.dialog_add_calendar)
//    }

//    private fun setContentView(dialogAddCalendar: Int) {
//    }

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

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        // setContentView(R.layout.fragment_calendar)
        println(LocalDate.now())
        observeCalendarFamily(activity)
        recyclerView = view.findViewById(R.id.calendar_recycler_view)
        recyclerView.setHasFixedSize(true)
        recyclerView.layoutManager = GridLayoutManager(activity, 1)

//        binding.calendarView.
//        memberList = ArrayList()
//        addDataToList()
        curYear = 1
        curMonth = 1
        curDay = 1
        println("CalendarFragment onViewCreated viewModel.calendarList.value " + viewModel.calendarList)
        observeViewModel(activity)
        calendarAdapter = CalendarAdapter(
            ArrayList(),
            childFragmentManager
        )
        recyclerView.adapter = calendarAdapter

        // 구분선
//        val dividerItemDecoration =
//            DividerItemDecoration(recyclerView.context, LinearLayoutManager(context).orientation)
//
//        recyclerView.addItemDecoration(dividerItemDecoration)


        // 날짜 표시
        val dayText: TextView = view.findViewById(R.id.day_text)
        val calendarView: CalendarView = view.findViewById(R.id.calendarView)

        val dataFormat: DateFormat = SimpleDateFormat("MM월 dd일")

        val date: Date = Date(calendarView.date)

        dayText.text = dataFormat.format(date)



        calendarView.setOnDateChangeListener { calendarView, year, month, dayOfMonth ->
            curYear = year
            curMonth = month
            curDay = dayOfMonth
            // 캘린더에서 선택한 년도, 월에 따라서 calendar list 업데이트
            if (!(year == curYear && month == curMonth)) viewModel.updateCalendarList(year, month)


            var date: String = "${curMonth + 1}월 ${curDay}일"

            dayText.text = date
            if (viewModel.calendarList.value != null) {
                var dayCalendarList =
                    getDayCalendarList(
                        curYear, curMonth, curDay,
                        viewModel.calendarList.value!!
                    ) // 날짜 필터링
                recyclerView.setHasFixedSize(true)
                recyclerView.layoutManager = GridLayoutManager(activity, 1)
                var adapter = CalendarAdapter(dayCalendarList, childFragmentManager)
                recyclerView.adapter = adapter

            }
        }

        // 날짜-일정 연결


        // + 버튼 눌렀을 때
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



            MaterialAlertDialogBuilder(activity)
                .setView(customAlertDialogView)
                .setTitle(resources.getString(R.string.new_calendar))
                .setPositiveButton(resources.getString(R.string.confirm)) { dialog, which ->
                    val calendarContent = calendarTextField.editText?.text.toString()

                    Toast.makeText(activity, "추가", Toast.LENGTH_SHORT).show()

                    dialog.dismiss()
                }
                .setNegativeButton(resources.getString(R.string.cancel)) { dialog, _ ->
                    dialog.dismiss()
                }
                .show()


            // 시작 날짜
            var startPickDateButton: TextView? = null
            var startShowSelectedDateText: TextView? = null

            startPickDateButton = customAlertDialogView.findViewById(R.id.btn_startDate)
            startShowSelectedDateText = customAlertDialogView.findViewById(R.id.btn_startDate)

            var materialDateBuilder: MaterialDatePicker.Builder<*> =
                MaterialDatePicker.Builder.datePicker()

            materialDateBuilder.setTitleText("SELECT A DATE")

            var materialDatePicker = materialDateBuilder.build()

            // material design date picker
            startPickDateButton.setOnClickListener(
                object : View.OnClickListener {
                    override fun onClick(v: View?) {

                        materialDatePicker.show(
                            activity!!.supportFragmentManager,
                            "MATERIAL_DATE_PICKER"
                        )
                    }
                })


            // 종료 날짜
            materialDatePicker.addOnPositiveButtonClickListener {
                startShowSelectedDateText.setText(materialDatePicker.headerText)
            }

            var endPickDateButton: TextView? = null
            var endShowSelectedDateText: TextView? = null

            endPickDateButton = customAlertDialogView.findViewById(R.id.btn_endDate)
            endShowSelectedDateText = customAlertDialogView.findViewById(R.id.btn_endDate)

            var materialDateBuilder2: MaterialDatePicker.Builder<*> =
                MaterialDatePicker.Builder.datePicker()

            materialDateBuilder2.setTitleText("SELECT A DATE")

            var materialDatePicker2 = materialDateBuilder2.build()

            // material design date picker
            endPickDateButton.setOnClickListener(
                object : View.OnClickListener {
                    override fun onClick(v: View?) {

                        materialDatePicker2.show(
                            activity!!.supportFragmentManager,
                            "MATERIAL_DATE_PICKER"
                        )
                    }
                })

            // 시작 시간
            materialDatePicker2.addOnPositiveButtonClickListener {
                endShowSelectedDateText.setText(materialDatePicker2.headerText)
            }

            var startPickTimeButton: TextView? = null
            var startShowSelectedTimeText: TextView? = null

            startPickTimeButton = customAlertDialogView.findViewById(R.id.btn_startTime)
            startShowSelectedTimeText = customAlertDialogView.findViewById(R.id.btn_startTime)

            startPickTimeButton.setOnClickListener {

                val materialTimePicker: MaterialTimePicker = MaterialTimePicker.Builder()

                    .setTitleText("SELECT YOUR TIMING")

                    .setHour(12)
                    .setMinute(10)
                    .setTimeFormat(TimeFormat.CLOCK_12H)
                    .build()

                materialTimePicker.show(requireActivity().supportFragmentManager, "MainActivity")

                materialTimePicker.addOnPositiveButtonClickListener {

                    val pickedHour: Int = materialTimePicker.hour
                    val pickedMinute: Int = materialTimePicker.minute

                    val formattedTime: String = when {
                        pickedHour > 12 -> {
                            if (pickedMinute < 10) {
                                "${materialTimePicker.hour - 12}:0${materialTimePicker.minute} pm"
                            } else {
                                "${materialTimePicker.hour - 12}:${materialTimePicker.minute} pm"
                            }
                        }
                        pickedHour == 12 -> {
                            if (pickedMinute < 10) {
                                "${materialTimePicker.hour}:0${materialTimePicker.minute} pm"
                            } else {
                                "${materialTimePicker.hour}:${materialTimePicker.minute} pm"
                            }
                        }
                        pickedHour == 0 -> {
                            if (pickedMinute < 10) {
                                "${materialTimePicker.hour + 12}:0${materialTimePicker.minute} am"
                            } else {
                                "${materialTimePicker.hour + 12}:${materialTimePicker.minute} am"
                            }
                        }
                        else -> {
                            if (pickedMinute < 10) {
                                "${materialTimePicker.hour}:0${materialTimePicker.minute} am"
                            } else {
                                "${materialTimePicker.hour}:${materialTimePicker.minute} am"
                            }
                        }
                    }

                    // then update the preview TextView
                    startShowSelectedTimeText.text = formattedTime
                }

                // 종료 시간
                var endPickTimeButton: TextView? = null
                var endShowSelectedTimeText: TextView? = null

                endPickTimeButton = customAlertDialogView.findViewById(R.id.btn_endTime)
                endShowSelectedTimeText = customAlertDialogView.findViewById(R.id.btn_endTime)

                endPickTimeButton.setOnClickListener {

                    val materialTimePicker2: MaterialTimePicker = MaterialTimePicker.Builder()

                        .setTitleText("SELECT YOUR TIMING")

                        .setHour(12)
                        .setMinute(10)
                        .setTimeFormat(TimeFormat.CLOCK_12H)
                        .build()

                    materialTimePicker2.show(
                        requireActivity().supportFragmentManager,
                        "MainActivity"
                    )

                    materialTimePicker2.addOnPositiveButtonClickListener {

                        val pickedHour2: Int = materialTimePicker2.hour
                        val pickedMinute2: Int = materialTimePicker2.minute

                        val formattedTime: String = when {
                            pickedHour2 > 12 -> {
                                if (pickedMinute2 < 10) {
                                    "${materialTimePicker2.hour - 12}:0${materialTimePicker2.minute} pm"
                                } else {
                                    "${materialTimePicker2.hour - 12}:${materialTimePicker2.minute} pm"
                                }
                            }
                            pickedHour2 == 12 -> {
                                if (pickedMinute2 < 10) {
                                    "${materialTimePicker2.hour}:0${materialTimePicker2.minute} pm"
                                } else {
                                    "${materialTimePicker2.hour}:${materialTimePicker2.minute} pm"
                                }
                            }
                            pickedHour2 == 0 -> {
                                if (pickedMinute2 < 10) {
                                    "${materialTimePicker2.hour + 12}:0${materialTimePicker2.minute} am"
                                } else {
                                    "${materialTimePicker2.hour + 12}:${materialTimePicker2.minute} am"
                                }
                            }
                            else -> {
                                if (pickedMinute2 < 10) {
                                    "${materialTimePicker2.hour}:0${materialTimePicker2.minute} am"
                                } else {
                                    "${materialTimePicker2.hour}:${materialTimePicker2.minute} am"
                                }
                            }
                        }

                        // then update the preview TextView
                        endShowSelectedTimeText.text = formattedTime
                    }

                }

            }

        }
    }

    private fun observeViewModel(activity: MainActivity) {
        val observer =
            Observer<List<Calendar>> {
                binding.viewmodel = viewModel
                var today = LocalDate.now()
                if (viewModel.calendarList.value != null) {
                    var dayCalendarList =
                        getDayCalendarList(
                            today.year, today.monthValue-1, today.dayOfMonth,
                            viewModel.calendarList.value!!
                        ) // 날짜 필터링
                    binding.calendarRecyclerView.setHasFixedSize(true)
                    binding.calendarRecyclerView.layoutManager = GridLayoutManager(activity, 1)
                    var adapter = CalendarAdapter(dayCalendarList, childFragmentManager)
                    binding.calendarRecyclerView.adapter = adapter
                }
            }

        viewModel.calendarList.observe(viewLifecycleOwner, observer)
    }


    // 선택된 날짜에 해당하는 일정 list return
    private fun getDayCalendarList(
        year: Int,
        month: Int,
        day: Int,
        calendarList: List<Calendar>
    ): List<Calendar> {
        var curDate = LocalDate.of(year, month + 1, day) // 캘린더에서 선택된 날짜
        val dayCalendarList: ArrayList<Calendar> = ArrayList()
        for (index in 0 until calendarList.size) { // 해당 월의 전체 리스트
            if (calendarList[index].startDate.toInstant().atZone(ZoneId.systemDefault())
                    .toLocalDate().isBefore(curDate) && calendarList[index].endDate.toInstant()
                    .atZone(ZoneId.systemDefault()).toLocalDate()
                    .isAfter(curDate) || calendarList[index].startDate.toInstant()
                    .atZone(ZoneId.systemDefault())
                    .toLocalDate().isEqual(curDate) && calendarList[index].endDate.toInstant()
                    .atZone(ZoneId.systemDefault()).toLocalDate().isEqual(curDate)
            ) {
                dayCalendarList.add(calendarList[index])
            } else {
            }
        }

        return dayCalendarList
    }

    // 해당 Fragment의 다른 함수를 받아주기 위해서는 class가 아닌 inner class여야 함
    inner class MemberSelectAdapter{
        // 선택된 가족들 모아주기
        // 있으면 뺴고, 없으면 넣어서 넘겨주기
        fun selectMember(id: Long) {
            if (selectedMemberList.contains(id)) { // 리스트에 해당 가족이 있으면,
                selectedMemberList.remove(id)
            } else {
                selectedMemberList.add(id)
            }

            println("selectedMemberList: " + selectedMemberList)
        }
    }

//    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
//        super.onActivityResult(requestCode, resultCode, data)
//
//    }

//    var family1 = UserFamily(1, "현수네", 1, 4, 1,  Date())
//
//    var user1 = User(family1,true, 1, "현수", "귀요미 막내 현수", null)
//    var user2 = User(family1,true, 2, "민균", "귀요미 첫째 민균", null)
//    var user3 = User(family1,true, 3, "승연", "귀요미 둘째 승연", null)
//    var user4 = User(family1,true, 4, "보나", "귀요미 셋째 보나", null)
//    var user5 = User(family1,true, 5, "보나", "귀요미 넷째 재순", null)
//    var user6 = User(family1,true, 6, "보나", "귀요미 다섯째 도엽", null)
//
//
//
//
//    private fun addDataToList() {
//        calendarList.add(Calendar("가족 회식", Date(), 1, Date(), arrayListOf(user1, user2, user3, user4, user5, user6)))
//        calendarList.add(Calendar("여친이랑 데이트ㅋ",Date(), 1, Date(), arrayListOf(user3)))
//        calendarList.add(Calendar("남친이랑 데이트ㅋ",Date(), 1, Date(), arrayListOf(user1)))
//
//        memberList =  arrayListOf(user1, user2, user3, user4)


}








