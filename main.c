/*
 * GccApplication1.c
 *
 * Created: 25.10.2018 20:09:05
 * Author : hyperpeak
 */ 

#include <avr/io.h>
#include <util/delay.h>

uint8_t m [9]={0b11100000,0b11000000,0b10000000,0b00000000,0b0001110,0b0001100,0b0001000,0b00000000,0b00000000};

int main(void)
{
	DDRC = 0b0001111;
	DDRD = 0b11110000;
    /* Replace with your application code */
    while (1) 
    {
		PORTD=0xFF;
		PORTC=0xFF;
		int i=0;
		for (i = 0; i<4; i++)
		{
			_delay_ms(500);
			PORTD=0xFF;
			_delay_ms(500);
			PORTD=(m[i]);	
		}
		for (; i<9 ;i++ )
		{
			_delay_ms(500);
			PORTD=0xFF;
			PORTC=0xFF;
			_delay_ms(500);
			PORTC=(m[i]);
			PORTD=0x00;
			
		}
		
    }
}

