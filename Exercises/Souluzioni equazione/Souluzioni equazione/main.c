extern int soluzioni(double a, double b, double c, double* x1, double* x2);

int main(void) {

	double a, b, c, d, e, * x1 = &d, * x2 = &e, Sol;

	a = 1;
	b = 2;
	c = 0;

	Sol = soluzioni(a, b, c, x1, x2);

	return 0;

}