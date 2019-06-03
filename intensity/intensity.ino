int i;
void setup() {
  pinMode(A0,INPUT);
  pinMode(A5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  i=analogRead(A0);
  Serial.println(i);
  analogWrite(A5,i);
}
