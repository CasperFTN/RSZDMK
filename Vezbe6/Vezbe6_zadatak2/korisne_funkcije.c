
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
