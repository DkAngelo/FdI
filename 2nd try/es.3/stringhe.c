#define _CRT_SECURE_NO_WARNINGS

#include "stringhe.h"

char* spacefill(const char* str, size_t n) {

	if (str == NULL)
		return NULL;

	size_t len = strlen(str);

	if (len < n) {
		size_t nspace = n - len;
		char *ris = calloc((n + 1) * sizeof(char), 1);
		for (size_t i = 0; i <= nspace; i++) {
			ris[i] = ' ';
		}
		strcat(ris, str);
		return ris;
	}
	else
		return str;
	
}