double square_dist(double x1, double x2, double y1, double y2) {

	double x = (x1 - x2) * (x1 - x2);
	double y = (y1 - y2) * (y1 - y2);

	return x + y;
}

double main (void) {

	double x1, y1, x2, y2, D;

	x1 = 2;
	x2 = 3;
	y1 = 2;
	y2 = 3;

	D = square_dist(x1, x2, y1, y2);

}