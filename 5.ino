const int speakerPin = 13; 
const int speakerPin2 = 11; //sets up variables
const int sensorPin = 2;
const int sensorPin2 = 3;
/*
const int highChirp = 20; 
const int lowChirp = 14;

const int chirpCycle = 70; 
const int chirpPause = 8; 
const int numChirps = 10; 
const int midChirp = 150; 
const int skittish = 5000;
*/

void setup() { 
  pinMode(speakerPin, OUTPUT);  //puts the pins into their given modes
  pinMode(speakerPin2, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(sensorPin2, INPUT);
  
}

void loop() {
while (digitalRead(sensorPin) == LOW){ //sets the code to run when the button is pressed
/*   for (int i=1; i<=numChirps; i++) {

for (int j=1; j<=highChirp; j++) { 
    digitalWrite(speakerPin2, HIGH); 
    delayMicroseconds(chirpCycle * 10); 
    digitalWrite(speakerPin2, LOW); 
    delayMicroseconds(1000-(chirpCycle * 10));

}
*/
   digitalWrite(speakerPin, LOW);

//  if (i == numChirps/2) delay(midChirp); 
//   else delay(lowChirp);

}
	digitalWrite(speakerPin, HIGH);
	
//  if ((random(chirpPause)) == 1) delay(random(200,1000)); 
//  else delay(midChirp); } 
//delay(skittish);



while (digitalRead(sensorPin2) == LOW){ 
/*   for (int i=1; i<=numChirps; i++) {

for (int j=1; j<=highChirp; j++) { 
    digitalWrite(speakerPin, HIGH); 
    delayMicroseconds(chirpCycle * 10); 
    digitalWrite(speakerPin, LOW); 
    delayMicroseconds(1000-(chirpCycle * 10));

}
*/
   digitalWrite(speakerPin2, LOW);

//   if (i == numChirps/2) delay(midChirp); 
//   else delay(lowChirp);

}
digitalWrite(speakerPin2, HIGH);
//  if ((random(chirpPause)) == 1) delay(random(200,1000)); 
//  else delay(midChirp); } 
//delay(skittish);

}
