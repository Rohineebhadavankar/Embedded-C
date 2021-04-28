/*
 */

#include <avr/io.h>
#include<util/delay.h>

/**
 * @brief
 *
 * @return int
 */
int main(void)
{
    port();
    while(1)
    {
        if((!(PIND&(1<<PD0)))||(!(PIND&(1<<PD1))))// Switch press
        {
         PORTB|=(1<<PB0);
         _delay_ms(20);
        }
        else
         PORTB&=~(1<<PB0);
         _delay_ms(20);
    }

    return 0;
}
