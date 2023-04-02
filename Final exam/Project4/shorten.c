#include <stdlib.h>

size_t shorten(int* v, size_t n, int max) {

	if (v == NULL)
		return 0;

	size_t newlen = n;
	size_t i;
	for (i = 0; i < n; i++) {
		if (v[i] > max) {
			newlen--;
		}
	}
	int tmp;
	for (i = 0; i < newlen; i++) {
		if (v[i] > max) {
			for (size_t j = i; j < n; j++) {
				if (v[j] <= max) {
					tmp = v[i];
					v[i] = v[j];
					v[j] = tmp;
					break;
				}
			}
		}
	}
	return newlen;
}

int main(void) {

	int x[] = { 5, 1, 7, 9, 11, 3, 8, 2, 1, 3, 5 };
	shorten(x, 11, 7);
}