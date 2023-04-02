#include <stdlib.h>
#include <stdint.h>
#include "stat.h"

double media(double* x, unsigned int n)
{
	double m = 0;

	for (unsigned int i = 0; i < n; ++i)
	{
		m += x[i];
	}
	return m / n;
}

double varianza(double* x, unsigned int n)
{
	double m = media(x, n);
	double num = 0;

	for (unsigned int i = 0; i < n; ++i)
	{
		num += (x[i] - m) * (x[i] - m);
	}

	return num / n;

}