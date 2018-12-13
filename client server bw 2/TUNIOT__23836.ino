/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <ESP8266WiFi.h>

#include <ESP8266HTTPClient.h>

String  i;
long  newvariable;
String  httpurl;
String  TheHiddenAnswerOfClient;
HTTPClient http;

String SendWithAnswer(String IPcache, String monmessagecache) {
httpurl = "http://";
httpurl+=IPcache;
httpurl+="/";
httpurl+=monmessagecache;
http.begin(httpurl);
http.GET();
TheHiddenAnswerOfClient = (http.getString());
http.end();
return TheHiddenAnswerOfClient;
}

void setup()
{
  i = "";

newvariable = 0;
Serial.begin(9600);
  WiFi.disconnect();
  delay(3000);
   WiFi.begin("ayush","ayush@75210");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print(".");

  }
  Serial.println((WiFi.localIP().toString()));

}


void loop()
{

    i = (SendWithAnswer("10.10.10.10","Yes"));
    Serial.println("before clear");
    Serial.println(i);
    Serial.println("after clear");
    i.remove(0, 25);
    i.remove(i.length()-11,11);
    Serial.println(i);
    newvariable = i.toInt();
    Serial.println((2000 + newvariable));

}