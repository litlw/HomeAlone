int buttonup = 6;

int buttonright = 3;
int buttonleft = 4;
int buttonfire = 5;
int buttonstart = 7;



int up, left, right, fire, start;
int up_, left_, right_, fire_, start_;
//these are the analog inputs. 

void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
pinMode(buttonup,INPUT);
pinMode(buttonright,INPUT);
pinMode(buttonleft,INPUT);
pinMode(buttonfire,INPUT);
pinMode(buttonstart, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  //here comes a bunch of the same if function
up = digitalRead(buttonup);
left = digitalRead(buttonleft);
right = digitalRead(buttonright);
fire = digitalRead(buttonfire);
start = digitalRead(buttonstart);

if (up_ != up){ // if the button for up is pressed
Serial.println("up");  // send up
up_ = up; // set the old value of up to the current value, to keep from infitie loop
}


if (left_ != left){
  Serial.println("left");
  left_ = left;
}



if (right_ != right){
  Serial.println("right");
  right_ = right;
}



if (fire_ != fire){
  Serial.println("boom");
  fire_ = fire;
}   


if (start_ != start){
  Serial.println("start");
  start_ = start;
}



up_ = up;
left_=left;
right_=right;
fire_=fire;
start_ = start;
}
