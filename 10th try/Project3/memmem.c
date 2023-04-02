#include <stdlib.h>

const void* memmem(const void* pagliaio, size_t psize, const void* ago, size_t asize) {

	if (pagliaio == NULL || psize == 0 || asize == 0 || ago == NULL)
		return NULL;

	int mem = 
}