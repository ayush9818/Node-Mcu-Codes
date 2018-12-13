/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);
  delay(3000);
  WiFi.disconnect();
  Serial.println("start");
   WiFi.begin("ayush","ayush@75210");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print(".....");

  }
  Serial.println("i m connected");

}


void loop()
{


}
