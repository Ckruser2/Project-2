void setup() {
 pinMode(2,OUTPUT); //led 1-5 are set up as outputs
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
}
int d = 250;
void loop() {
for ( int a = 5 ; a > 1 ; a-- )
{
   digitalWrite(a, HIGH);
   delay(d);
   digitalWrite(a, LOW);
   delay(d);
}
for ( int a = 3; a < 7 ; a++ )
  {
   digitalWrite(a, HIGH);
    delay(d);
    digitalWrite(a, LOW);
    delay(d);
   }

}
