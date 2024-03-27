/*
int AOpin = 36;
int DOpin = 22;
void setup() {
  // put your setup code here, to run once:
  pinMode(AOpin, INPUT);
  pinMode(DOpin, INPUT);
  Serial.begin(9600);
}
int AOvalue = 0;
bool DOvalue = false;
String AOstring ="";
String DOstring ="";
void loop() {
  // put your main code here, to run repeatedly:
AOstring = "";
AOstring+="AOValue: ";
AOstring += String(analogRead(AOpin));
DOstring = "";
DOstring+="DOValue: ";
DOstring += String(digitalRead(AOpin));
Serial.println(AOstring);
Serial.println(DOstring);
delay(500);
}
*/



int  sensorPin  =  36;     // select the input  pin for  the potentiometer 
int  ledPin  = LED_BUILTIN;   // select the pin for  the LED
int  sensorValue =  0;  // variable to  store  the value  coming  from  the sensor

void setup() {
pinMode(ledPin,  OUTPUT);
Serial.begin(9600);
}
void loop()  {
sensorValue =  analogRead(sensorPin);
Serial.println(sensorValue,  DEC);
}

