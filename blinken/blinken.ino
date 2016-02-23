const int portToUse = 13;
const int WAIT = 500;
const int SCALEDOWN = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(portToUse, OUTPUT);
}

void loop() {
  int steps[] = {500, 500, 500, 1000, 1000, 1000, 500, 500, 500};
  for(int i = 0; i < sizeof(steps) / sizeof(int); i++)
  {
   turnOnFor(steps[i]);
  }
  delay(4000 / SCALEDOWN);
}

void turnOnFor(int time){
  
  digitalWrite(portToUse, HIGH);
  delay(time / SCALEDOWN);
  digitalWrite(portToUse, LOW);
  delay(WAIT / SCALEDOWN);
}
