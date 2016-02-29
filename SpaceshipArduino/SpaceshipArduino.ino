int buttonup = 0;
int buttondown = 1;
int buttonright = 2;
int buttonleft = 3;
int buttonfire = 4;


int up, down, left, right, fire;
int up_, down_, left_, right_, fire_;
//these are the analog inputs. 

void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
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
serial.println("UP");
}
if (down == HIGH && down_!= HIGH){
serial.println("DOWN");
}
if (left == HIGH && left_ != HIGH){
  serial.println("LEFT");
}
if (right == HIGH && right_ != HIGH){
  serial.println("RIGHT");
}
if (shoot == HIGH && shoot_ != HIGH){
  serial.println(" ");
}



up_ = up;
down_=down;
left_=left;
right_=right;
shoot_=shoot;
}

  

}
