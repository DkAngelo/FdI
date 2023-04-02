#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int* read_gruppi(const char* filename, size_t* ngruppi) {

	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return NULL;

	int x;
	*ngruppi = 0;
	size_t i = 0;
	while (1) {
		int c = fscanf(f, "%i", &x);
		if (c == EOF)
			break;
		i++;
		fseek(f, 2, SEEK_CUR);
		c = fgetc(f);
		if (c == '\n' || c == EOF)
			*ngruppi += 1;
		else
			fseek(f, -2, SEEK_CUR);
	}

	int* res = calloc(*ngruppi * sizeof(int), 1);
	rewind(f);
	size_t j, k;
	for (j = 0, k = 0; k < i; k++) {
		int c = fscanf(f, "%i", &x);
		res[j] += x;
		fseek(f, 2, SEEK_CUR);
		c = fgetc(f);
		if (c == '\n' || c == EOF)
			j++;
		else
			fseek(f, -2, SEEK_CUR);
	}

	fclose(f);
	return res;
}