/*
 */

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
DDRB|=(1<<PB0); //Set B0=1 for led

DDRD&=~(1<<PD0);//Clear bit

DDRD&=~(1<<PD1);//Clear bit

PORTD|=(1<<PD0);// set bit
PORTD|=(1<<PD1);//set bit
    while(1)
    {
        if((!(PIND&(1<<PD0)))||(!PIND&(1<<PD1)))// Switch press
        {
         PORTB|=(1<<PB0);
         _delay_ms(20);
        }
        else
         PORTB&=~(1<<PB0);
         _delay_ms(20);

        /*PORTB|=(1<<PB0);
        _delay_ms(2000);
        PORTB&=~(1<<PB0);
        _delay_ms(2000);*/
    }

    return 0;
}
