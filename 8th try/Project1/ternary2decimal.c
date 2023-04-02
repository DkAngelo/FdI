#include <stdlib.h>
#include <stdio.h>

int main(int argv, char** argc) {

	if (argv < 2)
		return 1;

	size_t i, j;
	int y = 0;
	int n;

	for (i = 1; i < argv; i++) {
		n = 9;
		for (j = 0; j < 3; j++) {
			switch (argc[i][j]) {
			case('-'):
				y += -1 * n;
				n /= 3;
				continue;
			case('0'):
				y += 0 * n;
				n /= 3;
				continue;
			case('+'):
				y += 1 * n;
				n /= 3;
				continue;
			}
			return 1;
		}
		printf("%i\n", y);
	}
	return 0;
}