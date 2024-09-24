#include <WiFi.h>
#include "WiFiClientSecure.h"
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"

extern const char *ssid;     // Replace with your Wi-Fi SSID
extern const char *password; // Replace with your Wi-Fi password
extern const char *adafruitio_root_ca;

#define AIO_SERVER //"io.adafruit.com"

#define AIO_SERVERPORT // 8883

#define AIO_USERNAME //"nghiango02"
#define AIO_KEY      //"aio_RpeS769I3KaD14oJnt2wke2wuj6N"

extern WiFiClientSecure client;
extern Adafruit_MQTT_Client mqtt;

extern Adafruit_MQTT_Publish test_publish;

extern Adafruit_MQTT_Subscribe test_subscribe;

extern const char *x;
extern int count;

void setupWifi();

void MQTT_connect();

void MQTT_publish();

void MQTT_subscribe();
