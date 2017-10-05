#include "mbed.h"

//if target Dongle used
//DigitalOut  led(LED1);
//for target Beacon
DigitalOut led(P0_29);

int main() 
{

  led = 1;      

  while(1) 
  {
    led = 0;
    wait_ms(500);
    led = 1;      
    wait_ms(500);
  }
}
