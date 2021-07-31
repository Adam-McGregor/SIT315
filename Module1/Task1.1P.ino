
const uint8_t LedPin = 8;
const uint8_t PIR = 2;

uint8_t PIRstate = LOW;

void setup()
{
    pinMode(LedPin, OUTPUT);
    pinMode(PIR, INPUT);

    Serial.begin(9600);
}

void loop()
{
    PIRstate = digitalRead(PIR);
    if (PIRstate)
    {
        digitalWrite(LedPin, HIGH);
        Serial.println("Motion Detected");
    }
    else
    {
        digitalWrite(LedPin, LOW);
        Serial.println("No Motion Detected");
    }
    delay(500);
}