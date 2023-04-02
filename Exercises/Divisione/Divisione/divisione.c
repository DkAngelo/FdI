int divisione(double a, double b, double* q) {

	if (b != 0) {

		*q = a / b;

		return 1;

	}
	else {

		return 0;

	}

}

int main(void) {

	double a, b, x, * q = &x;

	a = 18;
	b = 0;

	q = divisione(a, b, q);

	return 0;

}