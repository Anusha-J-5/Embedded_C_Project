#ifndef ACT1_H_
#define ACT1_H_
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void peripheral_init(void);
void change_led_state(uint8_t state);

#endif // ACT1_H_INCLUDED

