int timeOn;
bool activity = false;
bool relax = false;
//int shiftConst = 36;
void setup() {
  //signal
  pinMode(PB3, OUTPUT);
  //green LED
  pinMode(PB0, OUTPUT);
  //yellow LED
  pinMode(PB1, OUTPUT);
  //red LED
  pinMode(PB2, OUTPUT);
  //timeOn = millis();
  //digitalWrite(PB3, HIGH);
  pinMode(PB4, INPUT);
  digitalWrite(PB0, HIGH);
}
void loop() {
//  if (millis() - timeOn > 37500){
//  digitalWrite(PB3, LOW);
//  timeOn = millis();
//  }
  if (digitalRead(PB4) == LOW) activity = true;
  
  if (activity == true){
    digitalWrite(PB0, LOW);
    digitalWrite(PB2, HIGH);
    digitalWrite(PB3, HIGH);
    delay(650);
    delay(650);
    digitalWrite(PB2, LOW);
    digitalWrite(PB3, LOW);
    relax = true;
  }

  if (relax == true){
    activity = false;
    digitalWrite(PB1, HIGH);
    delay(650);
    delay(650);    
    delay(650);
    delay(650);
    relax = false;
    digitalWrite(PB1, LOW);
    digitalWrite(PB0, HIGH);
  }
}
