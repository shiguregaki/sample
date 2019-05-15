/* 一定期間だけ、PPM Signalをシリアルモニタに出力 */
/* This program is to get PPM signal for the short period by serial monitor. */

/* Set these parameters to your environment. */
#define PPM_READE_PIN                           5           // set PPM signal input pin on the arduino
#define SWEEP_TIME                              50          // set sweep time(μs)
#define MAX_WATCHING_COUNT                      5000     

int val = 0;
int ppm[MAX_WATCHING_COUNT];
int sigIndex;
bool first_judge;

void setup() {
    Serial.begin(115200);
    pinMode(PPM_READE_PIN, INPUT);
    sigIndex = 0;
    first_judge = true;
    for(int i; i < MAX_WATCHING_COUNT; i++){
        ppm[i] = 0;
    }
}

void loop() {
    if(first_judge){
        Serial.println("daley start");
        Serial.println("wait 5seconds, operate your transmitter.");
        delay(5*1000);
        first_judge = false;
        Serial.println("daley finish");
    }
    ppm[sigIndex] = digitalRead(PPM_READE_PIN);
    if(!(sigIndex < MAX_WATCHING_COUNT)){
        Serial.println("dasplay PPM singal");
        delay(10);
        for(int i; i < MAX_WATCHING_COUNT; i++){
            Serial.println(ppm[i]);
        }
        sigIndex = 0;
        Serial.println("wait 60seconds, copy your signal data.");
        delay(60*1000);
        first_judge = true;
        Serial.println("Go to next...");
    }
    sigIndex++;
    delayMicroseconds(SWEEP_TIME);
}
