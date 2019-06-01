ESP8266_control_LED_by_websocket
====
This code is a sample program to control the LED using WebSocket in arudino wifi module(ESP8266).

![demo](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/led-control.gif)

# Description
I created this code for coding practice, becouse I would like to have checked about the process to control Arduino's output by using WebSocket.

# Requirement
## arudino wifi module(ESP8266)
If purchased in Japan, it works on the following boards:

- [�d�q���Y ESP-WROOM-02�J���{�[�h 2.4 GHz Wi-Fi���W���[�� MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [�d�r�o�|�v�q�n�n�l�|�O�Q�J���{�[�h](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer�iESP-WROOM-02�J���{�[�h�j](https://www.switch-science.com/catalog/2500/)

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

**4.ESP8266��̓d�������āAwifi�̐ݒ�����܂��B**
In AP mode(default): 

ESP8266 waits to connect ST-device.
SSID name is "ESP8266 Access Point", and password is "esp8266-test".
If access is sucsess, the IP address of the access destination is output with "[info] Access destination IP address: XXXX" on serial monitor.

![Capture_connect_AP](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/Capture-connect-AP.png)

��If you change "ssid" and "password" in the code, SSID name and password are changed to input value.


In ST mode: 

ESP8266 automatically connects to access point.
If access is sucsess, the IP address of the access destination is output with "[info] Access destination IP address: XXXX" on serial monitor.

![Capture_connect_ST](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/Capture-connect-ST.png)

��Because the ESP 8266 only supports 11b/g/n, the access point to connect needs to be connected to the 2.4 GHz band.

# Licence
[MIT](https://github.com/shiguregaki/sample/blob/master/03_ESP8266_control_LED_by_websocket/LICENSE)

# Author
[shiguregaki](https://github.com/shiguregaki)

  

  

==========================================================================

(���{���)

���̃R�[�h��arudino wifi���W���[����ESP8266��WebSocket���g����LED���R���g���[������T���v���v���O�����ł��B

![demo](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/led-control.gif)

# �T�v
WebSocket���g����Arduino���̏o�͂𐧌䂷�鏈���̃R�[�f�B���O���K�p�ɍ쐬���܂����B

# �K�v�Ȃ���
## arudino wifi module(ESP8266)
���{�ł̍w���Ȃ�A�ȉ��̃{�[�h��œ��삵�܂��B

- [�d�q���Y ESP-WROOM-02�J���{�[�h 2.4 GHz Wi-Fi���W���[�� MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [�d�r�o�|�v�q�n�n�l�|�O�Q�J���{�[�h](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer�iESP-WROOM-02�J���{�[�h�j](https://www.switch-science.com/catalog/2500/)

## Arduino IDE
�J���p��PC��Arduino IDE���C���X�g�[�����܂��B

[https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)

## ESP8266 core for Arduino
Arduino IDE�̃f�t�H���g�ݒ�ł́AESP8266�{�[�h�̓T�|�[�g����Ă��܂���B
���̂��߁A**ESP8266 core for Arduino**��Arduino IDE�ɃC���|�[�g����K�v������܂��B

[ESP8266 core for Arduino](https://github.com/esp8266/Arduino)

## Arduino ESP8266 filesystem uploader
Arduino ESP8266�p�̃t�@�C���A�b�v���[�_�[�ł��B
�ȉ��̃T�C�g����_�E�����[�h�ł��܂��B

[Arduino ESP8266 filesystem uploader](https://github.com/esp8266/arduino-esp8266fs-plugin)

# �g����
**1.�ȉ��̂悤�ɉ�H��g�݂܂��B**

![connection_diagram](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/connection-diagram.jpg)


**2.Arduino IDE��ESP8266��ɖ{�R�[�h���������݂܂��B**
�������ރR�[�h�́uESP8266_control_LED_by_websocket.ino�v�ł��B

���̃R�[�h��ESP8266�̓���Ƃ��āA�A�N�Z�X�|�C���g���[�h�ƃX�e�[�V�������[�h���T�|�[�g���Ă��܂��B
�f�t�H���g�ł̓A�N�Z�X�|�C���g���[�h�ƂȂ�܂��B
�X�e�[�V�������[�h�Ŏg�p�������ꍇ�́A�R�[�h���ɂ���"myssid"��"mypassword"�ɂ������̃A�N�Z�X�|�C���g�̏������Ă��������B

�܂��A�����A�o�͂���s����ς������ꍇ�́ALED_PIN�̒�`�l��ύX���Ă��������B

**3.ESP8266���Web�T�[�o�p�t�@�C�����A�b�v���[�h���܂��B**
Arduino ESP8266 filesystem uploader���g���΁A�����Ń\�[�X�R�[�h������f�B���N�g�����ɂ���/data��ǂݎ��A�A�b�v���[�h���Ă���܂��B

**4.ESP8266��̓d�������āAwifi�̐ݒ�����܂��B**
�A�N�Z�X�|�C���g���[�h�̏ꍇ(�f�t�H���g)

�A�N�Z�X�|�C���g�ɃX�e�[�V�����[�����Ȃ���̂�҂��Ă��܂��B
�A�N�Z�X�|�C���g��SSID�́uESP8266 Access Point�v�A�p�X���[�h�́uesp8266-test�v�ł��B
�V���A�����j�^�ł͐ڑ�����������΁A�ȉ��̂悤�Ɂu[info] Access destination IP address: XXXX�v�̂悤�ɃA�N�Z�X���IP�A�h���X���o�͂���܂��B

![Capture_connect_AP](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/Capture-connect-AP.png)

�������A�R�[�h��ssid��password��ς��Ă�����A���̒l�ɕς���Ă��܂��B

�X�e�[�V�������[�h�̏ꍇ

�����ŃA�N�Z�X�|�C���g�ɐڑ����܂��B
�V���A�����j�^�ł͐ڑ�����������΁A�ȉ��̂悤�Ɂu[info] Access destination IP address: XXXX�v�̂悤�ɃA�N�Z�X���IP�A�h���X���o�͂���܂��B

![Capture_connect_ST](https://github.com/shiguregaki/sample/blob/master/03_sample/03_ESP8266_control_LED_by_websocket/docs/Capture-connect-ST.png)

��ESP8266��11b/g/n�����T�|�[�g���Ă��Ȃ����߁A�ڑ���̃A�N�Z�X�|�C���g��2.4GHz�т̂��̂ɐڑ�����K�v������܂��B

# ���C�Z���X
[MIT](https://github.com/shiguregaki/sample/blob/master/03_ESP8266_control_LED_by_websocket/LICENSE)

# �쐬��
[shiguregaki](https://github.com/shiguregaki)

