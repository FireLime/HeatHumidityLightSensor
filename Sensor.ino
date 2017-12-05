#include "DHT.h"

DHT dht;

void setup() {
  Serial.begin(9600);

  dht.setup(A0);
}

void loop() {
  delay(dht.getMinimumSamplingPeriod());

  Serial.print(dht.getHumidity());
  Serial.print("\t");
  Serial.print(dht.getTemperature());
  Serial.print("\t");
  Serial.print(analogRead(A1));
  Serial.print("\n");
}
