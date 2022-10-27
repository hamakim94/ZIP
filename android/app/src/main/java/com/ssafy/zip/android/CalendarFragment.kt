package com.ssafy.zip.android
import android.content.Context
import android.content.Intent
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.CalendarView
import android.widget.TextView
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.google.android.material.textfield.TextInputLayout
import com.ssafy.zip.android.data.Calendar
import java.text.DateFormat
import java.text.SimpleDateFormat
import java.util.*
import kotlin.collections.ArrayList



class CalendarFragment : Fragment() {
    private lateinit var recyclerView: RecyclerView
    private lateinit var dialogRecyclerView: RecyclerView
    private lateinit var calendarList: ArrayList<Calendar>
    private lateinit var calendarAdapter: CalendarAdapter
    private lateinit var activity: MainActivity
    private lateinit var customAlertDialogView: View
    private lateinit var calendarTextField: TextInputLayout
    private lateinit var memberList: ArrayList<Member>
    private lateinit var calendarDialogAdapter: CalendarDialogAdapter

    companion object {
        fun newInstance(): CalendarFragment = CalendarFragment()
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
    }

    override fun onAttach(context: Context) {
        super.onAttach(context)

        activity = context as MainActivity

    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        return inflater.inflate(R.layout.fragment_calendar, container, false)
    }


    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        // setContentView(R.layout.fragment_calendar)

        recyclerView = view.findViewById(R.id.calendar_recycler_view)
        recyclerView.setHasFixedSize(true)
        recyclerView.layoutManager = GridLayoutManager(activity, 1)

        calendarList = ArrayList()
        memberList = ArrayList()
        addDataToList()

        calendarAdapter = CalendarAdapter(calendarList)
        recyclerView.adapter = calendarAdapter


        val dayText: TextView = view.findViewById(R.id.day_text)
        val calendarView: CalendarView = view.findViewById(R.id.calendarView)

        val dataFormat: DateFormat = SimpleDateFormat("MM월 dd일")

        val date: Date = Date(calendarView.date)

        dayText.text = dataFormat.format(date)

        calendarView.setOnDateChangeListener { calendarView, year, month, dayOfMonth ->
            var day: String = "${month + 1}월 ${dayOfMonth}일"

            dayText.text = day

        }

        // dialog recycler view
        dialogRecyclerView = view.findViewById(R.id.family_recycler_view)
        dialogRecyclerView.setHasFixedSize(true)
        calendarDialogAdapter = CalendarDialogAdapter(memberList, childFragmentManager)

        val cnt = when(calendarDialogAdapter.itemCount){
            in 1..4 -> calendarDialogAdapter.itemCount
            in 5..6 -> 3
            else -> 4
        }
        dialogRecyclerView.layoutManager = GridLayoutManager(activity, cnt)

        val fab: View = view.findViewById(R.id.add_calendar_fab)
        fab.setOnClickListener { view ->
            customAlertDialogView = LayoutInflater.from(activity)
                .inflate(R.layout.dialog_add_calendar, null, false)

            MaterialAlertDialogBuilder(activity)
                .setView(customAlertDialogView)
                .setTitle(resources.getString(R.string.new_calendar))
                .setPositiveButton(resources.getString(R.string.confirm)) { dialog, which ->
                    val calendarTitle = calendarTextField.editText?.text.toString()

                    dialog.dismiss()
                }
                .setNegativeButton(resources.getString(R.string.cancel)) { dialog, _ ->
                    dialog.dismiss()
                }
                .show()
        }
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)

    }

    private fun addDataToList() {
        calendarList.add(Calendar(1, R.drawable.ex, "아침엔 티타임~", 10))
        calendarList.add(Calendar(2, R.drawable.ex2, "점심엔 짜장면~", 12))
        calendarList.add(Calendar(3, R.drawable.ex3, "저녁엔 삼겹살~", 6))

        memberList.add(Member(1,"류현수", "행복한 우리 가조쿠", "귀요미 막둥이 현수", R.drawable.member1))
        memberList.add(Member(2,"김민균", "행복한 우리 가조쿠", "귀요미 첫째 민균", R.drawable.member2))
        memberList.add(Member(3,"이승연", "행복한 우리 가조쿠", "귀요미 둘째 승연", R.drawable.member3))
        memberList.add(Member(4,"이보나", "행복한 우리 가조쿠", "귀요미 셋째 보나", R.drawable.member4))
    }
}





