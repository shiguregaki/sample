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

- [�d�q���Y ESP-WROOM-02�J���{�[�h 2.4 GHz Wi-Fi���W���[�� MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [�d�r�o�|�v�q�n�n�l�|�O�Q�J���{�[�h](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer�iESP-WROOM-02�J���{�[�h�j](https://www.switch-science.com/catalog/2500/)

### Other parts

| Parts | MPN | Num |
|:---|:---|:---|
|5mm Deluxe Power Red LED  |OSR5CA5B61P |1 |
|120�� resistor |- |1 |
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

���̃R�[�h��Arduino wifi���W���[����ESP8266��LED�`�J��TIMER0���荞�݂Ŏ��s������̂ł��B

![demo](/01_ESP8266_blink_LED_by_TIMER0/docs/led_blinking.gif)

# �T�v
Arduino wifi���W���[����ESP8266��TIMER0���荞�݂̃R�[�f�B���O���K�p�ɍ쐬���܂����B

# �K�v�Ȃ���
## �K�v�ȃf�o�C�X
### Arduino wifi module(ESP8266)
���{�ł̍w���Ȃ�A�ȉ��̃{�[�h��œ��삵�܂��B

- [�d�q���Y ESP-WROOM-02�J���{�[�h 2.4 GHz Wi-Fi���W���[�� MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [�d�r�o�|�v�q�n�n�l�|�O�Q�J���{�[�h](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer�iESP-WROOM-02�J���{�[�h�j](https://www.switch-science.com/catalog/2500/)

### ���̑��̕��i

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

# �g����
### 1.�ȉ��̂悤�ɉ�H��g�݂܂��B

![circuit_diagram](/01_ESP8266_blink_LED_by_TIMER0/docs/circuit_diagram_frizing.PNG)

### 2.Arduino IDE��"�C���X�g�[�����K�v�ȃ\�t�g�E�F�A"���C���X�g�[�����܂��B
�C���X�g�[�����K�v�ȃ\�t�g�E�F�A��[������](#�C���X�g�[�����K�v�ȃ\�t�g�E�F�A)

### 3.Arduino IDE��ESP8266��ɖ{�R�[�h���������݂܂��B
�������ރR�[�h�́uESP8266_blink_LED_by_TIMER0.ino�v�ł��B

�p�����[�^�͈ȉ��ł��B�������̊��ɍ��킹�ēK�X�ύX���Ă��������B

| �p�����[�^ | ���� | �f�t�H���g�l |
|:---|:---|:---|
|CPU_MHZ |ESP8266��CPU���g���B�������̊��ɍ��킹�Đݒ肵�Ă��������B |160 |
|blinkInterval |LED�����点��Ԋu(�P��:�b) |1 |
|ledPin |LED�Ɛڑ�����ESP8266����GPIO�s���ԍ� |5 |

### 4.ESP8266��̓d��������΁A������LED���`�J�`�J���܂��B

# ���C�Z���X
[MIT](/01_ESP8266_blink_LED_by_TIMER0/LICENSE)

# �쐬��
[shiguregaki](https://github.com/shiguregaki)

