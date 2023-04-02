double esponenziale(double x, double n)
{
	double ris = 1;

	for (double i = 0; i < n; ++i)
	{
		ris *= x;
	}

	return ris;
}
