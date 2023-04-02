#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void stampa_cornicetta(const char* s) {

	size_t len = strlen(s);
	size_t i = 0;

	printf("/");

	for (i = 0; i < (len+2); i++) {
		printf("-");
	}

	printf("\\\n");
	printf("| %s |\n", s);

	printf("\\");
	for (i = 0; i < (len + 2); i++) {
		printf("-");
	}
	printf("/\n");

}