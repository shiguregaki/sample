ESP8266_control_LED_by_websocket
---

This code is a sample program to control the LED using WebSocket in Arduino wifi module(ESP8266).

![demo](/03_ESP8266_control_LED_by_websocket/docs/led_control.gif)

# Description
I created this code for coding practice, becouse I would like to have checked about the process to control Arduino's output by using WebSocket.

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
|Jumper cord(male-female) |- |2 |

## Required software
The following software are required to be installed.

### Arduino IDE
Install Arduino IDE on your development PC.

[https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)

### (tool) ESP8266 core for Arduino
The default configuration of the Arduino IDE does not support the ESP 8266 board.
Therefore, it is necessary to import **ESP8266 core for Arduino** into Arduino IDE.

[ESP8266 core for Arduino](https://github.com/esp8266/Arduino)

### (tool) Arduino ESP8266 filesystem uploader
It is file updater for Arduino ESP8266.
You can download it following URL link.

[Arduino ESP8266 filesystem uploader](https://github.com/esp8266/arduino-esp8266fs-plugin)

### (library) Links2004/arduinoWebSockets
WebSocket library for Arduino.
You can download it following URL link.

[Links2004/arduinoWebSockets](https://github.com/Links2004/arduinoWebSockets)

# Usage
### 1.Build the connection as the fllowing figure.

![connection_diagram](/03_ESP8266_control_LED_by_websocket/docs/connection_diagram.jpg)

### 2.Install "Required software" in Arduino IDE.
"Required software" is [link](#required-software).

### 3.Write this code on the ESP8266 board with Arduino IDE.
The code to write is "ESP8266_control_LED_by_websocket.ino".

This code supports the access point mode (AP mode) and the station mode (ST mode) as the operation of ESP8266.
The default is AP mode.

If you want to use in ST mode, put your access point information in "myssid" and "mypasswaord" in the code.
If you want to change output pin, change LED_PIN of define value in this program.

The parameters are below. Please change as appropriate for your environment.

| Parameters | Description | Default value |
|:---|:---|:---|
|ssid |The name of SSID in case used AP-Mode. |"ESP8266 Access Point" |
|password |The password in case used AP-Mode. |"esp8266-test" |
|myssid |The name of SSID in case used ST-Mode.  Please change as appropriate for your environment. |"The ssid name of your AP" |
|mypassword |The password in case used ST-Mode.  Please change as appropriate for your environment. |"The password of your AP" |
|LED_PIN|The LED signal output pin on the arduino. |15 |

### 4.Uploade files for webserver to ESP8266.
Use the Arduino ESP8266 filesystem uploader.
It will automatically read / upload data from the source code directory.

The files to upload is below.

| File | Description |
|:---|:---|
|index.html.gz |Specify the screen when accessing HTML |
|main.css.gz |Specify screen design |
|WebSocket.js.gz |Specify the client operation of WebSocket |

All files are compressed with ".gz" to reduce file size.
The code is written to work without compression.

### 5.Turn on the ESP8266 board and configure the wifi settings.

#### In AP-Mode(default): 
ESP8266 waits to connect ST-device.
SSID name is "ESP8266 Access Point", and password is "esp8266-test".
If access is sucsess, the IP address of the access destination is output with "[info] Access destination IP address: XXXX" on serial monitor.

![Capture_connect_AP](/03_ESP8266_control_LED_by_websocket/docs/Capture_connect_AP.png)

※If you change "ssid" and "password" in the code, SSID name and password are changed to input value.

#### In ST-Mode: 
ESP8266 automatically connects to access point.
If access is sucsess, the IP address of the access destination is output with "[info] Access destination IP address: XXXX" on serial monitor.

![Capture_connect_ST](/03_ESP8266_control_LED_by_websocket/docs/Capture_connect_ST.png)

※Because the ESP 8266 only supports 11b/g/n, the access point to connect needs to be connected to the 2.4 GHz band.

### 6.Access the IP address of the access destination from the browser of the cliebt terminal.
If you input the IP address of the access destination in browser search form, you will control LED.

# Licence
[MIT](/03_ESP8266_control_LED_by_websocket/LICENSE)

# Author
[shiguregaki](https://github.com/shiguregaki)

---

Japanese
---

このコードはArduino wifiモジュールのESP8266でWebSocketを使ってLEDをコントロールするサンプルプログラムです。

![demo](/03_ESP8266_control_LED_by_websocket/docs/led_control.gif)

# 概要
WebSocketを使ってArduino側の出力を制御する処理のコーディング練習用に作成しました。

# 必要なこと
## 必要なデバイス
### Arduino wifi module(ESP8266)
日本での購入なら、以下のボード上で動作します。

- [電子太郎 ESP-WROOM-02開発ボード 2.4 GHz Wi-Fiモジュール MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [ＥＳＰ－ＷＲＯＯＭ－０２開発ボード](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer（ESP-WROOM-02開発ボード）](https://www.switch-science.com/catalog/2500/)

### その他部品

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

### (tool) Arduino ESP8266 filesystem uploader
Arduino ESP8266用のファイルアップローダーです。
以下のサイトからダウンロードできます。

[Arduino ESP8266 filesystem uploader](https://github.com/esp8266/arduino-esp8266fs-plugin)

### (library) Links2004/arduinoWebSockets
Arduino向けのWebSocketライブラリーです。
以下のサイトからダウンロードできます。

[Links2004/arduinoWebSockets](https://github.com/Links2004/arduinoWebSockets)

# 使い方
### 1.以下のように回路を組みます。

![connection_diagram](/03_ESP8266_control_LED_by_websocket/docs/connection_diagram.jpg)

### 2.Arduino IDEに"インストールが必要なソフトウェア"をインストールします。
インストールが必要なソフトウェアは[こちら](#インストールが必要なソフトウェア)

### 3.Arduino IDEでESP8266基板に本コードを書き込みます。
書き込むコードは「ESP8266_control_LED_by_websocket.ino」です。

このコードはESP8266の動作として、アクセスポイントモードとステーションモードをサポートしています。
デフォルトではアクセスポイントモードとなります。
ステーションモードで使用したい場合は、コード内にある"myssid"と"mypassword"にご自分のアクセスポイントの情報を入れてください。
また、もし、出力するピンを変えたい場合は、LED_PINの定義値を変更してください。

パラメータは以下です。ご自分の環境に合わせて適宜変更してください。

| パラメータ | 説明 | デフォルト値 |
|:---|:---|:---|
|ssid |AP-Modeで使う場合のAPのSSID |"ESP8266 Access Point" |
|password |AP-Modeで使う場合のAPのパスワード |"esp8266-test" |
|myssid |ST-Modeで使う場合のAPのSSID。ご自分の環境に合わせて設定してください。 |"The ssid name of your AP" |
|mypassword |ST-Modeで使う場合のAPのパスワード。ご自分の環境に合わせて設定してください。 |"The password of your AP" |
|LED_PIN|LEDと接続するESP8266側のGPIOピン番号 |15 |

### 4.ESP8266基板にWebサーバ用ファイルをアップロードします。

Arduino ESP8266 filesystem uploaderを使えば、自動でソースコードがあるディレクトリ内にある/dataを読み取り、アップロードしてくれます。

アップロードするコードは以下です。

| 名称 | 説明 |
|:---|:---|
|index.html.gz |HTMLアクセスしたときの画面を指定 |
|main.css.gz |画面デザインを指定 |
|WebSocket.js.gz |WebSoketのクライアント側の動作を指定 |

ファイルサイズを小さくするために、全ファイルを".gz"で圧縮しています。
圧縮しなくても動くようにコードは書いています。

### 5.ESP8266基板の電源を入れて、wifiの設定をします。
#### AP-Modeの場合(デフォルト):
アクセスポイントにステーション端末がつながるのを待っています。
アクセスポイントのSSIDは「ESP8266 Access Point」、パスワードは「esp8266-test」です。
シリアルモニタでは接続が成功すれば、以下のように「[info] Access destination IP address: XXXX」のようにアクセス先のIPアドレスが出力されます。

![Capture_connect_AP](/03_ESP8266_control_LED_by_websocket/docs/Capture_connect_AP.png)

※もし、コードのssidとpasswordを変えていたら、その値に変わっています。

#### ST-Modeの場合:
自動でアクセスポイントに接続します。
シリアルモニタでは接続が成功すれば、以下のように「[info] Access destination IP address: XXXX」のようにアクセス先のIPアドレスが出力されます。

![Capture_connect_ST](/03_ESP8266_control_LED_by_websocket/docs/Capture_connect_ST.png)

※ESP8266が11b/g/nしかサポートしていないため、接続先のアクセスポイントは2.4GHz帯のものに接続する必要があります。

### 6.クライアント端末のブラウザからアクセス先のIPアドレスにアクセスします。
ブラウザの検索フォームのところに、アクセス先のIPアドレス"X.X.X.X"を入力すればLEDをコントロールする画面が表示されるはずです。

# ライセンス
[MIT](/03_ESP8266_control_LED_by_websocket/LICENSE)

# 作成者
[shiguregaki](https://github.com/shiguregaki)

