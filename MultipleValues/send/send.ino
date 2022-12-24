int values[3] = {0,0,0};
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
  values[0] = random(0,256);
  values[1] = random(0,256);
  values[2] = random(0,256);
  //values[0] = map(analogRead(0),0, 1023, 0, 255);
  //values[1] = map(analogRead(1),0, 1023, 0, 255);
  //values[2] = map(analogRead(2),0, 1023, 0, 255);

  Serial.print(values[0]);
  Serial.print(',');
  Serial.print(values[1]);
  Serial.print(',');
  Serial.println(values[2]);
  //Serial.print(values[2]);
  //Serial.print('\r');
  //Serial.print('\n');
}
