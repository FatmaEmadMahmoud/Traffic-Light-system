// C++ code
//
int red=9;
int green=10;
int yellow=11;
void setup()
{
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(yellow,OUTPUT);
}

void loop()
{
digitalWrite(red,HIGH);
delay(500);
digitalWrite(yellow,HIGH);
for (int i=0;i<3;i++)
{
digitalWrite(yellow,HIGH);
delay(500);
digitalWrite(yellow,LOW);
delay(500);
}
digitalWrite(red,LOW);
digitalWrite(yellow,LOW);
digitalWrite(green,HIGH);
delay(1000);
digitalWrite(green,LOW);
delay(1000);

}