void setup() {
  // put your setup code here, to run once:
pinMode(7, INPUT);
pinMode(12, OUTPUT);
Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(7) == HIGH){
    digitalWrite(12, HIGH);
    Serial.println("I Love The Bowie");
  }
  

}
