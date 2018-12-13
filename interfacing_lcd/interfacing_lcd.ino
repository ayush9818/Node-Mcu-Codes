/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);

void setup()
{
  lcd.begin();

  lcd.print("Hello World!");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("ayush");

}


void loop()
{


}
