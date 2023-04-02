#define _CRT_SECURE_NO_WARNINGS

#include "compress.h"

int dati_read(const char* filename, struct dati* d) {

	if (filename == NULL)
		return 0;
	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return 0;

	size_t i = 0;
	while (1) {
		int c = fgetc(f);
		if (c == EOF)
			break;

		switch (c) {
		case(1):
			fseek(f, 1, SEEK_CUR);
			i++;
			continue;
		case(2):
			fseek(f, 2, SEEK_CUR);
			i++;
			continue;
		case(4):
			fseek(f, 4, SEEK_CUR);
			i++;
			continue;
		}
		fclose(f);
		return 0;
	}
	rewind(f);
	d->len = i;
	d->vals = malloc(i * sizeof(int));
	i = 0;
	char a;
	short b;

	while (1) {
		int c = fgetc(f);
		if (c == EOF)
			break;

		switch (c) {
		case(1):
			a = fgetc(f);

			d->vals[i] = a;
			i++;
			continue;
		case(2):
			b = fgetc(f);
			b <<= 8;
			b += fgetc(f);
			d->vals[i] = b;
			i++;
			continue;
		case(4):
			c = fgetc(f);
			c <<= 32;
			c += (fgetc(f) << 16);
			c += (fgetc(f) << 8);
			c += (fgetc(f));
			d->vals[i] = c;
			i++;
			continue;
		}
		fclose(f);
		return 0;
	}
	fclose(f);
	return 1;
}