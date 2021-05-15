
#include <avr/pgmspace.h>

#include "korisne_funkcije.h"
#include "usart.h"

void Pretvori_u_veliko_slovo_i_ispisi (int8_t karakter){

	if(karakter > 0){												// proveravamo da li postoji
					if( (karakter >= 65) && (karakter <= 90) ){		// proveravamo da li je veliko slovo

						usartPutChar(karakter);						// ako je veliko ispisujemo ga
					}
					else if((karakter >= 97) && (karakter <= 122)){ // proveravamo da li je malo slovo
						karakter = karakter - 32;					// prebacujemo ga u veliko
						usartPutChar(karakter);						// ispisujemo ga
					}
				}


}

void Pretvori_u_hex(int dec, int8_t *hex){

	int pomocna = 0;
	int8_t i = 0;
	int8_t j = 0;
	int8_t k = 0;
	int8_t pomocni[64];

	while( dec != 0 ){


			pomocna = dec % 16;

			if(pomocna < 10){

				pomocni[i] = pomocna + 48;
				i = i + 1;
			}
			else{
				pomocni[i] = pomocna + 55;
				i = i + 1;
			}

			dec = dec / 16;
		}
	for(j = i - 1; j >= 0; j = j - 1){
				hex[k] = pomocni[j];
				k = k + 1;
			}
	hex[k] = '\0';

}
