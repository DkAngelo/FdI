#include <stdlib.h>

int* clamped(const int* v, size_t n, int min, int max) {

	if (v == NULL || n == 0 || min > max)
		return NULL;

	int* x = malloc(n * sizeof(int));
	size_t i;
	for (i = 0; i < n; i++) {
		if (v[i] < min) 
			x[i] = min;
		if (v[i] >= min && v[i] <= max)
			x[i] = v[i];
		if (v[i] > max)
			x[i] = max;
	}
	return x;
}