#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); // LCD Display (RS,EN,D4,D5,D6,D7)
#define flamePin 10 // Flame Sensor Connected To Arduino
#define buzzerPin 11 //Buzzer Connected To Arduino
void setup() {
Serial.begin(9600);
lcd.begin(16, 2);
pinMode(buzzerPin,OUTPUT);
pinMode(flamePin,INPUT);
lcd.setCursor(0, 0);
lcd.print("Device Loading");
for(int i = 0; i <15; i++){
if (i==4)
{
lcd.setCursor(0, 1);
lcd.print(".");
}
else lcd.print(".");
delay(500);
}
lcd.setCursor(11, 1);
lcd.print("Done");
delay(1000);
lcd.clear();
lcd.setCursor(1, 0);
lcd.print("Sensor Active");
delay(1500);
lcd.clear();
}
void loop() {
int Flame = digitalRead(flamePin);
if (Flame == LOW)
{
digitalWrite(buzzerPin,HIGH);
lcd.setCursor(0, 0);
lcd.print("Status : ");
lcd.print("Fire");
lcd.setCursor(0, 1);
lcd.print(" is Detected");
Serial.print(Flame);
Serial.print("\t");
Serial.print("Fire is Detected");
}
else if (Flame == HIGH)
{
digitalWrite(buzzerPin,LOW);
lcd.setCursor(0, 0);
lcd.print("Status : ");
lcd.print("No Fire");
lcd.setCursor(0, 1);
lcd.print("Detected");
Serial.print(Flame);
Serial.print("\t");
Serial.println("No Fire Detected");
}
delay(300);
lcd.clear();
}
