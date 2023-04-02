#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int scrivi_conta_caratteri(FILE* f, const char* s) {

	if (s == NULL)
		return 0;

	size_t len = strlen(s);
	fprintf(f, "%s\n", s);

	for (size_t i = 0, j = 1; i < len; i++, j++) {
		if (j == 10)
			j = 0;

		int c = fputc(('0'+j), f);
		if (c == EOF)
			return 0;
	}

	return len;
}