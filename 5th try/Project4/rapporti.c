#define _CRT_SECURE_NO_WARNINGS

#include "rapporti.h"

struct rapporto* leggi_rapporti(const char* filename, uint16_t* n) {

	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return NULL;

	size_t i = 0;
	while (1) {
		int c = fgetc(f);
		*n = c;
		c = fgetc(f);
		*n += (c << 8);
		i += 2;
		break;
	}

	struct rapporto* r = (*n * sizeof(struct rapporto));

	size_t j = 0;
	
	while (1) {
		int c = fgetc(f);
		if (c == EOF)
			break;

		if (i % 8 == 1) {
			r->id = c;
			c = fgetc(f);
			r->id += (c << 8);
			i += 2;
			continue;
		}
		else if (i % 7 == 4) {
			r->tipo = c;
			i++;
			continue;
		}
		else {
			r->valore = c;
			c = fgetc(f);
			r->valore += (c << 8);
			c = fgetc(f);
			r->valore += (c << 16);
			c = fgetc(f);
			r->valore += (c << 32);
			i += 4;
			j++;
			continue;
		}
	}
	return r;
}