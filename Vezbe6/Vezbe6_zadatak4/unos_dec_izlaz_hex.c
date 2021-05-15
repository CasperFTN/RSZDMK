/**
* @file unos_dec_izlaz_hex.c
* @brief Unesemo decimalni broj a dobijamo ga u hex formatu
* @author Miroslav Bogdanovic
* @date 12-05-2021
* @version 1.0
*/

#include <util/delay.h>
#include "usart.h"
#include "korisne_funkcije.h"

int main(){

	int8_t dec_broj[64];
	int8_t hex_broj[64];
	int dec;


	usartInit(9600);
	while(1){

		usartPutString("Unesite decimalni broj:\r\n");
		while(!usartAvailable());

		_delay_ms(100);

		usartGetString(dec_broj);


		dec = atoi(dec_broj);

		Pretvori_u_hex(dec, &hex_broj[0]);

		usartPutString(hex_broj);
		usartPutString("\r\n");

	}

	return 0;
}


