
/**
* @file blink_delay.c
* @brief LED trepce frekvencijom 2Hz a reseno je upotrebom _delay_ms() funkcije
* @author Miroslav Bogdanovic
* @date 07-05-2021
* @version 1.0
*/

#include <avr/io.h>
#include <util/delay.h>

/**
* main - funkcija sluzi da napravi da LED
* trepce frekvencijom 2Hz a reseno je upotrebom
* _delay_ms() funkcije
*/

int main()
 {
	DDRB |= 1 << 5;         //PB5 je izlaz

	while (1)
	{
		PORTB |= 1 << 5;    //LED ON
		_delay_ms(500);     //pauza 1s
		PORTB &= ~(1 << 5); //LED OFF
		_delay_ms(500);     //pauza 1s
	}

	return 0;
 }
