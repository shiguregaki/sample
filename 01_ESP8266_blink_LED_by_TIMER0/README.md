ESP8266_blink_LED_by_TIMER0
====
![circuit_diagram_photo](https://github.com/shiguregaki/sample/blob/master/01_ESP8266_blink_LED_by_TIMER0/docs/circuit_diagram_photo.JPG)

このコードはarudino wifiモジュールのESP8266でLEDチカをTIMER0割り込みで実行するものです。
This code blinks LED by TIMER0 interrupt on arudino wifi module(ESP8266).


## Description
arudino wifiモジュールのESP8266でTIMER0割り込みのコーディング練習用に作成しました。
I created this code for coding practice, becouse I would like to have checked about TIMER0 interrupt on arudino wifi module(ESP8266).


## Demo
![demo](https://github.com/shiguregaki/sample/blob/master/01_ESP8266_blink_LED_by_TIMER0/docs/led_blinking.gif)



## Requirement
### arudino wifi module(ESP8266)
日本での購入なら、以下のボード上で動作します。
If purchased in Japan, it works on the following boards:

*[電子太郎 ESP-WROOM-02開発ボード 2.4 GHz Wi-Fiモジュール MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)
*[ＥＳＰ－ＷＲＯＯＭ－０２開発ボード](http://akizukidenshi.com/catalog/g/gK-12236/)
*[ESPr? Developer（ESP-WROOM-02開発ボード）](https://www.switch-science.com/catalog/2500/)


### Arduino IDE
開発用のPCにArduino IDEをインストールします。
Install Arduino IDE on your development PC.
[https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)


### ESP8266 core for Arduino
Arduino IDEのデフォルト設定では、ESP8266ボードはサポートされていない。
そのため、**ESP8266 core for Arduino**をArduino IDEにインポートする必要がある。
The default configuration of the Arduino IDE does not support the ESP 8266 board.
Therefore, it is necessary to import **ESP8266 core for Arduino** into Arduino IDE.

[ESP8266 core for Arduino](https://github.com/esp8266/Arduino)



## Usage
1.以下のように回路を組みます。
1.Build the circuit as the fllowing figure.

![circuit_diagram](https://github.com/shiguregaki/sample/blob/master/01_ESP8266_blink_LED_by_TIMER0/docs/circuit_diagram_frizing.PNG)

2.Arduino IDEでESP8266基板に本コードを書き込みます。
2.Write this code on the ESP8266 board with Arduino IDE.

3.ESP8266基板の電源を入れれば、自動でLEDがチカチカします。
3.If you turn on the power of the ESP8266 board, the LED will blink automatically.



## Licence

[MIT](https://github.com/shiguregaki/sample/blob/master/LICENSE)



## Author

[shiguregaki](https://github.com/shiguregaki)



