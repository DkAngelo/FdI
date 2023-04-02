double discriminante(double a, double b, double c) {

	double A = (b * b);
	double B = 4 * a * c;
	double dis = A - B;

	return dis;

}

int main(void) {

	double a, b, c, dis;
	a = 1;
	b = 4;
	c = 3;

	dis = discriminante(a, b, c);

	return 0;

}