#include "pwm.h"
#include "wirish_time.h"
#include "io.h"
#include <Arduino.h>
#include "LED.h"
LED::LED(int pin){
  mpin=pin;
  pinMode(mpin, OUTPUT);
}

void LED::On(){
  digitalWrite(mpin, HIGH);
}

void LED::Off() {
  digitalWrite(mpin, LOW);
}

void LED::Blink(int n, int t){
// blink n times in t, so calculate each delay as t/n/2
int d=(t/n)/2;
for(int i=0;i<n;i++) {
  On(); delay(d);
  Off();delay(d);
}
}

void LED::FadeOn(int t) {
  int d=t/255;
  for(int i=0;i<255;i++)
    {
    analogWrite(mpin, i);
    delay(d);
    }
}

void LED::FadeOff(int t) {
  int d=t/255;
  for(int i=255;i>0;i--)
    {
    analogWrite(mpin, i);
    delay(d);
    }
}

void LED::Pulse(int n,int t){
  for(int i=0;i<n;i++){
    FadeOn(t);
    FadeOff(t);
  }
}
