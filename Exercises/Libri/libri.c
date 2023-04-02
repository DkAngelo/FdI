#define _CRT_SECURE_NO_WARNINGS

#include "libri.h"

bool libro_scrivi(const struct libro* p, FILE* f) {

	uint8_t x = 0, b = 0;
	uint16_t a;

	if (f == NULL)
		return NULL;

	int c = fputs(p->titolo, f);		//ricopio il titolo
	if (c == EOF)
		return false;

	c = fputc(0, f);					//zerotermino
	if (c == EOF)
		return false;

	for (size_t k = 0; ; k++) 
	{	
		a = p->anni_ristampe[k];		//leggo l'anno
		
		if (a == 0) {
			for (size_t j = 0; j < 2; j++) {
				c = fputc(0, f);
				if (c == EOF)
					return false;
			}
			break;
		}
		for (size_t i = 0; i < 4; i++) {		//traduzione in hex e scrittura
			
			b = a % 16;
			b <<= ((i%2) * 4);
			x += b;
			a /= 16;
			if ((i%2) == 1) {
				c = fputc(x, f);
				if (c == EOF)
					return false;
				x = 0;
			}
		}
	}
	return true;
}