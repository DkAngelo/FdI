#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argv, char** argc) {

	if (argv != 2)
		return 1;

	size_t len = strlen(argc[1]);

	int n = 0;
	int k = len - 1;
	for (size_t j = 0; j < len; k--, j++) {
		if (isdigit(argc[1][j])) {
			int a = argc[1][j] - '0';
			float b = powf(10, k);
			n += (a * b);
		}
		else
			return 1;
	}
	if (n == 0)
		return 1;

	int i;
	for (i = 1; i <= n; i++) {
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz\n");
		else if (i % 3 != 0 && i % 5 == 0)
			printf("Buzz\n");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("Fizzbuzz\n");
		else
			printf("%i\n", i);
	}
	return 0;
}