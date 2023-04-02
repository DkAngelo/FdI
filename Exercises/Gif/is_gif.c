#define _CRT_SECURE_NO_WARNINGS

#include "is_gif.h"

bool is_gif(const char* filename) {

	FILE *f = fopen(filename, "rb");

	char a[] = "GIF89a";
	char b[] = "GIF87a";

	char* c = NULL;
	c = calloc(c, 6 * sizeof(char));

	for (size_t i = 0; i < 6; i++) {
		int l = fgetc(f);
		if (l == EOF)
			return false;

		c[i] = l;
	}

	int d = strcmp(a, c);
	int e = strcmp(b, c);
	if (d == 0 || e == 0)
		return true;

	return false;
}