/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);
  delay(300);
  Serial.println("connecting");
   WiFi.begin("ayush");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print("........");

  }
  Serial.println("connected..");
  Serial.println((WiFi.localIP().toString()));

}
//hotspot humare device ko private ip deta h jo hr device k liye unique hoti h//

void loop()
{


}
