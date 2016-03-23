import processing.serial.*;


Serial myPort;  // Create object from Serial class
String val;     // Data received from the serial port
String val_;

//there is a ball that moves in an arc along the bottom, increasing in size. back and forth

float dir; //this is which way the thing goes
float speed; //how fast it goes
int high = 700; // how high the arc is
float posX = 5;
float posY = 799;
float accX = 1;
float accY = -1;
int w = 800;
int h = 0;
float deleteThisLater=991.1;

void setup(){
 size(800,800);
 background(0);
 
 String portName = Serial.list()[1]; //change the 0 to a 1 or 2 etc. to match your port
myPort = new Serial(this, portName, 19200); 
}


//the ball starts at 0, 800. 

void draw(){
  
  if ( myPort.available() > 0) 
  {  // If data is available,
  val = myPort.readStringUntil('\n');  // read it and store it in val
  } 
if (val != val_){
  println(val_); //print it out in the console
}

  noStroke();
fill (50, 50,255);
float v1 = 4;
float v2 = 4;


if (val == val_){
  float v = random(1, 10);
    fill(254/v,0 , 0);
    rect(posX, posY - 470, 60, 260);
  }
  val_ = val;
  
  
ellipse(posX, posY, v1, v2);
  if (posX == 800){
    accX = accX * -1;
    high = high - 50;
    posX = 799;
  }
  if (posX == 0){
     accX = accX * -1;
    high = high - 50;
    posX = 1;
  }
  if (posY == high){
    accY = accY * -1;
  }
  if (posY == height){
    accY = accY * -1;
  }
  
 posX = posX + accX;
 posY = posY + accY;
}