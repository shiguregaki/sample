ESP8266_blink_LED_by_TIMER0
====
This code blinks LED by TIMER0 interrupt on arudino wifi module(ESP8266).

このコードはarudino wifiモジュールのESP8266でLEDチカをTIMER0割り込みで実行するものです。

![demo](https://github.com/shiguregaki/sample/blob/master/01_ESP8266_blink_LED_by_TIMER0/docs/led_blinking.gif)

# Description
I created this code for coding practice, becouse I would like to have checked about TIMER0 interrupt on arudino wifi module(ESP8266).

arudino wifiモジュールのESP8266でTIMER0割り込みのコーディング練習用に作成しました。

# Requirement
## arudino wifi module(ESP8266)
If purchased in Japan, it works on the following boards:

日本での購入なら、以下のボード上で動作します。

- [電子太郎 ESP-WROOM-02開発ボード 2.4 GHz Wi-Fiモジュール MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [ＥＳＰ－ＷＲＯＯＭ－０２開発ボード](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer（ESP-WROOM-02開発ボード）](https://www.switch-science.com/catalog/2500/)

## Arduino IDE
Install Arduino IDE on your development PC.

開発用のPCにArduino IDEをインストールします。

[https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)

## ESP8266 core for Arduino
The default configuration of the Arduino IDE does not support the ESP 8266 board.
Therefore, it is necessary to import **ESP8266 core for Arduino** into Arduino IDE.

Arduino IDEのデフォルト設定では、ESP8266ボードはサポートされていません。
そのため、**ESP8266 core for Arduino**をArduino IDEにインポートする必要があります。

[ESP8266 core for Arduino](https://github.com/esp8266/Arduino)

# Usage
**1.Build the circuit as the fllowing figure.**

以下のように回路を組みます。

![circuit_diagram](https://github.com/shiguregaki/sample/blob/master/01_ESP8266_blink_LED_by_TIMER0/docs/circuit_diagram_frizing.PNG)


**2.Write this code on the ESP8266 board with Arduino IDE.**

Arduino IDEでESP8266基板に本コードを書き込みます。


**3.If you turn on the power of the ESP8266 board, the LED will blink automatically.**

ESP8266基板の電源を入れれば、自動でLEDがチカチカします。

# Licence
[MIT](https://github.com/shiguregaki/sample/blob/master/LICENSE)

# Author
[shiguregaki](https://github.com/shiguregaki)

