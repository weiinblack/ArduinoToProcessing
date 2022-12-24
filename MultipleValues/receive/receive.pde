import processing.serial.*;
Serial myPort;
String receiveStr;
int values[] = {0,0,0};

void setup() {
  size(200,200);
  for(int i = 0 ; i<Serial.list().length ; i++){
    println(Serial.list()[i]); 
  }
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);
  myPort.clear();
}

void draw() {
  background(values[0],values[1],values[2]);
  if(myPort.available() >0){
    try{
      receiveStr = myPort.readStringUntil('\n'); 
      if(receiveStr !=null){
        String tempArray[] = split(receiveStr.trim(),',');
        if(tempArray.length == 3)
          values = int(tempArray);
      }
    }catch(Exception e){
        println("error:" +e);
    }
  }
  println(values[0],values[1],values[2]);
}
