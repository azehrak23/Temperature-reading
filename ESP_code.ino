
#define BLYNK_TEMPLATE_ID "TMPL3UECg4ptj"
#define BLYNK_TEMPLATE_NAME "ESPDAY2"
#define BLYNK_AUTH_TOKEN "IxZWd3tN4EmxvuBxGd0TmuuaEoViDK8s"
#include <DHT.h>
#include <BlynkSimpleEsp8266.h>

#define DHTPIN 4
#define DHTTYPE DHT11
char auth[]="IxZWd3tN4EmxvuBxGd0TmuuaEoViDK8s";
char ssid[]="OPPO A16";
char pass[]="Piyush9403";
DHT dht(DHTPIN,DHTTYPE);
void setup(){
  Serial.begin(9600);
  Serial.println("DHT Test Successful!");
  Blynk.begin(auth,ssid,pass);
  Serial.println("Blynk Connected Successfully");
  dht.begin();
}
void loop(){
  float h=dht.readHumidity();
  float t= dht.readTemperature();
  float f= dht.readTemperature(true);
  if(isnan(h) || isnan(t)|| isnan(f))
  {
  Serial.println("Something is not working as intended");
  return;
  }
  Serial.println("Humidity:");
  Serial.print(h);
  Serial.println("%");
  Serial.println("Temperature");
  Serial.print(t);
  Serial.println(" degrees celsius.");
  Blynk.virtualWrite(V0, t);
  Blynk.virtualWrite(V1, h);
  delay(1000);
}