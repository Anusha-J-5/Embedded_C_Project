#ifndef ACT2_H_INCLUDED
#define ACT2_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>
#include <avr/interrupt.h>

void InitADC();

uint16_t ReadADC(uint8_t ch);

#endif // ACT2_H_INCLUDED
