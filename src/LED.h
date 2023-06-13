#ifndef LED_H
#define LED_H
#include <Arduino.h>
class LED {
private:
  int mpin;

public:
  LED(int pin);
  void On(void);
  void Off(void);
  void Blink(int n, int t);
  void FadeOn(int t);
  void FadeOff(int t);
  void Pulse(int n,int t);  

};


#endif