

/**

 * @file Project.c

 * @brief Project to detect the door is opened or not with the indication of LED glow and Buzzer sound that are connecte

 */

#include "project_config.h"

#include "user_utils.h"

#include "Door_detector.h"

/**



void peripheral_init(void)

{

	/* Configure LED Pin */	DDRC=DDRC|0b01000000;

  

  /* Configure Buzzer Pin */

  DDRD = 0xff;  

  

  /* Configure Door_sensor Pin */

  DDRB=DDRB&0b11111101;

}

void change_led_state(uint8_t state)

{

	LED_PORT = (state << LED_PIN);

  BUZZER_PORT = (state << BUZZER_PIN);

}

/**

 * @brief Main function where the code execution starts

 * 

 * @return int Return 0 if the program completes successfully

 * @note PORTC6 is in sink config. i.e when PORTB1 is in ON condition, the LED will turn ON

 * @note PORTC6 is in sink config. i.e when PORTB1 is in OFF condition, the LED will turn OFF

 * @note PORTD1 is in sink config. i.e when PORTB1 is in ON condition, the Buzzer will turn ON and produce the beep sound

 * @note PORTD1 is in sink config. i.e when PORTB1 is in OFF condition, the Buzzer will turn OFF  

 */

int main(void)

{

	/* Initialize Peripherals */

	peripheral_init();

	  while(1)

  {

if(PINB & 0b00000010)

{

  PORTC=PORTC|0b01000000;// Turn ON the LED connected to PORTC

  PORTD = 0xff;        // Turn ON the Buzzer conneted to PORTD

}

else{

    PORTC=PORTC&0b10111111;// Turn OFF the LED connected to PORTC

    PORTD = 0x00;        // Turn OFF the Buzzer connected to PORTD

}

  }
