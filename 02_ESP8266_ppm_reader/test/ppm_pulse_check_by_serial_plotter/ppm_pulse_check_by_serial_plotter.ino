/* PPM Signalをシリアルプロッタで確認するためのプログラム */
/* This program is to check PPM signal by serial plotter. */

/* Set these parameters to your environment. */
#define PPM_READE_PIN                           5           // set PPM signal input pin on the arduino
#define SWEEP_TIME                              10          // set sweep time(μs)

int val = 0;

void setup() {
    Serial.begin(115200);
    pinMode(PPM_READE_PIN, INPUT);
}

void loop() {
    val = digitalRead(PPM_READE_PIN);
    Serial.println(val);
    delayMicroseconds(SWEEP_TIME);
}
