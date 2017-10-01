#include "mbed.h"

PinName LED  = p29;
PinName BUTTON = p28;


int main() 
{
  DigitalOut  led(LED);
  
  while(1) 
  {
    led = 0;      
    wait_ms(500);   
    led = 1;      
    wait_ms(500);   
  }
}
