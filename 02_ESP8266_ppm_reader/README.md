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

- [�d�q���Y ESP-WROOM-02�J���{�[�h 2.4 GHz Wi-Fi���W���[�� MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [�d�r�o�|�v�q�n�n�l�|�O�Q�J���{�[�h](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer�iESP-WROOM-02�J���{�[�h�j](https://www.switch-science.com/catalog/2500/)

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

���̃R�[�h��Arduino wifi���W���[����ESP8266��PPM�l��ǂݎ�邽�߂̂��̂ł��B
PPM�l�̕\����Arduino�̃V���A�����j�^�ōs���܂��B

![description](/02_ESP8266_ppm_reader/docs/description.png)

# �T�v
Arduino wifi���W���[����ESP8266�Ń��W�R���ƊE�ł悭�g����PPM�l��ǂ݂����Ǝv���A
���̃R�[�h���쐬���܂����B

# �K�v�Ȃ���
## �K�v�ȃf�o�C�X
### PPM signal �������u
PPM�𔭐�������f�o�C�X�͂������񂠂�Ǝv���܂��B
���́A[FrSky 8CH PWM PPM SBUS Micro Receiver](http://helimonster.jp/?pid=116238271)���g�p���܂����B
����͎�M�@�Ȃ̂ŁA�ʓr���M�@(FrSky DHT DFT DJT�Ȃ�)���K�v�ƂȂ�܂��B

### Arduino wifi module(ESP8266)
���{�ł͈ȉ��̃{�[�h�œ��삷��Ǝv���܂��B

- [�d�q���Y ESP-WROOM-02�J���{�[�h 2.4 GHz Wi-Fi���W���[�� MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [�d�r�o�|�v�q�n�n�l�|�O�Q�J���{�[�h](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr Developer�iESP-WROOM-02�J���{�[�h�j](https://www.switch-science.com/catalog/2500/)

### ���̑����i

| ���i | �^�� | �� |
|:---|:---|:---|
|�W�����p�[�R�[�h(�͂񂾕t��-���X) |- |3 |

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

![wiring_diagram](/02_ESP8266_ppm_reader/docs/wiring_diagram.png)

output�̃s���͕ύX�\�ł��B�v���O��������**PPM_READE_PIN**�̒�`�l��ύX���Ă��������B

### 2.Arduino IDE��"�C���X�g�[�����K�v�ȃ\�t�g�E�F�A"���C���X�g�[�����܂��B
�C���X�g�[�����K�v�ȃ\�t�g�E�F�A��[������](#�C���X�g�[�����K�v�ȃ\�t�g�E�F�A)

### 3.PPM�M���̎d�l���m�F(UP pulse, DOWN pulse)
PPM�M���ɂ͈ȉ���2�p�^�[��������̂ŁA�ǂ��炩���m�F���܂��B

![pulse_type](/02_ESP8266_ppm_reader/docs/pulse_type.png)

[ppm_pulse_check_by_serial_plotter.ino](/02_ESP8266_ppm_reader/test/ppm_pulse_check_by_serial_plotter)
���������߂΁A�V���A���v���b�^�Ńp���X��\���ł��܂��B

PPM�M���̎�ނ�����������A�v���O��������**TYPE_OF_PULSE_IS_RISING**�̒�`�l��ύX���Ă��������B

### 4.Arduino IDE��ESP8266��ɖ{�R�[�h���������݂܂��B
�������ރR�[�h�́uESP8266_ppm_reader.ino�v�ł��B

�p�����[�^�͈ȉ��ł��B�������̊��ɍ��킹�ēK�X�ύX���Ă��������B

| �p�����[�^ | ���� | �f�t�H���g�l |
|:---|:---|:---|
|CPU_MHZ |ESP8266��CPU���g���B�������̊��ɍ��킹�Đݒ肵�Ă��������B |160 |
|PPM_READE_PIN |��M�@�Ɛڑ�����ESP8266����GPIO�s���ԍ� |5 |
|TYPE_OF_PULSE_IS_RISING |�p���X�̌������w��(true = UP pulse, false = DOWN pulse) |false |

### 5.ESP8266��̓d��������΁A�V���A�����j�^��PPM�l���\������܂��B

# ���C�Z���X
[MIT](/02_ESP8266_ppm_reader/LICENSE)

# �쐬��
[shiguregaki](https://github.com/shiguregaki)

