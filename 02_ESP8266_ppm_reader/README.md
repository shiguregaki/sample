ESP8266_ppm_reader
---

This code is to read PPM signal value on Arduino wifi module(ESP8266).
PPM value is displayed on Arduino IDE serial monitor.

![description](/02_ESP8266_ppm_reader/docs/description.png)

# Description
I created this code for coding practice, because I would like to have read PPM value, 
which it is known in RC industry, on Arduino wifi module(ESP8266).

# Requirement
## Required device
### PPM signal generator
There are many devices which generate PPM signal.
I used [FrSky 8CH PWM PPM SBUS Micro Receiver](http://helimonster.jp/?pid=116238271) for checking.
If you use it, you need to transmitter, such as FrSky DHT DFT DJT, becouse it is receiver.

For example:

- [2.4G 8CH D8 Mini FrSky Compatible Receiver With PWM PPM SBUS Output](https://www.banggood.com/2_4G-8CH-D8-Mini-FrSky-Compatibel-Receiver-With-PWM-PPM-SBUS-Output-p-1140478.html?rmmds=search&cur_warehouse=CN)
- [2.4g 8ch D8 Mini Frsky Compatible Receiver with Pwm Ppm Output Compatible with Frsky Sbus X9d (Plus) Djt Dft Dht 8 IBUS 10 PPM](https://www.amazon.com/2-4g-Frsky-Compatible-Receiver-Output/dp/B07PVL1S6H/ref=sr_1_fkmr0_1?keywords=2.4G+8CH+D8+Mini+FrSky&qid=1558046692&s=gateway&sr=8-1-fkmr0)

### Arduino wifi module(ESP8266)
If purchased in Japan, it works on the following boards:

- [電子太郎 ESP-WROOM-02開発ボード 2.4 GHz Wi-Fiモジュール MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [ＥＳＰ−ＷＲＯＯＭ−０２開発ボード](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer（ESP-WROOM-02開発ボード）](https://www.switch-science.com/catalog/2500/)

### Other parts

| Parts | MPN | Num |
|:---|:---|:---|
|Jumper cord(Soldering-female) |- |3 |

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
### 1.Build the connection as the fllowing figure.

![wiring_diagram](/02_ESP8266_ppm_reader/docs/wiring_diagram.png)

The output pin can be changed.
If you change output pin, change **PPM_READE_PIN** of define value in this program.

### 2.Install "Required software" in Arduino IDE.
"Required software" is [link](#required-software).

### 3. Confirm PPM signal specifications, UP pulse or DOWN pulse.

The PPM signal has the following two patterns, so Confirm one of them.

![pulse_type](/02_ESP8266_ppm_reader/docs/pulse_type.png)

If you write [ppm_pulse_check_by_serial_plotter.ino](/02_ESP8266_ppm_reader/test/ppm_pulse_check_by_serial_plotter)
to ESP8266 board, you can confirm pulse type on serial plotter.

If you confirm ppm pulse type, change **TYPE_OF_PULSE_IS_RISING** of define value in this program.

### 4. Write this code on the ESP8266 board with Arduino IDE.
The code to write is "ESP8266_ppm_reader.ino".

The parameters are below. Please change as appropriate for your environment.

| Parameters | Description | Default value |
|:---|:---|:---|
|CPU_MHZ |ESP8266 CPU frequency.  Please change as appropriate for your environment. |160 |
|PPM_READE_PIN |The PPM signal input pin on the arduino |5 |
|TYPE_OF_PULSE_IS_RISING |true is RISING(UP pulse), false is FALLING(DOWN pulse) |false |

### 5. If you turn on the power of the ESP8266 board, PPM value will be displayed on serial monitor.

# Licence
[MIT](/02_ESP8266_ppm_reader/LICENSE)

# Author
[shiguregaki](https://github.com/shiguregaki)

---

Japanese
---

このコードはArduino wifiモジュールのESP8266でPPM値を読み取るためのものです。
PPM値の表示はArduinoのシリアルモニタで行います。

![description](/02_ESP8266_ppm_reader/docs/description.png)

# 概要
Arduino wifiモジュールのESP8266でラジコン業界でよく使われるPPM値を読みたいと思い、
このコードを作成しました。

# 必要なこと
## 必要なデバイス
### PPM signal 発生装置
PPMを発生させるデバイスはたくさんあると思います。
私は、[FrSky 8CH PWM PPM SBUS Micro Receiver](http://helimonster.jp/?pid=116238271)を使用しました。
これは受信機なので、別途送信機(FrSky DHT DFT DJTなど)が必要となります。

### Arduino wifi module(ESP8266)
日本では以下のボードで動作すると思います。

- [電子太郎 ESP-WROOM-02開発ボード 2.4 GHz Wi-Fiモジュール MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [ＥＳＰ−ＷＲＯＯＭ−０２開発ボード](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer（ESP-WROOM-02開発ボード）](https://www.switch-science.com/catalog/2500/)

### その他部品

| 部品 | 型番 | 個数 |
|:---|:---|:---|
|ジャンパーコード(はんだ付け-メス) |- |3 |

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

![wiring_diagram](/02_ESP8266_ppm_reader/docs/wiring_diagram.png)

outputのピンは変更可能です。プログラム内の**PPM_READE_PIN**の定義値を変更してください。

### 2.Arduino IDEに"インストールが必要なソフトウェア"をインストールします。
インストールが必要なソフトウェアは[こちら](#インストールが必要なソフトウェア)

### 3.PPM信号の仕様を確認(UP pulse, DOWN pulse)
PPM信号には以下の2パターンがあるので、どちらかを確認します。

![pulse_type](/02_ESP8266_ppm_reader/docs/pulse_type.png)

[ppm_pulse_check_by_serial_plotter.ino](/02_ESP8266_ppm_reader/test/ppm_pulse_check_by_serial_plotter)
を書き込めば、シリアルプロッタでパルスを表示できます。

PPM信号の種類が分かったら、プログラム内の**TYPE_OF_PULSE_IS_RISING**の定義値を変更してください。

### 4.Arduino IDEでESP8266基板に本コードを書き込みます。
書き込むコードは「ESP8266_ppm_reader.ino」です。

パラメータは以下です。ご自分の環境に合わせて適宜変更してください。

| パラメータ | 説明 | デフォルト値 |
|:---|:---|:---|
|CPU_MHZ |ESP8266のCPU周波数。ご自分の環境に合わせて設定してください。 |160 |
|PPM_READE_PIN |受信機と接続するESP8266側のGPIOピン番号 |5 |
|TYPE_OF_PULSE_IS_RISING |パルスの向きを指定(true = UP pulse, false = DOWN pulse) |false |

### 5.ESP8266基板の電源を入れれば、シリアルモニタでPPM値が表示されます。

# ライセンス
[MIT](/02_ESP8266_ppm_reader/LICENSE)

# 作成者
[shiguregaki](https://github.com/shiguregaki)

