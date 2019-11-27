# 7segment-clock
Clock made from 7 segment display and DS3231 <br>
A simple clock made from 6x 7 Segment display and DS3231 rtc module.<br>
First I made the prototype on an Arduino board then just to make it cleaner I just pulled the IC ( Atmega328P) off UNO and placed it on breadboard.<br> Added 16 MHz external oscillator and a LM2596 power regulator ( 12V to 5V ).<br>
for more info on how to use the Makefile and compile_upload.sh refer my post on medium : https://medium.com/@swarnakar.ani24/arduino-sketches-ino-and-makefile-844db9c51d2b?source=friends_link&sk=a50ea892ae07bf27b0d358a648a49ca9 <br>

Plans for V2.0<br>
-Clear code<br>
-Push buttons on breadboard to set time of rtc.<br>
-Since ds3231 supports alarm functionality explore that. May be add ESP8266 to set alarm wirelessly and sync time too.<br>
        
![gif](https://github.com/Arthav24/7segment-clock/blob/master/resources/gif1.gif)
![gif](https://github.com/Arthav24/7segment-clock/blob/master/resources/gif2.gif)
![img](https://github.com/Arthav24/7segment-clock/blob/master/resources/img1.jpg)
