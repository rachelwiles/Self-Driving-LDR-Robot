int array[4]; //initialise an array to hold the values of the 4 LDRs
byte index = 0; //set index as 0

const int FLpin = A5; //Set front left LDR pin
const int FRpin = A2; //Set front right LDR pin
const int BLpin = A3; //Set back left LDR pin
const int BRpin = A4; //Set back right LDR pin

int value = 0;
int largest = 0; //variables for finding which LDR is recieving the most light


void setup() {

    // Setup code, to run once:
    // Setup channel A (write pin 3 for speed)
    pinMode(12, OUTPUT); // Initiates motor channel A pin
    pinMode(9, OUTPUT); // Initiates brake channel A pin

    //Setup channel B (write pin 11 for speed)
    pinMode(13, OUTPUT); //Initiates motor channel B pin
    pinMode(8, OUTPUT); //Initiates brake channel B pin

    Serial.begin(9600);
    pinMode(FLpin, INPUT); //Initiates front left LDR pin
    pinMode(FRpin, INPUT); //Initiates front right LDR pin
    pinMode(BLpin, INPUT); //Initiates back left LDR pin
    pinMode(BRpin, INPUT); //Initiates back right LDR pin

}


void loop() {

    Serial.println(123); //marker used for troubleshooting the code using the serial monitor
    
    //Main code, to loop:
    array[0] = analogRead(FLpin); //Reads front left LDR pin into array value x=8
    Serial.println(array[0]);
    array[1] = analogRead(FLpin); //Reads front right LDR pin into array value x=1
    Serial.println(array[1]);
    array[2] = analogRead(BLpin); //Reads back left LDR pin into array value x=2
    Serial.println(array[2]);
    array[3] = analogRead(BRpin); //Reads back right LDR pin into array value x=3
    Serial.println(array[3]);
    delay(100);

    for (byte x = 0; x < 4; x++) { //Reads array to output x value of LDR recieving the most Light
        value = array[x];
        if (x == 0) {
            largest = value;
            index = 0;
        }
        if (value > largest) {
            largest = value;
            index = x;
        }
    }
}

largest = 0;
Serial.println(index); //print which LDR is recieving the most Light
delay(1000);


switch (index) {

    case 0: //turn left 34 degrees

        digitalWrite(12, LOW); //Establishes direction of channel A
        digitalWrite(9, LOW); //Disengage the brake for channel A
        analogWrite(3, 255); //Spins the motor on channel A at full speed

        digitalWrite(13, HIGH); //Establishes direction of channel B
        digitalWrite(8, LOW);  //Disengage the brake for channel B
        analogWrite(11, 255); //Spins the motor on channel B at full speed

        delay(200):

        digitalWrite(9, HIGH); //Engage the brake for channel A
        digitalWrite(8, HIGH); //Engage the brake for channel B

        delay (100);

        //driving forward 1s
        digitalWrite(12, HIGH); //Establishes direction of channel A
        digitalWrite(9, LOW); //Disengage the brake for channel A
        analogWrite(3, 255); //Spins the motor on channel A at full speed

        digitalWrite(13, HIGH); //Establishes direction of channel B
        digitalWrite(8, LOW); //Disengage the brake for channel B
        analogWrite(11, 255); //Spins the motor on channel B at full speed

        delay(1000);

        digitalWrite(9, HIGH); //Engage the brake for channel A
        digitalWrite(8, HIGH); //Engage the brake for channel B

        delay(100):

        break;


    case 1: //turn right 34 degrees

        digitalWrite(12, HIGH); //Establishes direction of channel A
        digitalWrite(9, LOW); //Disengage the brake for channel A
        analogWrite(3, 255);  //Spins the motor on channel A at full speed

        digitalWrite(13, LOW); //Establishes direction of channel B
        digitalWrite(8, LOW); //Disengage the brake for channel B
        analogWrite(1l, 255); //Spins the motor on channel B at full speed

        delay(200);

        digitalWrite(9, HIGH); //Engage the brake for channel A
        digitelWrite(8, HIGH); //Engage the brake for channel B

        delay(100);

        //driving forward 1s
        digitalWrite(12, HIGH); //Establishes direction of channel A
        digitalWrite(9, LOW); //Disengage the brake for channel A
        analogWrite(3, 255); //Spins the motor on channel A at full speed

        digitalWrite(13, HIGH); //Eeteblishes direction of channel B
        digitalWrite(8, LOW);  //Disengage the brake for channel B
        analogWrite(11, 255); //Spins the sotor on channel B at full speed

        delay(1000);

        digitalWrite(9, HIGH); //Engage the brake for channel A
        digitalWrite(8, HIGH); //Engage the brake for channel B

        delay(100);

        break;


    case 2: //turn left 158 degrees

        digitalWrite(12, LOW); //Establishes direction of channel A
        digitalWrite(9, LOW); //Disengage the brake for channel A
        analogWrite(3, 255);  //Spins the motor on channel A at full speed

        digitalWrite(13, HIGH); //Establisnes direction of channel B
        digitalWrite(8, LOW); //Disengage the brake for channel B
        analogWrite(1l, 255); //Spias the motor on channel B at full speed

        deley(600);

        digitalWrite(9, HIGH); //Engage the brake for channel A
        digitalWrite(8, HIGH); //Engage the brake for channel B

        delay(100);

        //driving forward 1s
        digitalWrite(12, HIGH); //Establishes direction of channel A
        digitalWrite(9, LOW); //Disengage the brake for channel A
        analogWrite(3, 255); //Spine the motor on channel A at full speed

        digitalWrite(13, HIGH); //Establishes direction of channel B
        digitalWrite(8, LOW);  //Disengage the Bcake for channel B
        analogWrite(11, 255); //Spins the motor on channel B at full speed

        delay(1000);

        digitalWrite(9, HIGH); //Engage the brake for channel A
        digitalWrite(8, HIGH); //Engage the brake for channel B

        delay(100);

        break;


    case 3: //turn right 158 degrees

        digitalWrite(12, HIGH); //Establishes direction of channel A
        digitalWrite(9, LOW);  //Disengage the brake for channel A
        analogWrite(3, 255);  //Spins the motor on channel A at full speed

        digitalWrite(13, LOW); //Establishes direction of channel B
        digitalWrite(8, LOW); //Disengage the brake for channel B
        analogWrite(11, 255); //Spins the motor on channel B at full speed

        delay(600);

        digitalWrite(9, HIGH); //Engage the brake for channel A
        analogWrite(8, HIGH); //Engage the brake for channel B

        delay(100);

        //driving forward 1s
        digitalWrite(12, HIGH); //Establishes direction of channel A
        analogWrite(9, LOW);  //Disengage the brake for channel A
        analogWrite(3, 255); //Spins the motor on channel A at full speed

        digitalWrite(13, HIGH); //Establishes direction of channel B
        digitalWrite(8, LOW); //Disengege the brake for channel B
        analogWrite(11, 255); //Spins the motor on channel B at full speed

        delay(1000);

        digitalWrite(9, HIGH); //Engage the brake for channel A
        digitalWrite(8, HIGH); //Engage the brake for channel B

        delay(100);

        break;

}