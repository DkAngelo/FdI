#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

size_t contanumeri(const char* nomefile) {

	if (nomefile == NULL)
		return NULL;

	FILE* f = fopen(nomefile, "r");
	if (f == NULL)
		return NULL;

	size_t i = 0;
	while (1) {
		int c = fgetc(f);
		if (c == EOF)
			break;
		else if (c - '0' >= 0 && c - '0' <= 9)
			i++;
	}
	fclose(f);
	return i;
}