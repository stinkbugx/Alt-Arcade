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
    Keyboard.println("w");
  }
  if (button14.fallingEdge()) {
    Keyboard.println("s");
  }

  /*if (button9.risingEdge()) {
    Keyboard.println("s");
  }
  if (button14.risingEdge()) {
    Keyboard.println("B14 release");
  }*/
}
/*
s
s
s
s
w
w
w
w
w
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
s
w
w
w
w
w
w
w
w
w
w
w

*/

