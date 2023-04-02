#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>

bool scrivi_intero(const char* filename, int i) {
	
	FILE* f = fopen(filename, "w");

	if (f == NULL) {
		return false;
	}

	fprintf(f, "i vale %d", i);
	fclose(f);

	return true;

}
