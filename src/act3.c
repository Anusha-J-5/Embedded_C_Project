#include "act1.h"
#include "act2.h"
#include "act3.h"
void timer()
{
    TCCR0A|=(1<<COM0A1)|(1<<WGM01)|(1<<WGM00);//FOR FAST PWM MODE
    TCCR0B|=(1<<CS01)|(1<<CS00);// SET PRESCALER TO 64
    DDRD|=(1<<DDD6);//SET PIN D6
}
char PWM(uint16_t temp)
{

    char temperature;

    if((temp>0)&&(temp<=210))
    {
         OCR0A=51;
         temperature=20;
        _delay_ms(1000);
    }
    else if((temp>=210)&&(temp<=510))
    {
         OCR0A=102;
         temperature=25;
        _delay_ms(1000);
    }
    else if((temp>=510)&&(temp<=710))
    {
         OCR0A=179;
         temperature=29;
        _delay_ms(1000);
    }
    else if((temp>=710)&&(temp<=1024))
    {
         OCR0A=243;
         temperature=33;
        _delay_ms(1000);
    }
    else
    {
        OCR1A=0;
        temperature=0;
    }
    return temperature;

}
