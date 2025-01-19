#include <WiFi.h>
 
const char* ssid     = "卷卷的iPhone";
const char* password = "woshiyitouzhu";

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA); // SETS TO STATION MODE!
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }  
  Serial.print("IP is ");
  Serial.println(WiFi.localIP());
}

void loop() {
}
