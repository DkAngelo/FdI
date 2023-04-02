#include <stdlib.h>

double potenza(double* base, double exp) 
{	
	double ris = 1;

		if (exp == 0)
		{
			*base = 1;
		}

		else for (size_t i = 1; i <= exp ; ++i)
		{
			ris *= *base;
		}

		return *base = ris;

}

int main(void)
{
	double a[] = { 2,2,2,2,2,2,2,2,2,2 };
	size_t i, n = 10;
	
	for (i = 0; i < n; ++i)
	{
		a[i] = potenza(&a, i);

	}
	return 0;
}