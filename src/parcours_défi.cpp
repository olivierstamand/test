#include <Arduino.h>
#include <librobus.h>
void distance(int distance)
{
float pulse_cm = 3200/23.93894;
ENCODER_ReadReset( 0);
ENCODER_ReadReset( 1);
  while (ENCODER_Read(0)<= distance*pulse_cm)
  MOTOR_SetSpeed(0,0.7);
  MOTOR_SetSpeed(1,0.7);

}

void setup() {
  BoardInit();


}

void loop() {

}



  
