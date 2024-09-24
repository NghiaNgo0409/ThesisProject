#include "./Button/button.h"
#include "./LED/LedBlinky.h"
#include "./MQTT/mqtt.h"
#include <WiFi.h>
#include "WiFiClientSecure.h"
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"

void setup()
{
  Serial.begin(115200);
  M5.begin();

  M5.Lcd.fillScreen(TFT_WHITE);
  M5.Lcd.setTextColor(TFT_BLACK);
  M5.Lcd.setTextSize(2);
  M5.Lcd.setCursor(50, 5);
  M5.Lcd.println("Hello M5Stack!");
  Serial.println("Hello M5Stack!");
  M5.Lcd.qrcode("https://docs.m5stack.com/en/core/station_485", 0, 0, 45);
  Serial.println("+--------------------------------------++++++++++---------------------------------------+");

  setupBlinkyLed();

  /* ************************* SETUP WIFI ******************************** */
  setupWifi();
}

void loop()
{
  M5.update();
  M5.Lcd.setTextSize(1);

  handleButtonA();
  handleButtonB();
  handleButtonC();

  handleBlinkyLed();

  /* ************************* MQTT CONNECT ******************************** */
  MQTT_connect();

  /* ************************* MQTT PUBLISH ******************************** */
  MQTT_publish();

  /* ************************* MQTT SUBSCRIBE ******************************** */
  MQTT_subscribe();
}