import android

BT_DEVICE_ID = '00:11:11:18:62:60'

droid = android.Android()
"""The first parameter is the service UUID for SerialPortServiceClass.
The second one is the address of your bluetooth module.
If the second one is committed, Android shows you a selection at program start.
When this function succeeds the little led on the bluetooth module should stop blinking.
"""
droid.bluetoothConnect('00001101-0000-1000-8000-00805F9B34FB')
#, BT_DEVICE_ID
#droid.webViewShow('file:///sdcard/sl4a/scripts/androino.html')
droid.webViewShow('butt_result.html')

while True:
    result = droid.eventWaitFor('fetch_data').result
    droid.bluetoothWrite(' ')  # send a space to your arduino to signal it to read a value from the sensor.
    sensor_data = droid.bluetoothReadLine().result  # read the line with the sensor value from arduino.
    droid.eventClearBuffer()  # workaround for a bug in SL4A r4.
    droid.eventPost('display_data', sensor_data)  # send an event with the sensor data back to the html page.