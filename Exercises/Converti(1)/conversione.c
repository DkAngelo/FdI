#include <stdlib.h>

char* converti(unsigned int n) {
	
	unsigned int num = n;
	size_t i;

	for (i = 0; num != 0; i++) {
		num /= 10;
	}

	char* a = calloc((i+1) * sizeof(char), 1);
	num = n;
	int r;

	for (int b = i - 1; b >= 0; b--) {
		
		r = num % 10;
		num /= 10;
		a[b] = r + '0';
	
	}

	return a;
}