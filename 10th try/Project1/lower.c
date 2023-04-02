#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argv, char** argc) {

	if (argv < 2)
		return 1;

	size_t i;
	for (i = 1; i < argv; i++) {
		FILE* f = fopen(argc[i], "r");
		if (f == NULL)
			return 1;

		while (1) {
			int c = fgetc(f);
			if (c == EOF)
				break;
			if (isupper(c))
				c = tolower(c);
			fputc(c, stdout);
		}
		return 0;
	}	
}