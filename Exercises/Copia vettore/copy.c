#include <stdlib.h>
#include <stdint.h>

void copy(uint32_t* dst, uint32_t* src, size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		src[i] = dst[i];
	}
	return 0;
}