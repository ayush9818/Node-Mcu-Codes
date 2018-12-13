/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <ESP8266WiFi.h>

WiFiServer server(80);

void setup()
{
  Serial.begin(9600);
  WiFi.disconnect();
  delay(3000);
   WiFi.begin("ayush","ayush@75210");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print("....");

  }
  Serial.print("i m connected");
  Serial.println((WiFi.localIP().toString()));
  Serial.println((WiFi.gatewayIP().toString().c_str()));
  Serial.println((WiFi.subnetMask().toString().c_str()));
  server.begin();

}


void loop()
{
  
    WiFiClient client = server.available();
  
   if (!client) { return; }
    
    while(!client.available()){ delay(1);  }
    
    
    Serial.println((client.readStringUntil('\r')));
    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("<!DOCTYPE HTML>");
    client.println("<html>");
    client.println("welcome");
    client.println("</html>");
    client.stop();
    delay(1);

}
