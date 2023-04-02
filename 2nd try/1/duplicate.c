#include <stdbool.h>
#include <stdlib.h>

bool cifre_duplicate_oct(unsigned int n) {

	size_t i;
	unsigned int a = n;

	for (i = 0; a != 0; i++) {
		a /= 8;
	}
	unsigned int* b = malloc(i * sizeof(unsigned int));
	size_t j, k, l;
	for (j = 0, a = n; a != 0; j++) {
		b[j] = a % 8;
		a /= 8;
	}

	for (j = 0; j < i; j++) {
		for (k = 0, l = 0; k < i; k++) {
			if (b[j] == b[k])
				l++;
		}
		if (l >= 2) {
			free(b);
			return true;
		}
	}
	free(b);
	return false;
}