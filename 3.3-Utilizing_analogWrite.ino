int stop = 1000;
int redLED = 11;
int greenLED = 10;
int blueLED = 9;

void setup(){
  // Initialize pins as output devices
  pinMode (redLED, OUTPUT );
  pinMode (greenLED, OUTPUT);
  pinMode (blueLED, OUTPUT);
}

void loop(){
  // Red LED cycle
  analogWrite (redLED, 255 );
  delay (1000);
  analogWrite (redLED, 100);
  delay (1000);
  analogWrite (redLED, 0);
  
  delay (2000);

  // Green LED cycle
  analogWrite (greenLED, 255);
  delay (1000);
  analogWrite (greenLED, 100);
  delay (1000);
  analogWrite (greenLED, 0);
  
  delay (2000);
  // Blue LED cycle
  analogWrite (blueLED, 255);
  delay (1000);
  analogWrite (blueLED, 100);
  delay (1000);
  analogWrite (blueLED, 0);
  delay (2000);
}
