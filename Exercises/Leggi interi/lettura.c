#define _CRT_SECURE_NO_WARNINGS

#include "lettura.h"
#include <stdio.h>
#include <stdlib.h>

int* leggiinteri(const char* filename, size_t* size) {

	size_t a = 0;
	int ris = 0, b = 0;

	FILE* f = fopen(filename, "rb");

	if (f == NULL) {
		return NULL;
	}

	for (size_t i = 0; i < 4; i++) {				// prende la size e alloca memoria

		int c = fgetc (f);
		if (c == EOF) {
			fclose(f);
			return NULL;
		}

		c <<= ris;
		a += c;
		ris += 8;

	}

	*size = a;
	
	int* n = malloc(*size * sizeof(int));
	ris = 0;
	
	for (size_t i = 1; i <= (a*4); i++) {			// prende i numeri successivi 

		int c = fgetc(f);
		if (c == EOF) {
			fclose(f);
			return NULL;
		}

		c <<= ris;
		b += c;
		ris += 8;
		
		if ((i % 4) == 0) {							// posiziona i numeri in n

			int d = (i / 4) - 1;
			n[d] = b;

			ris = 0;
			b = 0;
		}
	}

	fclose(p);

	return n;
}