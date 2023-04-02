#define _CRT_SECURE_NO_WARNINGS

#include "scrittura.h"

int scrivimaiuscolo(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return 0;

	size_t i = 0;
	
	fseek(f, 0, SEEK_END);
	int n = ftell(f);
	
	rewind(f);

	char* x = calloc((n+1), sizeof(char));

	while(1){

		int c = fgetc(f);
		if (c == EOF)
			break;

		if (islower(c))
			c = toupper(c);

		x[i] = c;
		i++;
	}


	printf("%s", x);
	
	free(x);
	fclose(f);

	return 1;
}