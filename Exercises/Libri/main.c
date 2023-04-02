#define _CRT_SECURE_NO_WARNINGS

#include "libri.h"

int main(void) {

	char* a = "Geometria";
	uint16_t b[] = { 2001, 2002, 0 };

	struct libro libro = { a, b };

	FILE* d = fopen("test.bin", "wb");

	bool ris = libro_scrivi(&libro, d);
	
	fclose(d);

	return 0;
}