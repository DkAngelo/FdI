#include <stdlib.h>
#include <stdint.h>

void iota(uint32_t* x, size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		x[i] = i;
	}
	return 0;
}