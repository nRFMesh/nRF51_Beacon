#include "mbed.h"

#ifdef SOFTDEVICE_PRESENT
#error Sof devices still here
#endif

void active_wait()
{
  volatile uint32_t var = 0;
  for (int i=0;i<300000;i++)
  {
    var++;
  }
}

int main() 
{
  DigitalOut  led(LED1);
  
  while(1) 
  {
    led = 0;      
    active_wait();
    led = 1;      
    //TODO debug why this is not working     wait_ms(500);   
    active_wait();
  }
}
