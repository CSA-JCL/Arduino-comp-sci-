const int kPinLed = 1;
const int kPinLed2 = 2;
const int kPinLed3 = 3;
const int kPinLed4 = 4;
const int kPinLed5 = 5;
const int kPinLed6 = 6;
const int kPinLed7 = 7;
const int kPinLed8 = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(kPinLed, OUTPUT);
pinMode(kPinLed2, OUTPUT);
pinMode(kPinLed3, OUTPUT);
pinMode(kPinLed4, OUTPUT);
pinMode(kPinLed5, OUTPUT);
pinMode(kPinLed6, OUTPUT);
pinMode(kPinLed7, OUTPUT);
pinMode(kPinLed8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(kPinLed, HIGH);
delay(10);
digitalWrite(kPinLed, LOW);
delay(10);
digitalWrite(kPinLed2, HIGH);
delay(10);
digitalWrite(kPinLed2, LOW);
delay(10);
digitalWrite(kPinLed3, HIGH);
delay(10);
digitalWrite(kPinLed3, LOW);
delay(10);
digitalWrite(kPinLed4, HIGH);
delay(10);
digitalWrite(kPinLed4, LOW);
delay(10);
digitalWrite(kPinLed5, HIGH);
delay(10);
digitalWrite(kPinLed5, LOW);
delay(10);
digitalWrite(kPinLed6, HIGH);
delay(10);
digitalWrite(kPinLed6, LOW);
delay(10);
digitalWrite(kPinLed7, HIGH);
delay(10);
digitalWrite(kPinLed7, LOW);
delay(10);
digitalWrite(kPinLed8, HIGH);
delay(10);
digitalWrite(kPinLed8, LOW);
delay(10);
}
