#include <stdlib.h>
#include <stdio.h>

void stampa_tavola_pitagorica(FILE* f, unsigned int n) {

	for (size_t i = 1; i <= n; i++) {
		for (size_t j = 1; j <= n; j++) {
			unsigned int c = j * i;
			fprintf(f, "%i	", c);
		}
		fprintf(f, "\n");
	}
}