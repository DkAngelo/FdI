#include <stdlib.h>
#include <stdint.h>

void raddoppia(uint32_t* x, size_t n) 
{
	for (size_t i = 0; i < n; i++) 
	{
		x[i] = x[i] * 2;
	}

	return 0;

}
int main(void) 
{
	size_t n = 3;
	uint32_t* v = malloc(n * sizeof(uint32_t));
	v[0] = 12;
	v[1] = 59;
	v[2] = 83;
	raddoppia(v, n);
	free(v);

	return 0;

}