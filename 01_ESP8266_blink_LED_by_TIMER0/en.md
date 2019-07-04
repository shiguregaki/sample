This code blinks LED by TIMER0 interrupt on arudino wifi module(ESP8266).

![demo](/docs/led_blinking.gif)

# Description
I created this code for coding practice, becouse I would like to have checked about TIMER0 interrupt on arudino wifi module(ESP8266).

# Requirement
## Required device
### arudino wifi module(ESP8266)
If purchased in Japan, it works on the following boards:

- [ìdéqëæòY ESP-WROOM-02äJî≠É{Å[Éh 2.4 GHz Wi-FiÉÇÉWÉÖÅ[Éã MicroUSB](https://www.amazon.co.jp/gp/product/B071DY11SB/ref=as_li_tl?ie=UTF8&camp=247&creative=1211&creativeASIN=B071DY11SB&linkCode=as2&tag=shiguregaki02-22&linkId=131ae4b9a00ef3b7517980a81ed41d91)  
- [ÇdÇrÇoÅ|ÇvÇqÇnÇnÇlÅ|ÇOÇQäJî≠É{Å[Éh](http://akizukidenshi.com/catalog/g/gK-12236/)
- [ESPr DeveloperÅiESP-WROOM-02äJî≠É{Å[ÉhÅj](https://www.switch-science.com/catalog/2500/)

### Other parts

| Parts | MPN | Num |
|:---|:---|:---|
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

![circuit_diagram](/docs/circuit_diagram_frizing.PNG)

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
[MIT](/LICENSE)

# Author
[shiguregaki](https://github.com/shiguregaki)
