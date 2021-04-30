#include "act1.h"
/*int main(void)*/
void peripheral_init(void)
{

    DDRB|=(1<<PB0);//B0 is set for LED
    DDRD&=~(1<<PD0);//clear LSB of D register
    PORTD|=(1<<PD0);//Set LSB OF D register
    DDRD&=~(1<<PD1);//clear LSB of D register
    PORTD|=(1<<PD1);//Set LSB OF D register
}
    //while(1)
    void change_led_state(uint8_t state)

    {  if(!(PIND&(1<<PD0)))//switch pressed
    { if(!(PIND&(1<<PD1)))
    {
        PORTB|=(1<<PB0);
       //_delay_ms(3000);
    }
    else
    {
     PORTB&=~(1<<PB0);

    }
    else
    {
     PORTB&=~(1<<PB0);
   //_delay_ms(3000);

    }
    }
    }

   /* return 0;
}
*/

