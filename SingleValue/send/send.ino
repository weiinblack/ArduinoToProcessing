int value = 0;
int timeStamp = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(millis() - timeStamp > 50){
    sensorRead();
    timeStamp = millis();
  }
}

void sensorRead(){
  //value = map(analogRead(0),0, 1023, 0, 255);
  value++;
  Serial.println(value%256);
  //Serial.print(value%256);
  //Serial.print('\r');
  //Serial.print('\n');
}
