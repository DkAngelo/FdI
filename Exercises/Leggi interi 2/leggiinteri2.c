#define _CRT_SECURE_NO_WARNINGS

#include "lettura.h"

int *leggiinteri2(const char* filename, size_t* size){

	FILE* f = fopen(filename, "rb");

	size_t n = 0;

	while (1) {
		
		int x;
		size_t nread = fread(&x, sizeof x, 1, f);
		
		if (nread != 1)
		break;

	++n;
	}

	rewind(f);

	int* v = malloc(n * sizeof(int));
	size_t nread = fread(v, sizeof(int), n, f);

	if (nread != n) {
		free(v);
		return NULL;
	}

	*size = n;
	return v;

}