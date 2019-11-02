int led=13;
int led2=8;
int led3=11;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
delay(500);
digitalWrite(led2,HIGH);
delay(1000);
digitalWrite(led3,HIGH);
delay(400);
digitalWrite(led,LOW);
delay(100);
digitalWrite(led2,LOW);
delay(400);
digitalWrite(led3,LOW);
delay(1000);

}
