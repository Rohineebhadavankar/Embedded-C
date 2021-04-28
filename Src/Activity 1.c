#include <avr/io.h>
#include<util/delay.h>
/**
 * @brief 
 * 
 */
void port()
{
DDRB|=(1<<PB0); //Set B0=1 for led

DDRD&=~(1<<PD0);//Clear bit

DDRD&=~(1<<PD1);//Clear bit

PORTD|=(1<<PD0);// set bit
PORTD|=(1<<PD1);//set bit
}
