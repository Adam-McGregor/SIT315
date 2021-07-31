
const uint8_t LedPin = 8;
const uint8_t PIR = 2;

uint8_t PIRstate = LOW;

void setup()
{
    pinMode(LedPin, OUTPUT);
    pinMode(PIR, INPUT);
}

void loop()
{
    PIRstate = digitalRead(PIR);
    if (PIRstate)
    {
        digitalWrite(LedPin, HIGH);
    }
    else
    {
        digitalWrite(LedPin, LOW);
    }
}