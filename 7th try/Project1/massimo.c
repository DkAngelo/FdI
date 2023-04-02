#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int cercaMassimo(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return NULL;
	int x;
	int c = fscanf(f, "%i", &x);

	int y;
	while (1) {
		c = fscanf(f, "%i", &y);
		if (c == EOF)
			break;
		if (y > x) {
			x = y;
		}
	}

	fclose(f);
	return x;
}