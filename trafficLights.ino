/*
  4 - Way Traffic Lights System
  Author: Andyka Zefanya Bramantyo
  
  Yellow Time: 2 seconds (3-time blinking)
  Green Time: 5 seconds
*/


int intersectionSouth[] = {13, 12, 11};
int intersectionWest[] = {10, 9, 8};
int intersectionNorth[] = {7, 6, 5};
int intersectionEast[] = {4, 3, 2};

void setup() {
  for (int i = 2; i <= 13; i++) 
    pinMode(i, OUTPUT);
}

void loop() {
  setTrafficLight(intersectionNorth);
  setTrafficLight(intersectionEast);
  setTrafficLight(intersectionSouth);
  setTrafficLight(intersectionWest);
}

void setTrafficLight(int pin[]) {
  intersectionRed();
  delay(1500);

  digitalWrite(pin[0], LOW); 
  digitalWrite(pin[2], HIGH); 
  delay(5000);               

  digitalWrite(pin[2], LOW); 
  for (int i = 0; i < 3; i++){
    digitalWrite(pin[1], HIGH);
    delay(333);
    digitalWrite(pin[1], LOW);
    delay(333);
  }

  digitalWrite(pin[1], LOW);  
  digitalWrite(pin[0], HIGH); 
}

void intersectionRed() {
  digitalWrite(13, HIGH); 
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);  
  digitalWrite(4, HIGH);
}