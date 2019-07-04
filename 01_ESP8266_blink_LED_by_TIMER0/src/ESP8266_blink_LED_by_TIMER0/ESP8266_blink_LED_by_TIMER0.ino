
/* Set these parameters to your environment. */
#define CPU_MHZ 160
#define blinkInterval 1 //set interval time to blink LED (seconds)
#define ledPin 5 //set LED signal output pin on the arduino


bool ledState = false;

void led_ISR (void) {
  if (!ledState) {
    digitalWrite(ledPin, HIGH);
    ledState = true;
  } else {
    digitalWrite(ledPin, LOW);
    ledState = false;
  }
  timer0_write(ESP.getCycleCount() + 1000000L * blinkInterval * CPU_MHZ);
  Serial.println("led_ISR");
}

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  noInterrupts();
  timer0_isr_init();
  timer0_attachInterrupt(led_ISR);
  timer0_write(ESP.getCycleCount() + 1000000L * blinkInterval * CPU_MHZ);
  interrupts();
}

void loop() {}
