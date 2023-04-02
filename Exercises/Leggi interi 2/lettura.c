#define _CRT_SECURE_NO_WARNINGS

#include "lettura.h"


int* leggiinteri2(const char* filename, size_t* size) {

	size_t i = 0;
	int ris = 0, b = 0;

	FILE* f = fopen(filename, "rb");

	if (f == NULL) {
		return NULL;
	}

	while(1) {				// prende la size e alloca memoria

		
		int c = fgetc (f);
		if (c == EOF) {
			fclose(f);
			break;
		}

		i++;
	}


	*size = i/4;

	int* n = malloc(*size * sizeof(int));
	ris = 0;

	FILE* p = fopen(filename, "rb");
	
	for (i = 1; i <= (*size *4); i++) {			// prende i numeri successivi 

		int c = fgetc(p);
		if (c == EOF) {
			fclose(p);
			return NULL;
		}

		c <<= ris;
		b += c;
		ris += 8;
		
		if ((i % 4) == 0) {							// posiziona i numeri in n

			size_t d = (i / 4) - 1;
			n[d] = b;

			ris = 0;
			b = 0;
		}
	}

	fclose(p);

	return n;
}