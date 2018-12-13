/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);
  WiFi.softAP("abcd","ayush@1234");
  Serial.println((WiFi.softAPIP()));

}


void loop()
{

    Serial.println("connected station");
    Serial.println((WiFi.softAPgetStationNum()));
    delay(5000);

}
