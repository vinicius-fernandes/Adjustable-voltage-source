
const int  ledPin=3;
const int analogPin = 0;//the analog input pin attach to
int inputValue = 0;//variable to store the value coming from sensor

int outputValue = 0;//variable to store the output value
void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin, OUTPUT);
}

void loop() {
   inputValue=inputValue-0.3*(inputValue-analogRead(analogPin));
   outputValue = map(inputValue, 0, 1023, 0,255);
  // put your main code here, to run repeatedly:
  analogWrite(ledPin, outputValue);
  delay(500);
 }
