#include "mbed.h"

DigitalOut  led(LED1);

int main() 
{

  while(1) 
  {
    led = 0;
    wait_ms(500);
    led = 1;      
    wait_ms(500);
  }
}
