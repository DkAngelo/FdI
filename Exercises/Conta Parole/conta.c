#include <stdlib.h>
#include <string.h>

size_t conta_parole(const char* s) {

	size_t n = strlen(s);
	size_t x = 0;
	size_t i = n;

	for (size_t j = 0; j < i; j++) {
		
		if (s[j] != ' ') {
			i = j;	
		}

	}

	for (i; i < n; i++) {
		if (s[i] == ' ') {
			x++;
		}
	}

	if (s[n-1] != ' ') {
		x++;
	}

	return x;
}