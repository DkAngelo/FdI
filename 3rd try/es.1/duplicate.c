#include <stdbool.h>
#include <stdlib.h>

bool cifre_duplicate(unsigned long long n) {

	size_t i;
	unsigned long long a = n;
	for (i = 0; a != 0; i++) {
		a /= 10;
	}

	size_t j;
	unsigned long long* x = malloc(i * sizeof(unsigned long long));
	for (j = 0, a = n; a != 0; j++) {
		x[j] = a % 10;
		a /= 10;
	}

	size_t k, l;
	for (j = 0; j < i; j++) {
		for (k = 0; k < i; k++) {
			if (x[j] == x[k] && k != j){
				free(x);
				return true;
			}
		}
	}
	free(x);
	return false;
}