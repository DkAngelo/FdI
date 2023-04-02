extern double esponenziale(double x, double i);
extern double fattoriale(double x);

double exp(double x)
{
	double t = -1, j = 0;

	for (double i = 0; ; i++)
	{
		

		if (t == j) { break; }
		t = j;

		double a = fattoriale(i);
		double b = esponenziale(x, i);

		j += (b / a);

	}
	return j;
}

int main(void) {

	double e, x = -4;

	double d = esponenziale(2, 5);
	double q = fattoriale(5);

	e = exp(x);

	return 0;

}