/*
 * GccApplication1.c
 *
 * Created: 25.10.2018 20:49:18
 * Author : nikit
 */ 

#include <avr/io.h>
#include <util/delay.h>

uint8_t m [8]={0b11111110,0b11111100,0b11111000,0b11110000,0b11100000,0b11000000,0b10000000,0b00000000};

int main(void)
{
	DDRB=0b11111111;
	DDRD=0b11111111;
	/* Replace with your application code */
	while (1)
	{
		 int i=0;
		if (PINC & (1<<PINC0))
		{
			PORTB=0b00000000;
		}
		else
		{
			PORTB=0xFF;
			for (i = 0; i<8; i++)
			{
				_delay_ms(500);
				PORTB=0xFF;
				_delay_ms(500);
				PORTB=(m[i]);
			}
		}
		
		if (PINC & (1<<PINC1))
		{
			PORTD=0b00000000;
		}
		else
		{
			PORTD=0xFF;
			for (i = 0; i<8; i++)
			{
				_delay_ms(500);
				PORTD=0xFF;
				_delay_ms(500);
				PORTD=(m[i]);
			}
		}
	}
}


