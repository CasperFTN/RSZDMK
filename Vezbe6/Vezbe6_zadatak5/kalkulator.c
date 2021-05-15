/**
* @file kalkulator.c
* @brief Unesemo 2 cela broja i operator i dobijemo rezultat
* @author Miroslav Bogdanovic
* @date 14-05-2021
* @version 1.0
*/

#include <util/delay.h>
#include "usart.h"

int main(){

	int8_t izraz[64]= {0};
	int8_t operand1[64] = {0};
	int8_t operand2[64] = {0};
	int8_t rezultat_niz[64] = {0};
	int rezultat = 0;
	int8_t i = 0;
	int8_t k = 0;
	int8_t duzina_izraza = 0;
	int8_t mesto_znaka = 0;

	usartInit(9600);

	while(1){

		usartPutString("Unesite Vas izraz:\r\n");
		while(!usartAvailable());

		_delay_ms(100);

		duzina_izraza = usartGetString(izraz);

		for(i = 0; i < duzina_izraza; i = i + 1){		//ova petlja daje mesto znaka i prvi operand

			if((izraz[i]=='+') || (izraz[i]=='-') || (izraz[i]=='*') || (izraz[i]=='/')){
				mesto_znaka = i;
				operand1[i] = '\0';
				break;
			}
			else{
				operand1[i] = izraz[i];
			}

		}

		k = 0;

		for(i = mesto_znaka + 1; i <= duzina_izraza; i = i + 1){	 //ova petlja daje drugi operand

				if(izraz[i]=='\0'){
					operand2[k] = '\0';
					break;
				}
				else {
					operand2[k] = izraz[i];
				}
				k = k + 1;
		}

		switch (izraz[mesto_znaka]){

		case '+':
			rezultat =atoi(operand1) + atoi(operand2);
			itoa(rezultat, rezultat_niz,10);
			break;

		case '-':
			rezultat =atoi(operand1) - atoi(operand2);
			itoa(rezultat, rezultat_niz,10);
			break;

		case '/':
			rezultat =atoi(operand1) / atoi(operand2);
			itoa(rezultat, rezultat_niz,10);
			break;

		case '*':
			rezultat =atoi(operand1) * atoi(operand2);
			itoa(rezultat, rezultat_niz,10);
			break;

		default:
			rezultat = 0;
			itoa(rezultat, rezultat_niz,10);
		}


		usartPutString("Prvi operand:\r\n");
		usartPutString(operand1);
		usartPutString("\r\n");
		usartPutString("Drugi operand:\r\n");
		usartPutString(operand2);
		usartPutString("\r\n");
		usartPutString(rezultat_niz);
		usartPutString("\r\n");


	}
	return 0;
}


