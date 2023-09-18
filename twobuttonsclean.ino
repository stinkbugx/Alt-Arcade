#include <Bounce.h>

Bounce button9 = Bounce(9, 10);
Bounce button14 = Bounce(14, 10);

void setup() {
  pinMode(9, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
}

void loop() {
  button9.update();
  button14.update();

  if (button9.fallingEdge()) {
    Keyboard.println("B9 press");
  }
  if (button14.fallingEdge()) {
    Keyboard.println("B14 press");
  }

  if (button9.risingEdge()) {
    Keyboard.println("B9 release");
  }
  if (button14.risingEdge()) {
    Keyboard.println("B14 release");
  }
}
/*
*/
