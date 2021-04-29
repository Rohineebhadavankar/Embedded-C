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
    InitADC();
    uint16_t temp;


    while(1)
    {
        temp= ReadADC(0);
        _delay_ms(200);
    }

    return 0;
}
