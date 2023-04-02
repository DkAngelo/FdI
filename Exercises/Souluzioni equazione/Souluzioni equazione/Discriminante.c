double discriminante(double a, double b, double c) {

	double A = (b * b);
	double B = 4 * a * c;
	double dis = A - B;

	if (dis < 0) {
		return 0;
	}
	else if (dis = 0) {
		return 1;
	}
	else if (dis > 0) {
		return 2;
	}
}