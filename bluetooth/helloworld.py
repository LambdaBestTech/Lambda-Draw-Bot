#-*-coding:utf8;-*-
#qpy:console
#qpy:2
"""
This is an example file which tell you how to use QPython to develop android app.
It use the SL4A feature

@Author: River
@Date: 2012-12-31
"""
import androidhelper
#import android
droid = androidhelper.Android()
line = droid.dialogGetInput()

#hello world#droid = android.Android()
"""The first parameter is the service UUID for SerialPortServiceClass.
The second one is the address of your bluetooth module.
If the second one is committed, Android shows you a selection at program start.
When this function succeeds the little led on the bluetooth module should stop blinking.
"""
#j = droid.bluetoothConnect('00001101-0000-1000-8000-00805F9B34FB')
#, BT_DEVICE_ID
#droid.webViewShow('file:///sdcard/sl4a/scripts/androino.html')
#droid.webViewShow('butt_result.html')

#hello world


s = "Just coming by to say hello, %s!" % (line.result,)
droid.makeToast(s)
#droid.makeToast(j)