#include <stdlib.h>

int* rotate(const int* vec, size_t len, size_t r) {

	if (vec == NULL)
		return NULL;

	size_t i;

	int* b = malloc(len * sizeof(int));

	for (i = 0; i < len; i++){

		b[(i + r) % len] = vec[i];
	}
	return b;
}