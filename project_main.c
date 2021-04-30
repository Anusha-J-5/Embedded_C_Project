#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

char temp_data;
int main(void)
{
	
    InitADC();
    char temp_data;
    uint16_t temp;
	peripheral_init();
    timer();

	while (1)
	{
        change_led_state(PD0);
		_delay_ms(1000);
         temp=ReadADC(0);
        _delay_ms(200);
        temp_data = PWM(temp);
        UARTWritechar(temp_data);
        OCR0A=0;
        _delay_ms(200);
	}
	return 0;
}
