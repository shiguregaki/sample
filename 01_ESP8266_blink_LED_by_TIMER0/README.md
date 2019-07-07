ESP8266_blink_LED_by_TIMER0
---

This code blinks LED by TIMER0 interrupt on Arduino wifi module(ESP8266).

![demo](/01_ESP8266_blink_LED_by_TIMER0/docs/led_blinking.gif)

# Description
I created this code for coding practice, becouse I would like to have checked about TIMER0 interrupt on Arduino wifi module(ESP8266).

# Requirement
## Required device
### Arduino wifi module(ESP8266)
If purchased in Japan, it works on the following boards:

- [電子太郎 ESP-WROOM-02開発ボード 2.4 GHz Wi-Fiモジュール MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [ＥＳＰ－ＷＲＯＯＭ－０２開発ボード](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer（ESP-WROOM-02開発ボード）](https://www.switch-science.com/catalog/2500/)

### Other parts

| Parts | MPN | Num |
|:---|:---|:---|
|5mm Deluxe Power Red LED  |OSR5CA5B61P |1 |
|120Ω resistor |- |1 |
|Bread board |- |1 |
|Jumper cord(male-female) |- |4 |

## Required software
The following software are required to be installed.
### Arduino IDE
Install Arduino IDE on your development PC.

[https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)

### (tool) ESP8266 core for Arduino
The default configuration of the Arduino IDE does not support the ESP 8266 board.
Therefore, it is necessary to import **ESP8266 core for Arduino** into Arduino IDE.

[ESP8266 core for Arduino](https://github.com/esp8266/Arduino)

# Usage
### 1.Build the circuit as the fllowing figure.

![circuit_diagram](/01_ESP8266_blink_LED_by_TIMER0/docs/circuit_diagram_frizing.PNG)

### 2.Install "Required software" in Arduino IDE.
"Required software" is [link](#required-software).

### 3.Write this code on the ESP8266 board with Arduino IDE.
The code to write is "ESP8266_blink_LED_by_TIMER0.ino".

The parameters are below. Please change as appropriate for your environment.

| Parameters | Description | Default value |
|:---|:---|:---|
|CPU_MHZ |ESP8266 CPU frequency.  Please change as appropriate for your environment. |160 |
|blinkInterval |The interval time to blink LED (seconds). |1 |
|ledPin |The LED signal output pin on the arduino. |5 |

### 4.If you turn on the power of the ESP8266 board, the LED will blink automatically.

# Licence
[MIT](/01_ESP8266_blink_LED_by_TIMER0/LICENSE)

# Author
[shiguregaki](https://github.com/shiguregaki)


---

Japanese
---

このコードはArduino wifiモジュールのESP8266でLEDチカをTIMER0割り込みで実行するものです。

![demo](/01_ESP8266_blink_LED_by_TIMER0/docs/led_blinking.gif)

# 概要
Arduino wifiモジュールのESP8266でTIMER0割り込みのコーディング練習用に作成しました。

# 必要なこと
## 必要なデバイス
### Arduino wifi module(ESP8266)
日本での購入なら、以下のボード上で動作します。

- [電子太郎 ESP-WROOM-02開発ボード 2.4 GHz Wi-Fiモジュール MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [ＥＳＰ－ＷＲＯＯＭ－０２開発ボード](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer（ESP-WROOM-02開発ボード）](https://www.switch-science.com/catalog/2500/)

### その他の部品

| 部品 | 型番 | 個数 |
|:---|:---|:---|
|5mm Deluxe Power Red LED  |OSR5CA5B61P |1 |
|120Ω抵抗 |- |1 |
|ブレッドボード |- |1 |
|ジャンパーピン(オス-メス) |- |2 |

## インストールが必要なソフトウェア
### Arduino IDE
開発用のPCにArduino IDEをインストールします。

[https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)

### (tool) ESP8266 core for Arduino
Arduino IDEのデフォルト設定では、ESP8266ボードはサポートされていません。
そのため、**ESP8266 core for Arduino**をArduino IDEにインポートする必要があります。

[ESP8266 core for Arduino](https://github.com/esp8266/Arduino)

# 使い方
### 1.以下のように回路を組みます。

![circuit_diagram](/01_ESP8266_blink_LED_by_TIMER0/docs/circuit_diagram_frizing.PNG)

### 2.Arduino IDEに"インストールが必要なソフトウェア"をインストールします。
インストールが必要なソフトウェアは[こちら](#インストールが必要なソフトウェア)

### 3.Arduino IDEでESP8266基板に本コードを書き込みます。
書き込むコードは「ESP8266_blink_LED_by_TIMER0.ino」です。

パラメータは以下です。ご自分の環境に合わせて適宜変更してください。

| パラメータ | 説明 | デフォルト値 |
|:---|:---|:---|
|CPU_MHZ |ESP8266のCPU周波数。ご自分の環境に合わせて設定してください。 |160 |
|blinkInterval |LEDを光らせる間隔(単位:秒) |1 |
|ledPin |LEDと接続するESP8266側のGPIOピン番号 |5 |

### 4.ESP8266基板の電源を入れれば、自動でLEDがチカチカします。

# ライセンス
[MIT](/01_ESP8266_blink_LED_by_TIMER0/LICENSE)

# 作成者
[shiguregaki](https://github.com/shiguregaki)

