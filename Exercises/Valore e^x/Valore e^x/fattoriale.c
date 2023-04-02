double fattoriale(double x)
{
	double f = 1;

	if (x == 0 || x == 1)
	{
		return 1;
	}

	//else for (double i = x; i > 0; i--)
	else for (double i = 2; i <= x; i++)
	{
		f *= i;
	}
	return f;
}
