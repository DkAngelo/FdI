#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* f = fopen("test.txt", "a");
	if (f == NULL)
		return -1;

	while (1) {
		/*int c = fgetc(f);		//leggo
		if (c == EOF)			//controllo
			break;
		
		//uso*/
		const char s[] = "mammt";
		for (size_t i = 0; s[i] != 0; ++i) {
			int fputc(s, f);
		}
		return 2;
	}

	fclose(f);

	return 0;
}