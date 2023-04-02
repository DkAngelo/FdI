#include <stdlib.h>

int felice(unsigned int num) {

	unsigned int x = num;
	unsigned int a, b = 0, t;
	size_t i, j;

	if (num == 0)
		return 0;

	while (1) {

		t = x;

		for (i = 0; x > 0; i++)
			x /= 10;

		for (j = 0; j < i; j++) {
			a = t % 10;
			t /= 10;
			b += (a * a);
		}

		if (b == 1)
			return 1;
		else if (b == 4)
			return 0;
		else {
			x = b;
			b = 0;
		}
	}
}