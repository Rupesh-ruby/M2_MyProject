
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"

int main(void)
{
    uint16_t buzzer;
    
    while(1)
    {
	 
        if(activity1()==1) 
        {
            /* Activity 1 Toggling Led*/ 
            led_on();
		
	    /* Activity_2 related to ADC value*/
            temp=activity2();
		
	    /* Activity 3 Pulse Width Modulation according to its ADC value*/
            activity3(temp); 

	   
            

        }
        else  
        {
            led_off();
            led_on();
		    _delay_ms(2000);
        }

    }
    return 0;
}
