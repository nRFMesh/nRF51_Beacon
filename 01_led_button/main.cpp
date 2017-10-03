#include "mbed.h"

#ifdef SOFTDEVICE_PRESENT
#warning Sof devices still here
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

volatile uint32_t check = 0;

void the_ticker()
{
  check = us_ticker_read();
}

int main() 
{

  //tick_call.attach(&the_ticker,1);
  
  while(1) 
  {
    led = 0;
    active_wait();
    led = 1;      
    //check = us_ticker_read();
    //TODO debug why this is not working     
    //wait_ms(500);
    active_wait();
  }
}
