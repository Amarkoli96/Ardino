#define 

#define MOTOR_INPUT_ONE 5
#define MOTOR_INPUT_TWO 6
#define MOTOR_INPUT_THREE 7
#define MOTOR_INPUT_FOUR 8 

void setup() {
// put your setup code here, to run once:
pinMode(MOTOR_INPUT_ONE,OUTPUT);//configure the pins
pinMode(MOTOR_INPUT_TWO,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
int s1=digitalRead(9);
int s2=digitalRead(10);
Serial.println(s1);
Serial.println(s2);
if(s1==LOW && s2==LOW)
{
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
}
else if(s1==LOW&&s2==HIGH)
{
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
}
else if(s1==HIGH&&s2==LOW)
{
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
}
else if(s1==HIGH&&s2==HIGH)
{
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}
}
