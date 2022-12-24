import processing.serial.*;
Serial myPort;
String receiveStr;
int value;

void setup() {
  size(200,200);
  for(int i = 0 ; i<Serial.list().length ; i++){
    println(Serial.list()[i]); 
  }
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);

}

void draw() {
  background(value);
  if(myPort.available() >0){
    try{
      receiveStr = myPort.readStringUntil('\n'); 
      if(receiveStr !=null)
        value = Integer.valueOf(receiveStr.trim());
    }catch(Exception e){
        println("error:" +e);
    }
  }
  println(value);

}
