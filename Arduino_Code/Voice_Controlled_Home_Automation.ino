/*
 * Voice-Controlled Home Automation System Using ESP32
 *
 * Author: Anil Kumar Senapati
 *
 * Description:
 * This project uses ESP32, Google Assistant, and Sinric Pro
 * to control multiple devices through voice commands over Wi-Fi.
 *
 * Controlled Devices:
 * - Red LED   (GPIO4)
 * - Green LED (GPIO15)
 * - Blue LED  (GPIO2)
 */

#include <WiFi.h>
#include <SinricPro.h>
#include <SinricProSwitch.h>

#define WIFI_SSID   "YOUR_WIFI_NAME"
#define WIFI_PASS   "YOUR_WIFI_PASSWORD"

#define APP_KEY     "YOUR_APP_KEY"
#define APP_SECRET  "YOUR_APP_SECRET"

#define DEVICE_ID_1 "YOUR_DEVICE_ID_1"
#define DEVICE_ID_2 "YOUR_DEVICE_ID_2"
#define DEVICE_ID_3 "YOUR_DEVICE_ID_3"

#define RELAY1 4
#define RELAY2 15
#define RELAY3 2

bool onPowerState1(const String &deviceId, bool &state) {
  digitalWrite(RELAY1, state ? LOW : HIGH);
  return true;
}

bool onPowerState2(const String &deviceId, bool &state) {
  digitalWrite(RELAY2, state ? LOW : HIGH);
  return true;
}

bool onPowerState3(const String &deviceId, bool &state) {
  digitalWrite(RELAY3, state ? LOW : HIGH);
  return true;
}

void setupWiFi() {
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println("\nWiFi Connected");
}

void setup() {
  Serial.begin(115200);

  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);

  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);

  setupWiFi();

  SinricProSwitch &relay1 = SinricPro[DEVICE_ID_1];
  SinricProSwitch &relay2 = SinricPro[DEVICE_ID_2];
  SinricProSwitch &relay3 = SinricPro[DEVICE_ID_3];

  relay1.onPowerState(onPowerState1);
  relay2.onPowerState(onPowerState2);
  relay3.onPowerState(onPowerState3);

  SinricPro.begin(APP_KEY, APP_SECRET);
}

void loop() {
  SinricPro.handle();
}
