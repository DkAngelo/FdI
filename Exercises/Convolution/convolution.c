#include <stdlib.h>

int* convolution3(const int* v, size_t lenv, const int k[3]) {
	if (v == NULL || k == NULL)
		return NULL;

	int* c = malloc(lenv * sizeof(int));

	for (size_t n = 0; n < lenv; ++n) {

		if(n == 0)
			{ c[n] = v[n + 1] * k[0] + v[n + 1 - 1] * k[1]; }

		else if (n == lenv - 1) 
			{ c[lenv - 1] = v[n + 1 - 1] * k[1] + v[n + 1 - 2] * k[2]; }

		c[n] = v[n + 1] * k[0] + v[n + 1 - 1] * k[1] + v[n + 1 - 2] * k[2];
	}

	return c;
}