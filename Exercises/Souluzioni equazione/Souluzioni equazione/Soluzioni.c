int soluzioni(double a, double b, double c, double* x1, double* x2) {

	extern double discriminante(double a, double b, double c);

	if (discriminante != 0) {

		extern double radq(double a, double b, double c);

		double x = radq(a, b, c);
		
		*x1 = (-b + x) / (2 * a);
		*x2 = (-b - x) / (2 * a);

		return 2;
	}
	else {
		return 0;
	}
}