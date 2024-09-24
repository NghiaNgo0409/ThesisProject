#ifndef _BUTTON_H_
#define _BUTTON_H_

#include <M5Station.h>

extern unsigned long currentSubscribeTime;
extern unsigned long previousSubscribeTime;
extern const long intervalSubscribe;

void handleButtonA();
void handleButtonB();
void handleButtonC();

#endif
