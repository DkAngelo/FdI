#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void scrivi_v(FILE* f, uint8_t n) {

	size_t i, j;
	unsigned int space1 = 0;
	unsigned int space2;
	unsigned int a = 1;

	while (1) {
		if (a > n)
			break;
		space2 = n * 2 - 2*a;
		for (j = 0; j < space1; j++) {
			fprintf(f, " ");
		}
		space1++;
		fprintf(f, "\\");
		for (i = 0; i < space2; i++) {
			fprintf(f, " ");
		}
		a++;
		fprintf(f, "/\n");
	}
}