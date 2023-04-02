#include <stdbool.h>
#include <stdlib.h>

bool crescente(unsigned int x) {

	size_t i;
	unsigned int t = x;
	for (i = 0; t > 0; i++)
		t /= 10;

	if (i == 1)
		return true;

	size_t k = i;
	unsigned int* c = malloc(i * sizeof(unsigned int));

	if (c == NULL)
		return NULL;

	for (i; i != 0; i--) {
		c[i - 1] = x % 10;
		x /= 10;
	}

	for (i; ; i++) {
		if (i == k-1) {
			free(c);
			return true;
		}
		if (c[i] + 1 != c[i + 1]) {
			free(c);
			return false;
		}
	}
}