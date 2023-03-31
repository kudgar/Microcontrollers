/*
 * _1.c
 *
 * Created: 27.08.2022 22:34:18
 *  Author: 
 */ 

#include <avr/io.h>

int main(void)
{
	DDRC = 0b0000001;
	PORTC = 0b00000001;
    while(1)
    {
        
    }
}