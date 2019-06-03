int val;
void setup() {
  pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
     pinMode(5,OUTPUT);
      pinMode(6,OUTPUT);
       pinMode(7,OUTPUT);
        pinMode(8,OUTPUT);
         pinMode(9,OUTPUT);
         pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
  val=analogRead(A0);
  Serial.println(val);
  if(val<100)
  {
    digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,LOW);
      digitalWrite(6,LOW);
       digitalWrite(7,LOW);
     digitalWrite(8,LOW);
    digitalWrite(9,LOW);
  }
  else if(val>=100&&val<200)
  {
    digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
     digitalWrite(5,LOW);
      digitalWrite(6,LOW);
       digitalWrite(7,LOW);
     digitalWrite(8,LOW);
    digitalWrite(9,LOW);
  }
  else if(val>=200&&val<=300)
  {
    digitalWrite(2,LOW);
   digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
      digitalWrite(6,LOW);
       digitalWrite(7,LOW);
     digitalWrite(8,LOW);
    digitalWrite(9,LOW);
  }
  else if(val>=300&&val<400)
  {
    digitalWrite(2,LOW);
   digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
       digitalWrite(7,LOW);
     digitalWrite(8,LOW);
    digitalWrite(9,LOW);
  }
  else if(val>=400&&val<500)
  {
    digitalWrite(2,LOW);
   digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
       digitalWrite(7,LOW);
     digitalWrite(8,LOW);
    digitalWrite(9,LOW);
  }
  else if(val>=500&&val<600)
  {
    digitalWrite(2,LOW);
   digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,LOW);
      digitalWrite(6,LOW);
       digitalWrite(7,HIGH);
     digitalWrite(8,LOW);
    digitalWrite(9,LOW);
  }
  else if(val>=600&&val<700)
  {
    digitalWrite(2,LOW);
   digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,LOW);
      digitalWrite(6,LOW);
       digitalWrite(7,LOW);
     digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
  }
  else if(val>=800&&val<900)
  {
    digitalWrite(2,LOW);
   digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,LOW);
      digitalWrite(6,LOW);
       digitalWrite(7,LOW);
     digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
  }
}
