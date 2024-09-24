#include "button.h"

unsigned long previousHandleButtonTime = 0;
const long intervalHandleButton = 0;

void handleButtonA()
{
  unsigned long currentHandleButtonTime = millis();

  if (currentHandleButtonTime - previousHandleButtonTime >= intervalHandleButton)
  {
    previousHandleButtonTime = currentHandleButtonTime;

    if (M5.BtnA.wasPressed())
    {
      M5.Lcd.setCursor(60, 30);
      M5.Lcd.println("Button A is pressed");
      Serial.println("Button A is pressed");
    }
    if (M5.BtnA.pressedFor(2000))
    {
      M5.Lcd.fillRect(60, 30, 300, 15, TFT_WHITE);
      Serial.println("Clear text of button A");
      M5.Lcd.setCursor(60, 30);
    }
  }
}

void handleButtonB()
{
  unsigned long currentHandleButtonTime = millis();

  if (currentHandleButtonTime - previousHandleButtonTime >= intervalHandleButton)
  {
    previousHandleButtonTime = currentHandleButtonTime;

    if (M5.BtnB.wasPressed())
    {
      M5.Lcd.setCursor(60, 55);
      M5.Lcd.println("Button B is pressed");
      Serial.println("Button B is pressed");
    }
    if (M5.BtnB.pressedFor(2000))
    {
      M5.Lcd.fillRect(60, 55, 300, 15, TFT_WHITE);
      Serial.println("Clear text of button B");
      M5.Lcd.setCursor(60, 55);
    }
  }
}

void handleButtonC()
{
  unsigned long currentHandleButtonTime = millis();

  if (currentHandleButtonTime - previousHandleButtonTime >= intervalHandleButton)
  {
    previousHandleButtonTime = currentHandleButtonTime;

    if (M5.BtnC.wasPressed())
    {
      M5.Lcd.setCursor(60, 80);
      M5.Lcd.println("Button C is pressed");
      Serial.println("Button C is pressed");
    }
    if (M5.BtnC.pressedFor(2000))
    {
      M5.Lcd.fillRect(60, 80, 300, 15, TFT_WHITE);
      Serial.println("Clear text of button C");
      M5.Lcd.setCursor(60, 80);
    }
  }
}