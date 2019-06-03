int val,val2;
void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);

}

void loop() {
  val=analogRead(A0);
  val2=analogRead(A1);
  delay(1000);
  Serial.println(val);
    delay(1000);
  Serial.println(val2);
  // put your main code here, to run repeatedly:

}
