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
AOstring += analogRead(AOpin);
DOstring = "";
DOstring+="DOValue: ";
DOstring += digitalRead(AOpin);
Serial.println(AOstring);
Serial.println(DOstring);
}
