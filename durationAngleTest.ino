void setup() {
    //Setup code, to run once:
//Setup Channel A
  pinMode(12, OUTPUT); //Initiates Motor Channel A pin
  pinMode(9, OUTPUT); //Initiates Brake Channel A pin
 
  //Setup Channel B
  pinMode(13, OUTPUT); //Initiates Motor Channel B pin
  pinMode(8, OUTPUT);  //Initiates Brake Channel B pin
}

void loop() {
  //Main code, to run repeatedly:
 //Motor A forward @ full speed
  digitalWrite(12, HIGH);  //Establishes direction of Channel A (change direction by swapping HIGH/LOW)
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  analogWrite(3, 255);    //Spins the motor on Channel A at full speed
    
  //Motor B forward @ full speed
  digitalWrite(13, LOW); //Establishes direction of Channel B (change direction by swapping HIGH/LOW)
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
  analogWrite(11, 255);   //Spins the motor on Channel B at full speed
      
  delay(200); //Variable, changed to test how far bot rotates over given period

  digitalWrite(9, HIGH);  //Engage the Brake for Channel A
  digitalWrite(8, HIGH);  //Engage the Brake for Channel B

  delay(5000); //Stationary

}
