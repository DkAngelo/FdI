#include <stdlib.h>
#include <stdint.h>

double* probabilita(const uint32_t* v, size_t n) {

	if (v == NULL || n == 0)
		return NULL;

	size_t k, i;
	double a = 0;
	for (k = 0; k < n; k++) {
		a += v[k];
	}
	if (a == 0)
		return NULL;

	double* x = malloc(n * sizeof(double));
	for (i = 0; i < n; i++) {
		x[i] = v[i]/a;
	}

	return x;
}