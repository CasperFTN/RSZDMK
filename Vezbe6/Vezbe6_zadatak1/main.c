/**
* @file main.c
* @brief Unesemo ime i prezime a dobijamo pozdrav preko serijske komunikacije
* @author Miroslav Bogdanovic
* @date 12-05-2021
* @version 1.0
*/

#include <util/delay.h>
#include "usart.h"

int main(){

	int8_t str[64];
	usartInit(9600);
	while(1){

		usartPutString("Unesite svoje ime\r\n");
		while(!usartAvailable());

		_delay_ms(100);
		usartGetString(str);
		usartPutString("Zdravo, ");
		usartPutString(str);
		usartPutString(" :) \r\n");

	}

	return 0;
}
