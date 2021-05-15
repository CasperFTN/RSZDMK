/**
* @file pretvori_u_velika.c
* @brief Unesemo string a vraca se isti string ispisan svim velikim slovima
* @author Miroslav Bogdanovic
* @date 12-05-2021
* @version 1.0
*/

#include <util/delay.h>
#include "usart.h"
#include "korisne_funkcije.h"

int main(){

	//int8_t str[64];
	int8_t naredni_karakter;
	int8_t i = 0;

	usartInit(9600);
	while(1){

		//usartPutString("Unesite svoje ime\r\n");
		while(!usartAvailable());

		_delay_ms(100);

		//usartGetString(str);

		for(i=0; i<UART_BUFFER_SIZE; i=i+1){

			naredni_karakter = usartGetChar();
			Pretvori_u_veliko_slovo_i_ispisi(naredni_karakter);
		}

	}

	return 0;
}



