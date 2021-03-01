#ifndef F_CPU
#define F_CPU 1000000UL
#endif

#include<avr/io.h>
#include<util/delay.h>

int main(void) 
{
    DDRB = 1 << PB4;
    PORTB = (1 << PB0) | (1 << PB1) | (1 << PB2) | (1 << PB3);
    
    while (1) {
        _delay_ms(1000);
        PORTB ^= 1 << PB4;
    }
    return 0;
}
