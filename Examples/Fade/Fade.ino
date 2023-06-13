#include <LED.h>
LED myled(PA0);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
myled.FadeOn(1000);
}
