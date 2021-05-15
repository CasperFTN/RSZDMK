/**
 * @file	korisne_funkcije.h
 * @brief	Funkcije za rad sa serijskom komunikacijom
 * @author	Miroslav Bogdanovic
 * @date	12-05-2021
 */

#ifndef KORISNE_FUNKCIJE_H_
#define KORISNE_FUNKCIJE_H_

/**
 * Funkcija uzima karakter, proverava da li je slovo veliko i ako jeste ispisuje ga. Ako slovo nije veliko pretvara
 * ga u veliko i onda ga ispisuje. Ova funkcija radi samo za slova!
 * @param karakter ovo prosledjujemo da se proveri i ispise
 */
void Pretvori_u_veliko_slovo_i_ispisi(int8_t karakter);

/**
 * Funkcija uzima int koji predstavlja broj koji se pretvara u heksadecimalni zapis kao i
 * adresu prvog clana niza gde se smesta heksadecimalni zapis.
 * @param dec predstavlja broj u decimalnom zapisu koji zelimo da prebacimo u hecksadecimalni
 * @param hex predstavlja niz gde smestamo heksadecimalni zapis
 */
void Pretvori_u_hex(int dec, int8_t *hex);

#endif /* KORISNE_FUNKCIJE_H_ */
