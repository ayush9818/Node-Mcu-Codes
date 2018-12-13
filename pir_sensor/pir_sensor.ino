/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////


void setup()
{
  pinMode(0, INPUT);
pinMode(2, OUTPUT);

}


void loop()
{

    if (0 == digitalRead(0)) {
      for (int count = 0; count < 2; count++) {
        digitalWrite(2,HIGH);
        delay(200);
        digitalWrite(2,LOW);
        delay(200);
      }

    }

}
