double radq(double a, double b, double c) {

	double A = (b * b);
	double B = 4 * a * c;
	double dis = A - B;

	double t, x = dis;

	if (x <= 0.) {
		return 0.;
	}

	do {
		t = x;
		x = 0.5 * (t + dis / t);
	} while (x != t);

	return x;

}