int pin2 = 2; // all of this is defining variables
const int time = 250;
const int red = 10;
const int blue = 9;
int time1 = 300;
int time2 = 900;
void small(int x, int y) // Defines a function for the small lines of SOS
 { 
   digitalWrite(red, HIGH);
   delay(time1);
   digitalWrite(red, LOW);
   delay(time1);
   digitalWrite(red, HIGH);
   delay(time1);
   digitalWrite(red, LOW);
   delay(time1);
   digitalWrite(red, HIGH);
   delay(time1);
   digitalWrite(red, LOW);
   delay(time1);
 }
 void Long(int x, int y) //Defines a function for the long lines of sos
 {
    digitalWrite(red, HIGH);
    delay(time2);
    digitalWrite(red, LOW);
    delay(time2);
    digitalWrite(red, HIGH);
    delay(time2);
    digitalWrite(red, LOW);
    delay(time2);
    digitalWrite(red, HIGH);
    delay(time2);
    digitalWrite(red, LOW);
    delay(time2);
 }
void setup() {




  pinMode(2, INPUT); //Puts pin 2 into input mode

}


void loop() {

  if (digitalRead(2) == LOW) { //checks if power is off 

    digitalWrite(red, LOW); //sets red to off and blue to on 
    digitalWrite(blue, HIGH);
  }
  if (digitalRead(2) == HIGH) { //checks if power is on 
    digitalWrite(blue, LOW); //turns blue off 

    small(red,time1);
    Long(red,time2); //runs the sos thing 
    small(red,time1);
   
  }
 
  /* int newPin = 0;
    int oldPin = 0;
    int bounce1 = digitalRead(switchPin);
    delay(25);
    int bounce2 = digitalRead(switchPin);

    while ((bounce1==bounce2) && (bounce1 == LOW)) {
    oldPin = newPin;
    newPin++;

    if (newPin ==3) newPin = 0;

    digitalWrite(rgb[oldPin], HIGH);
    delay(time);
    digitalWrite(rgb[newPin], HIGH);
    delay(time);
    digitalWrite(rgb[oldPin], LOW);

    if (newPin == 0) {
      for(int i=0; i<3; i++) digitalWrite(rgb[i], HIGH);
      delay(time);
      for (int i=0; i<3; i++) digitalWrite(rgb[i], LOW);
    }
    else {
      digitalWrite(rgb[0], HIGH);
    }
    bounce1=digitalRead(switchPin);
    delay(25);
    bounce2 = digitalRead(switchPin);

    }
    for (int i=0; i<3; i++) digitalWrite(rgb[i], LOW);
    delay(25);
  */
  ;
}
