#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argv, char* argc[]) {

	if (argv == 4) {
		double a, b, c;
		char* ris;

		a = strtod(argc[1], &ris);
		b = strtod(argc[2], &ris);
		c = strtod(argc[3], &ris);

		if (a <= 0 || b <= 0 || c <= 0)
			return 1;

		double area = sqrt((a + b + c) * (b + c - a) * (a + c - b) * (a + b - c)) / 4;
		printf("%lf", area);
		return 0;
	}
	return 1;
}