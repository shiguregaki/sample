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

- [�d�q���Y ESP-WROOM-02�J���{�[�h 2.4 GHz Wi-Fi���W���[�� MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [�d�r�o�|�v�q�n�n�l�|�O�Q�J���{�[�h](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer�iESP-WROOM-02�J���{�[�h�j](https://www.switch-science.com/catalog/2500/)

### Other parts

| Parts | MPN | Num |
|:---|:---|:---|
|5mm Deluxe Power Red LED  |OSR5CA5B61P |1 |
|120�� resistor |- |1 |
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

��If you change "ssid" and "password" in the code, SSID name and password are changed to input value.

#### In ST-Mode: 
ESP8266 automatically connects to access point.
If access is sucsess, the IP address of the access destination is output with "[info] Access destination IP address: XXXX" on serial monitor.

![Capture_connect_ST](/03_ESP8266_control_LED_by_websocket/docs/Capture_connect_ST.png)

��Because the ESP 8266 only supports 11b/g/n, the access point to connect needs to be connected to the 2.4 GHz band.

### 6.Access the IP address of the access destination from the browser of the cliebt terminal.
If you input the IP address of the access destination in browser search form, you will control LED.

# Licence
[MIT](/03_ESP8266_control_LED_by_websocket/LICENSE)

# Author
[shiguregaki](https://github.com/shiguregaki)

---

Japanese
---

���̃R�[�h��Arduino wifi���W���[����ESP8266��WebSocket���g����LED���R���g���[������T���v���v���O�����ł��B

![demo](/03_ESP8266_control_LED_by_websocket/docs/led_control.gif)

# �T�v
WebSocket���g����Arduino���̏o�͂𐧌䂷�鏈���̃R�[�f�B���O���K�p�ɍ쐬���܂����B

# �K�v�Ȃ���
## �K�v�ȃf�o�C�X
### Arduino wifi module(ESP8266)
���{�ł̍w���Ȃ�A�ȉ��̃{�[�h��œ��삵�܂��B

- [�d�q���Y ESP-WROOM-02�J���{�[�h 2.4 GHz Wi-Fi���W���[�� MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [�d�r�o�|�v�q�n�n�l�|�O�Q�J���{�[�h](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer�iESP-WROOM-02�J���{�[�h�j](https://www.switch-science.com/catalog/2500/)

### ���̑����i

| ���i | �^�� | �� |
|:---|:---|:---|
|5mm Deluxe Power Red LED  |OSR5CA5B61P |1 |
|120����R |- |1 |
|�u���b�h�{�[�h |- |1 |
|�W�����p�[�s��(�I�X-���X) |- |2 |



## �C���X�g�[�����K�v�ȃ\�t�g�E�F�A
### Arduino IDE
�J���p��PC��Arduino IDE���C���X�g�[�����܂��B

[https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)

### (tool) ESP8266 core for Arduino
Arduino IDE�̃f�t�H���g�ݒ�ł́AESP8266�{�[�h�̓T�|�[�g����Ă��܂���B
���̂��߁A**ESP8266 core for Arduino**��Arduino IDE�ɃC���|�[�g����K�v������܂��B

[ESP8266 core for Arduino](https://github.com/esp8266/Arduino)

### (tool) Arduino ESP8266 filesystem uploader
Arduino ESP8266�p�̃t�@�C���A�b�v���[�_�[�ł��B
�ȉ��̃T�C�g����_�E�����[�h�ł��܂��B

[Arduino ESP8266 filesystem uploader](https://github.com/esp8266/arduino-esp8266fs-plugin)

### (library) Links2004/arduinoWebSockets
Arduino������WebSocket���C�u�����[�ł��B
�ȉ��̃T�C�g����_�E�����[�h�ł��܂��B

[Links2004/arduinoWebSockets](https://github.com/Links2004/arduinoWebSockets)

# �g����
### 1.�ȉ��̂悤�ɉ�H��g�݂܂��B

![connection_diagram](/03_ESP8266_control_LED_by_websocket/docs/connection_diagram.jpg)

### 2.Arduino IDE��"�C���X�g�[�����K�v�ȃ\�t�g�E�F�A"���C���X�g�[�����܂��B
�C���X�g�[�����K�v�ȃ\�t�g�E�F�A��[������](#�C���X�g�[�����K�v�ȃ\�t�g�E�F�A)

### 3.Arduino IDE��ESP8266��ɖ{�R�[�h���������݂܂��B
�������ރR�[�h�́uESP8266_control_LED_by_websocket.ino�v�ł��B

���̃R�[�h��ESP8266�̓���Ƃ��āA�A�N�Z�X�|�C���g���[�h�ƃX�e�[�V�������[�h���T�|�[�g���Ă��܂��B
�f�t�H���g�ł̓A�N�Z�X�|�C���g���[�h�ƂȂ�܂��B
�X�e�[�V�������[�h�Ŏg�p�������ꍇ�́A�R�[�h���ɂ���"myssid"��"mypassword"�ɂ������̃A�N�Z�X�|�C���g�̏������Ă��������B
�܂��A�����A�o�͂���s����ς������ꍇ�́ALED_PIN�̒�`�l��ύX���Ă��������B

�p�����[�^�͈ȉ��ł��B�������̊��ɍ��킹�ēK�X�ύX���Ă��������B

| �p�����[�^ | ���� | �f�t�H���g�l |
|:---|:---|:---|
|ssid |AP-Mode�Ŏg���ꍇ��AP��SSID |"ESP8266 Access Point" |
|password |AP-Mode�Ŏg���ꍇ��AP�̃p�X���[�h |"esp8266-test" |
|myssid |ST-Mode�Ŏg���ꍇ��AP��SSID�B�������̊��ɍ��킹�Đݒ肵�Ă��������B |"The ssid name of your AP" |
|mypassword |ST-Mode�Ŏg���ꍇ��AP�̃p�X���[�h�B�������̊��ɍ��킹�Đݒ肵�Ă��������B |"The password of your AP" |
|LED_PIN|LED�Ɛڑ�����ESP8266����GPIO�s���ԍ� |15 |

### 4.ESP8266���Web�T�[�o�p�t�@�C�����A�b�v���[�h���܂��B

Arduino ESP8266 filesystem uploader���g���΁A�����Ń\�[�X�R�[�h������f�B���N�g�����ɂ���/data��ǂݎ��A�A�b�v���[�h���Ă���܂��B

�A�b�v���[�h����R�[�h�͈ȉ��ł��B

| ���� | ���� |
|:---|:---|
|index.html.gz |HTML�A�N�Z�X�����Ƃ��̉�ʂ��w�� |
|main.css.gz |��ʃf�U�C�����w�� |
|WebSocket.js.gz |WebSoket�̃N���C�A���g���̓�����w�� |

�t�@�C���T�C�Y�����������邽�߂ɁA�S�t�@�C����".gz"�ň��k���Ă��܂��B
���k���Ȃ��Ă������悤�ɃR�[�h�͏����Ă��܂��B

### 5.ESP8266��̓d�������āAwifi�̐ݒ�����܂��B
#### AP-Mode�̏ꍇ(�f�t�H���g):
�A�N�Z�X�|�C���g�ɃX�e�[�V�����[�����Ȃ���̂�҂��Ă��܂��B
�A�N�Z�X�|�C���g��SSID�́uESP8266 Access Point�v�A�p�X���[�h�́uesp8266-test�v�ł��B
�V���A�����j�^�ł͐ڑ�����������΁A�ȉ��̂悤�Ɂu[info] Access destination IP address: XXXX�v�̂悤�ɃA�N�Z�X���IP�A�h���X���o�͂���܂��B

![Capture_connect_AP](/03_ESP8266_control_LED_by_websocket/docs/Capture_connect_AP.png)

�������A�R�[�h��ssid��password��ς��Ă�����A���̒l�ɕς���Ă��܂��B

#### ST-Mode�̏ꍇ:
�����ŃA�N�Z�X�|�C���g�ɐڑ����܂��B
�V���A�����j�^�ł͐ڑ�����������΁A�ȉ��̂悤�Ɂu[info] Access destination IP address: XXXX�v�̂悤�ɃA�N�Z�X���IP�A�h���X���o�͂���܂��B

![Capture_connect_ST](/03_ESP8266_control_LED_by_websocket/docs/Capture_connect_ST.png)

��ESP8266��11b/g/n�����T�|�[�g���Ă��Ȃ����߁A�ڑ���̃A�N�Z�X�|�C���g��2.4GHz�т̂��̂ɐڑ�����K�v������܂��B

### 6.�N���C�A���g�[���̃u���E�U����A�N�Z�X���IP�A�h���X�ɃA�N�Z�X���܂��B
�u���E�U�̌����t�H�[���̂Ƃ���ɁA�A�N�Z�X���IP�A�h���X"X.X.X.X"����͂����LED���R���g���[�������ʂ��\�������͂��ł��B

# ���C�Z���X
[MIT](/03_ESP8266_control_LED_by_websocket/LICENSE)

# �쐬��
[shiguregaki](https://github.com/shiguregaki)

