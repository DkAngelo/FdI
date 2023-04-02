#include <stdlib.h>
#include <stdint.h>

extern void iota(uint32_t* x, size_t n);

int main(void)
{
	size_t n = 5;
	uint32_t* v = malloc(n * sizeof(uint32_t));
	v[0] = 23;
	v[1] = 23;
	v[2] = 23;
	v[3] = 23;
	v[4] = 23;
	iota(v, n);
	free(v);

	return 0;
}