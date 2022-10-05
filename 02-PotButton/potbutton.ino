int potPin = A0;
int potVal;
int btnPin = 2;
int btnState;

void setup() {
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  btnState = digitalRead(btnPin);
  Serial.print(potVal);
  Serial.print(", ");
  Serial.println(btnState);
}
 
