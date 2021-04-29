
#include <avr/io.h>
#include<util/delay.h>
/**
 * @brief
 *
 */

void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);

}
/**
 * @brief
 *
 * @param ch
 * @return uint16_t
 */

uint16_t ReadADC(uint8_t ch)
{
    //select ADC channel ch must be 0-7
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    //start single conversion
    ADCSRA|=(1<<ADSC);
    //wait for conversion
    while(!(ADCSRA & (1<<ADIF)));
    //clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
