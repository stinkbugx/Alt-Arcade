#include <Bounce.h>
#include <CapacitiveSensor.h>
#include <Keyboard.h>

Bounce button9 = Bounce(9, 10);
Bounce button14 = Bounce(14, 10);

CapacitiveSensor   cs_4_7 = CapacitiveSensor(4,7);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired
CapacitiveSensor   cs_14_16 = CapacitiveSensor(14,16);        // 10M resistor between pins 4 & 6, pin 6 is sensor pin, add a wire and or foil


void setup() {
  cs_4_7.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
  Serial.begin(9600);
}

void loop() {
  long start = millis();
  long total1 =  cs_4_7.capacitiveSensor(50);
  long total2 =  cs_14_16.capacitiveSensor(50);

  Serial.print("1 ");
  Serial.println(total1);
  Serial.print("2 ");
  Serial.println(total2);

  if (total1 >= 150000){
    Keyboard.println("w");
  } 
  if (total2 >= 10000){
    Keyboard.println("s");
  } 

  delay(10);
}
/*


*/

