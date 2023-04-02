#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

bool is_perfect(uint32_t n) {

	size_t i, j;
	for (i = 1, j = 0; i <= n / 2; i++) {
		if (n % i == 0)
			j++;
	}

	uint32_t* x = malloc(j * sizeof(uint32_t));
	for (i = 1, j = 0; i <= n / 2; i++) {
		if (n % i == 0) {
			x[j] = i;
			j++;
		}
	}

	uint32_t y = 0;
	for (i = 0; i < j; i++) {
		y += x[i];
	}

	if (y == n) {
		free(x);
		return true;
	}
	else {
		free(x);
		return false;
	}
}