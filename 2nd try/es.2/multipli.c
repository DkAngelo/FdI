#include <stdlib.h>

int* rimuovi_multipli(const int* v, size_t size, size_t* newsize) {

	size_t i, k;
	*newsize = size;
	for (i = 0; i < size; i++) {
		for (k = 0; k < size; k++) {
			if (v[i] % v[k] == 0 && v[i] / v[k] != 1) {
				*newsize = *newsize - 1;
				break;
			}
		}
	}

	int* x = malloc(*newsize * sizeof(int));
	size_t j = 0;
	for (i = 0; i < size; i++) {
		for (k = 0; k < size; k++) {
			if (v[i] % v[k] == 0 && v[i] / v[k] != 1) {
				break;
			}
		}
		if (k == size) {
			x[j] = v[i];
			j++;
		}
		if (j == *newsize) {
			return x;
		}
	}
}