#include <stdlib.h>
#include <stdint.h>

extern void copy(uint32_t* dst, uint32_t* src, size_t n);

int main(void)
{
	size_t n = 3;
	uint32_t* v = malloc(n * sizeof(uint32_t));
	v[0] = 2;
	v[1] = 3;
	v[2] = 6;

	uint32_t* p = malloc(n * sizeof(uint32_t));
	copy(v, p, n);
	
	free(v);
	free(p);

	return 0;
}