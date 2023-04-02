#define _CRT_SECURE_NO_WARNINGS

#include "rational.h"

struct rational* rational_read(const char* filename, size_t* size) {

	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return NULL;

	while (1){
		char x[] = "";
		int c = fscanf(f, "%i/%i", );
		if (c == EOF)
			break;
	}

	return 0;
}