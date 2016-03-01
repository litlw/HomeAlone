int buttonup = 7;
int buttondown = 6;
int buttonright = 5;
int buttonleft = 4;
int buttonfire = 3;
int lite = 12;


int up, down, left, right, fire;
int up_, down_, left_, right_, fire_;
//these are the analog inputs. 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonup,INPUT);
pinMode(buttondown,INPUT);
pinMode(buttonright,INPUT);
pinMode(buttonleft,INPUT);
pinMode(buttonfire,INPUT);
pinMode(lite, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  //here comes a bunch of the same if function
up = analogRead(buttonup);
down = analogRead(buttondown);
left = analogRead(buttonleft);
right = analogRead(buttonright);
fire = analogRead(buttonfire);

if (up == HIGH && up_!= HIGH){
Serial.println("UP");
digitalWrite(lite, HIGH);
}}
/*
if (down == HIGH && down_!= HIGH){
Serial.println("DOWN");
}
if (left == HIGH && left_ != HIGH){
  Serial.println("LEFT");
}
if (right == HIGH && right_ != HIGH){
  Serial.println("RIGHT");
}
if (fire == HIGH && fire_ != HIGH){
  Serial.println(" ");
}
}


up_ = up;
down_=down;
left_=left;
right_=right;
shoot_=shoot;
}

  

}*/
