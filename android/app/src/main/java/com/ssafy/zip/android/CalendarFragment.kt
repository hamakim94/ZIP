package com.ssafy.zip.android

import android.content.Context
import android.content.Intent
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.google.android.material.textfield.TextInputLayout
import com.ssafy.zip.android.data.Calendar
import kotlinx.android.synthetic.main.activity_main.*


class CalendarFragment : Fragment() {
    private lateinit var recyclerView: RecyclerView
    private lateinit var calendarList: ArrayList<Calendar>
    private lateinit var calendarAdapter: CalendarAdapter
    private lateinit var activity: MainActivity
    private lateinit var customAlertDialogView : View
    private lateinit var calendarTextField : TextInputLayout


    companion object {
        fun newInstance() : CalendarFragment = CalendarFragment()
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

        recyclerView = view.findViewById(R.id.calendar_recycler_view)
        recyclerView.setHasFixedSize(true)
        recyclerView.layoutManager = GridLayoutManager(activity, 1)

        calendarList = ArrayList()
        addDataToList()

        calendarAdapter = CalendarAdapter(calendarList)
        recyclerView.adapter = calendarAdapter


        val fab: View = view.findViewById(R.id.add_calendar_fab)
        fab.setOnClickListener { view ->
            customAlertDialogView = LayoutInflater.from(activity)
                .inflate(R.layout.dialog_add_calendar, null, false)

            calendarTextField = customAlertDialogView.findViewById(R.id.calendar_text_field)

            MaterialAlertDialogBuilder(activity)
                .setView(customAlertDialogView)
                .setTitle(resources.getString(R.string.new_calendar))
                .setMessage(R.string.add_calendar_msg)
                .setPositiveButton(resources.getString(R.string.confirm)) { dialog, which ->
                    val calendarTitle = calendarTextField.editText?.text.toString()

                    // 확인 버튼 눌렀을 때 할 일
                    // 앨범 생성



                    // 앨범 생성 후, 갤러리에서 사진 다중 선택
                    // 갤러리 호출
    //                    val photoPickerIntent = Intent(Intent.ACTION_PICK)
    //                    photoPickerIntent.type = "image/*"
    //                    // 다중 선택 가능
    //                    photoPickerIntent.putExtra(Intent.EXTRA_ALLOW_MULTIPLE, true)
    //                    startForResult.launch(photoPickerIntent)

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



private fun addDataToList(){
        calendarList.add(Calendar(1, R.drawable.ex, "아침엔 티타임~", 10))
        calendarList.add(Calendar(2, R.drawable.ex2, "점심엔 짜장면~", 12))
        calendarList.add(Calendar(3, R.drawable.ex3, "저녁엔 삼겹살~", 6))


    }
}
