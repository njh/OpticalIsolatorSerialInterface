/*
  Optical Isolator Serial Interface
*/

const int nodeID = 99;
const int inputPin = 2;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second
  Serial.begin(9600);

  // Configure pin 2 as an input
  pinMode(inputPin, INPUT_PULLUP);
}

// the loop routine runs over and over again forever:
void loop() {
  int value = ! digitalRead(inputPin);
  Serial.print(nodeID);
  Serial.print(' ');
  Serial.print(value);
  Serial.println();

  // FIXME: is there any benefit in doing a lower power version of this?
  // We don't need to do anything for the next 10 seconds...
  delay(10000);
}
