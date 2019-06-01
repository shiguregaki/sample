ESP8266_control_LED_by_websocket
====
This code is a sample program to control the LED using WebSocket in arudino wifi module(ESP8266).

![demo](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/led-control.gif)

# Description
I created this code for coding practice, becouse I would like to have checked about the process to control Arduino's output by using WebSocket.

# Requirement
## arudino wifi module(ESP8266)
If purchased in Japan, it works on the following boards:

- [電子太郎 ESP-WROOM-02開発ボード 2.4 GHz Wi-Fiモジュール MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [ＥＳＰ－ＷＲＯＯＭ－０２開発ボード](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer（ESP-WROOM-02開発ボード）](https://www.switch-science.com/catalog/2500/)

## Arduino IDE
Install Arduino IDE on your development PC.

[https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)

## ESP8266 core for Arduino
The default configuration of the Arduino IDE does not support the ESP 8266 board.
Therefore, it is necessary to import **ESP8266 core for Arduino** into Arduino IDE.

[ESP8266 core for Arduino](https://github.com/esp8266/Arduino)

## Arduino ESP8266 filesystem uploader
It is file updater for Arduino ESP8266.
You can download it following URL.

[Arduino ESP8266 filesystem uploader](https://github.com/esp8266/arduino-esp8266fs-plugin)

# Usage
**1.Build the connection as the fllowing figure.**

![connection_diagram](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/connection-diagram.jpg)


**2.Write this code on the ESP8266 board with Arduino IDE.**
The code to write is "ESP8266_control_LED_by_websocket.ino".

This code supports the access point mode (AP mode) and the station mode (ST mode) as the operation of ESP8266.
The default is AP mode.

If you want to use in ST mode, put your access point information in "myssid" and "mypasswaord" in the code.

If you want to change output pin, change LED_PIN of define value in this program.

**3.Uploade files for webserver to ESP8266.**
Use the Arduino ESP8266 filesystem uploader.
It will automatically read / upload data from the source code directory.

**4.ESP8266基板の電源を入れて、wifiの設定をします。**
In AP mode(default): 

ESP8266 waits to connect ST-device.
SSID name is "ESP8266 Access Point", and password is "esp8266-test".
If access is sucsess, the IP address of the access destination is output with "[info] Access destination IP address: XXXX" on serial monitor.

![Capture_connect_AP](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/Capture-connect-AP.png)

※If you change "ssid" and "password" in the code, SSID name and password are changed to input value.


In ST mode: 

ESP8266 automatically connects to access point.
If access is sucsess, the IP address of the access destination is output with "[info] Access destination IP address: XXXX" on serial monitor.

![Capture_connect_ST](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/Capture-connect-ST.png)

※Because the ESP 8266 only supports 11b/g/n, the access point to connect needs to be connected to the 2.4 GHz band.

# Licence
[MIT](https://github.com/shiguregaki/sample/blob/master/03_ESP8266_control_LED_by_websocket/LICENSE)

# Author
[shiguregaki](https://github.com/shiguregaki)

  

  

==========================================================================

(日本語版)

このコードはarudino wifiモジュールのESP8266でWebSocketを使ってLEDをコントロールするサンプルプログラムです。

![demo](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/led-control.gif)

# 概要
WebSocketを使ってArduino側の出力を制御する処理のコーディング練習用に作成しました。

# 必要なこと
## arudino wifi module(ESP8266)
日本での購入なら、以下のボード上で動作します。

- [電子太郎 ESP-WROOM-02開発ボード 2.4 GHz Wi-Fiモジュール MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [ＥＳＰ－ＷＲＯＯＭ－０２開発ボード](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer（ESP-WROOM-02開発ボード）](https://www.switch-science.com/catalog/2500/)

## Arduino IDE
開発用のPCにArduino IDEをインストールします。

[https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)

## ESP8266 core for Arduino
Arduino IDEのデフォルト設定では、ESP8266ボードはサポートされていません。
そのため、**ESP8266 core for Arduino**をArduino IDEにインポートする必要があります。

[ESP8266 core for Arduino](https://github.com/esp8266/Arduino)

## Arduino ESP8266 filesystem uploader
Arduino ESP8266用のファイルアップローダーです。
以下のサイトからダウンロードできます。

[Arduino ESP8266 filesystem uploader](https://github.com/esp8266/arduino-esp8266fs-plugin)

# 使い方
**1.以下のように回路を組みます。**

![connection_diagram](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/connection-diagram.jpg)


**2.Arduino IDEでESP8266基板に本コードを書き込みます。**
書き込むコードは「ESP8266_control_LED_by_websocket.ino」です。

このコードはESP8266の動作として、アクセスポイントモードとステーションモードをサポートしています。
デフォルトではアクセスポイントモードとなります。
ステーションモードで使用したい場合は、コード内にある"myssid"と"mypassword"にご自分のアクセスポイントの情報を入れてください。

また、もし、出力するピンを変えたい場合は、LED_PINの定義値を変更してください。

**3.ESP8266基板にWebサーバ用ファイルをアップロードします。**
Arduino ESP8266 filesystem uploaderを使えば、自動でソースコードがあるディレクトリ内にある/dataを読み取り、アップロードしてくれます。

**4.ESP8266基板の電源を入れて、wifiの設定をします。**
アクセスポイントモードの場合(デフォルト)

アクセスポイントにステーション端末がつながるのを待っています。
アクセスポイントのSSIDは「ESP8266 Access Point」、パスワードは「esp8266-test」です。
シリアルモニタでは接続が成功すれば、以下のように「[info] Access destination IP address: XXXX」のようにアクセス先のIPアドレスが出力されます。

![Capture_connect_AP](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/Capture-connect-AP.png)

※もし、コードのssidとpasswordを変えていたら、その値に変わっています。

ステーションモードの場合

自動でアクセスポイントに接続します。
シリアルモニタでは接続が成功すれば、以下のように「[info] Access destination IP address: XXXX」のようにアクセス先のIPアドレスが出力されます。

![Capture_connect_ST](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/Capture-connect-ST.png)

※ESP8266が11b/g/nしかサポートしていないため、接続先のアクセスポイントは2.4GHz帯のものに接続する必要があります。

# ライセンス
[MIT](https://github.com/shiguregaki/sample/blob/master/03_ESP8266_control_LED_by_websocket/LICENSE)

# 作成者
[shiguregaki](https://github.com/shiguregaki)

