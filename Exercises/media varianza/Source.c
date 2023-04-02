#include <stdlib.h>
#include <stdint.h>
#include "stat.h"



int main(void)
{
	unsigned int n = 4;
	
	double* x = malloc(n * sizeof(double));
	
		x[0] = 2;
		x[1] = 2;
		x[2] = 4;
		x[3] = 4; 
	
	//double x[] = { 2, 2, 4, 4 };
	double m = media(x, n);
	double v = varianza(x, n);

	free(x);

	return 0;
}