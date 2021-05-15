/**
* @file proveravanje_palindroma.c
* @brief Unesemo string a vraca se informacija o tome da li je uneseni string palindrom
* @author Miroslav Bogdanovic
* @date 12-05-2021
* @version 1.0
*/

#include <util/delay.h>
#include "usart.h"

int main(){

	int8_t str[64];
	int8_t i = 0;
	int8_t duzina_unetog_stringa = 0;
	int8_t palindrom = 0;


	usartInit(9600);
	while(1){

		usartPutString("Unesite string\r\n");
		while(!usartAvailable());

		_delay_ms(100);

		duzina_unetog_stringa = usartGetString(str);
		/*if(duzina_unetog_stringa==7){
			usartPutString("7 clanova\r\n");
		}*/

		for( i=0; i<=duzina_unetog_stringa; i=i+1){

			if(str[i] == str[duzina_unetog_stringa-1]){
				palindrom = 1;
			}

			else
				palindrom = 0;
			    break;
		}

		if( palindrom == 0 ){
				usartPutString("Nije palindrom\r\n");
		}
		else
			usartPutString("Jeste palindrom\r\n");
	}

	return 0;
}
