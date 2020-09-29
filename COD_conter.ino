#include<ESP8266WiFi.h>
int val1;
int val2;
int count1 = 0;
int count2 = 0;
int in;
int out;
void setup() {
  Serial. begin(115200);
WiFi.disconnect();
WiFi.begin("HomeBroadband2","0143226216");
while(!(WiFi.status()== WL_CONNECTED)){
Serial.print("..");
delay(100);
}
Serial.println("\nWIFI IS CONNECTED");
Serial.println(WiFi.localIP());
pinMode(D6,INPUT); 
pinMode(D2,INPUT); }
void loop() {
  int val= digitalRead(D6);
  int va2= digitalRead(D2);
if(val == LOW ){
  in = count1++;
  Serial.print("in");
  Serial.println(in);
  delay(2000);}
if(va2 == HIGH) {
out = count2++;
  Serial.print("out");
  Serial.println(out);
  delay(2000);}}
