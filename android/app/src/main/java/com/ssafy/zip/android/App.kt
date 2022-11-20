package com.ssafy.zip.android

import android.app.Application
import android.content.Context

class App : Application() {
    init{
        instance = this
    }
    companion object{
        lateinit var prefs: PreferenceUtil
        lateinit var instance: App
        fun ApplicationContext() : Context {
            return instance.applicationContext
        }
    }

    override fun onCreate() {
        prefs = PreferenceUtil(applicationContext)
        super.onCreate()
    }

}