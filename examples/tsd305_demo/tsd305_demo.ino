#include <tsd305.h>

tsd305 m_tsd305;

void setup() {
  Serial.begin(9600);

  Serial.println("==== TE Connectivity ====");
  Serial.println("======== TSD305 =========");
  Serial.println("======== Measure ========");

  m_tsd305.begin();
}

void loop() {
  tsd305_status status;
  float temperature;
  float object_temperature;
  boolean connected;

  connected = m_tsd305.is_connected();
  if (connected) {
    Serial.println(connected ? "Sensor Connected" : "Sensor Disconnected");

    status = m_tsd305.read_temperature_and_object_temperature(
        &temperature, &object_temperature);

    Serial.print("---Temperature = ");
    Serial.print(temperature, 1);
    Serial.print((char)176);
    Serial.println("C");

    Serial.print("---Object Temperature = ");
    Serial.print(object_temperature, 1);
    Serial.print((char)176);
    Serial.println("C");
    Serial.println();
  } else {
    Serial.println(connected ? "Sensor Connected" : "Sensor Disconnected");
  }

  delay(1000);
}
