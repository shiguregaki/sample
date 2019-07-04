このコードはarudino wifiモジュールのESP8266でLEDチカをTIMER0割り込みで実行するものです。

![demo](/docs/led_blinking.gif)

# 概要
arudino wifiモジュールのESP8266でTIMER0割り込みのコーディング練習用に作成しました。

# 必要なこと
## 必要なデバイス
### arudino wifi module(ESP8266)
日本での購入なら、以下のボード上で動作します。

- [電子太郎 ESP-WROOM-02開発ボード 2.4 GHz Wi-Fiモジュール MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [ＥＳＰ－ＷＲＯＯＭ－０２開発ボード](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer（ESP-WROOM-02開発ボード）](https://www.switch-science.com/catalog/2500/)

### その他の部品

| 部品 | 型番 | 個数 |
|:---|:---|:---|
|5mm Deluxe Power Red LED  |OSR5CA5B61P |1 |
|120?抵抗 |- |1 |
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

![circuit_diagram](/docs/circuit_diagram_frizing.PNG)

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
[MIT](/LICENSE)

# 作成者
[shiguregaki](https://github.com/shiguregaki)
