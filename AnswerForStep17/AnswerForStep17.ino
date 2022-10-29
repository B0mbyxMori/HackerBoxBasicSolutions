 #define LEDpin 3

void setup() {
  // Set up both A0 and pin 3 for input.
  pinMode(A0, INPUT);
  pinMode(LEDpin, INPUT);
  Serial.begin(9600);
  Serial.println("Done.");
}

void loop() {
  // Read potentiometer from pin A0.
   int analogValue = analogRead(A0);

  // Scale the value to read in the range of 0-255.
   float pulseValue = analogValue*(255.0/1023.0);

  // Drive pin 3 with pulseValue.
   analogWrite(LEDpin, pulseValue);

  // Print out value.
   Serial.println(pulseValue);
}
