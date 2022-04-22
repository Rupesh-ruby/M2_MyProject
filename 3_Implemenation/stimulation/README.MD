# Buzzer Project In Action

## Code
	for(;;)
	{
        change_led_state(on);
		delay_ms(LED_ON_TIME);
        change_led_state(off);
		delay_ms(LED_OFF_TIME);	
	}
