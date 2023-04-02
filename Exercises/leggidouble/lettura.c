#define _CRT_SECURE_NO_WARNINGS

#include "lettura.h"

double* leggidouble(const char* filename, size_t* size) {

	FILE* f = fopen(filename, "r");
		if (f == NULL)
			return NULL;
	
	size_t n = 0;
	int ret = 1;

	double* x = NULL;


	while (ret==1){
		
		x = realloc(x, sizeof(double) * (n + 1));

		ret = fscanf(f, "%lf[^ \n\t]", x + n);

		n++;
	}

	if (n - 1 == 0 && ret != 1) {
		free(x);
		fclose(f);
		return NULL;
	}

	*size = n - 1;
	
	fclose(f);
	return x;
}