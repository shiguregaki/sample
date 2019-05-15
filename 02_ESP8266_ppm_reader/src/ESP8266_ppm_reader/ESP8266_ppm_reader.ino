
/* Set these parameters to your environment. */
#define PPM_READE_PIN                           5           // set PPM signal input pin on the arduino
#define TYPE_OF_PULSE_IS_RISING                 false       // true is RISING(UP pulse), false is FALLING(DOWN pulse)

#define CPU_MHZ                                 80          // set cpu frequency(MHz)
#define PPM_IN_MIN_SYNC_PULSE_INTERVAL_US       2700        // set the pulse interval for sync(microseconds)
#define PPM_IN_MIN_CHANNEL_PULSE_INTERVAL_US    750         // set the min pluse interval for ch(microseconds)
#define PPM_IN_MAX_CHANNEL_PULSE_INTERVAL_US    2250        // set the max pluse interval for ch(microseconds)
#define PPM_IN_MIN_CHANNELS_NUM                 4           // set the min CH number
#define PPM_IN_MAX_CHANNELS_NUM                 8           // set the max CH number
#define ULTIMER_PERIOD                          0xFFFFFFFF  // set the timer period(unsigned long, 2^32-1)
#define PPM_TIMEOUT                             0           // set the value when ppm is NOT received

int ppm[PPM_IN_MAX_CHANNELS_NUM];
volatile unsigned char pulseIndex=0;
volatile char channelsNum=0;
volatile unsigned long nextCycleCount=0;
volatile unsigned long deltaTime=0;
volatile unsigned long previousCycleCount=0;


void setup(){
    Serial.begin(115200);
    pinMode(PPM_READE_PIN, INPUT);
    if(TYPE_OF_PULSE_IS_RISING){
        attachInterrupt(digitalPinToInterrupt(PPM_READE_PIN), ppmISR, RISING);
    }else{
        attachInterrupt(digitalPinToInterrupt(PPM_READE_PIN), ppmISR, FALLING);
    }
}

void ppmISR(void){
    static boolean ppmTrackingState = false;
    unsigned long currentCycleCount = ESP.getCycleCount();

    /* get deltatime */
    if(currentCycleCount > previousCycleCount){
        deltaTime = (currentCycleCount - previousCycleCount) / CPU_MHZ;
    }else{
        Serial.println("[WAR] Unsigned long timer is overflow");
        deltaTime = ( ULTIMER_PERIOD - (previousCycleCount - currentCycleCount) ) / CPU_MHZ;
    }
    previousCycleCount = currentCycleCount;
    /* Judge sync pulse */
    if(deltaTime > PPM_IN_MIN_SYNC_PULSE_INTERVAL_US){
        if(pulseIndex >= PPM_IN_MIN_CHANNELS_NUM && pulseIndex <= PPM_IN_MAX_CHANNELS_NUM){
            channelsNum = pulseIndex;
        }else{
            Serial.println("[WAR] Detect invalid frames, therefore this frame was discarded.");
            ppmTrackingState = false;
        }

        /* check last frame */
        if(ppmTrackingState){
            /* display ppm signal */
            Serial.println("===== PPM SIGNAL =====");
            for(int i = 0; i < channelsNum; i++){
                Serial.print("CH");Serial.print(i+1);Serial.print(" : ");Serial.print(ppm[i]);Serial.println("");
            }
            for(int i = channelsNum; i < PPM_IN_MAX_CHANNELS_NUM; i++){
                Serial.print("CH");Serial.print(i+1);Serial.print(" : ");Serial.print(PPM_TIMEOUT);Serial.println("");
            }
            Serial.println("======================");
        }

        /* prepare start frame */
        ppmTrackingState = true;
        pulseIndex = 0;
    }else{
        /* check valid ppm value */
        if(ppmTrackingState 
           && deltaTime > PPM_IN_MIN_CHANNEL_PULSE_INTERVAL_US
           && deltaTime < PPM_IN_MAX_CHANNEL_PULSE_INTERVAL_US
           && pulseIndex < PPM_IN_MAX_CHANNELS_NUM){
                ppm[pulseIndex] = deltaTime;
                pulseIndex++;
        }else{
            ppmTrackingState = false;
            for (int i = 0; i < PPM_IN_MAX_CHANNELS_NUM; i++) {
                ppm[i] = PPM_TIMEOUT;
            }
        }
    }
}

void loop() {}
