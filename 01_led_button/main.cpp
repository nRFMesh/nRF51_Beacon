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

DigitalOut  led(LED1);

Ticker tick_call;

void the_ticker()
{
    led = !led;
    
}

int main() 
{
  volatile uint32_t check = 0;

  tick_call.attach(&the_ticker,1);
  
  while(1) 
  {
    //led = 0;
    check = us_ticker_read();
    active_wait();
    //led = 1;      
    check = us_ticker_read();
    //TODO debug why this is not working     wait_ms(500);   
    active_wait();
  }
}
