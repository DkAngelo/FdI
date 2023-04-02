#define _CRT_SECURE_NO_WARNINGS

#include "sequenza.h"

bool seq_load(const char* filename, struct seq* s) {

	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return false;

	size_t x = 0;
	s->len = x;

	while (1) {
		int c = fgetc(f);
		if (c == EOF)
			break;
		x++;
		if (x % 2 == 0)
			s->len = s->len + 1;
	}

	rewind(f);
	s->values = malloc(s->len * sizeof(uint16_t));
	uint16_t a = 0;
	for (size_t i = 0, j = 0; i < x; i++) {
		uint16_t b = fgetc(f);
		if (i % 2 != 0) {
			b <<= 8;
			s->values[j] = a+b;
			a = 0;
			j++;
		}
		a = b;
	}

	fclose(f);
	return true;
}