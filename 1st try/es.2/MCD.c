#include <stdlib.h>
#include <stdint.h>

uint32_t vector_MCD(const uint32_t* v, size_t n) {

	if (v == NULL || n == 0)
		return 0;
	uint32_t x = v[0];
	size_t i, j;

	for (j = 0; j < n; j++) {
		if (v[j] > x)
			x = v[j];
	}
	
	for (i = x; i != 1; i--) {
		for (j = 0; j < n; j++) {
			if (v[j] % i != 0)
				break;
		}
		if ((j + 1) > n)
			return i;
	}
	return i;
}