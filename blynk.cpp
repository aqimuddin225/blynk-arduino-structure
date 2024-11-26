
#define BLYNK_PRINT Serial

// Informasi dari Blynk Device Info
#define BLYNK_TEMPLATE_ID "TMPL61FKJGiB0"
#define BLYNK_TEMPLATE_NAME "Test"
#define BLYNK_AUTH_TOKEN "pWUjddsLh8-hkO-OwWrN0TaqjW-JOt6Z"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#include "blynk.h"

// Inisialisasi WiFi credentials
char ssid[] = "Personal Only";
char pass[] = "Muzretafa225";

// Implementasi fungsi setup Blynk
void blynkSetup() {
  Serial.begin(9600); // Debug console
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

// Implementasi fungsi loop Blynk
void blynkLoop() {
  Blynk.run();
}
