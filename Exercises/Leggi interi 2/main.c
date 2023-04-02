#include "lettura.h"

int main (void) {

	size_t i;
	int *a = leggiinteri2("numeri.txt", &i);

	free(a);

	return 0;
}