const int portToUse = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(portToUse, OUTPUT);
}

void loop() {
  turnOnFor(1000);
  digitalWrite(portToUse, LOW);
  delay(1000);
}

void turnOnFor(int time){
  digitalWrite(portToUse, HIGH);
  delay(time);
}
