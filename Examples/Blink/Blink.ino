#include <LED.h>
LED myled(PC13);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
myled.On();
delay(500);
myled.Off();
delay(500);
}
