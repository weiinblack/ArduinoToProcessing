int value = 0;
int timeStamp;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(millis() - timeStamp >50){  
    sensorRead();
    Serial.println(value);
  }
}

void sensorRead(){
  //value = map(analogRead(0, 0, 1023, 0, 255);
  timeStamp = millis();
  value++;
  Serial.println(value);
}
