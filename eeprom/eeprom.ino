/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <EEPROM.h>

int i;
void setup()
{
  Serial.begin(9600);
  EEPROM.begin(512);
  EEPROM.write(0, 10);
  EEPROM.write(1, 20);
  EEPROM.write(2, 30);
  EEPROM.write(3, 40);
  EEPROM.write(4, 50);
  delay(3000);
  Serial.println("display:");

}


void loop()
{

    for (i = 1; i <= 4; i++) {
      Serial.println((EEPROM.read(i)));
      delay(1000);
    }

}
