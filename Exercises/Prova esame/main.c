#include <stdlib.h>

extern int* rotate(const int* vec, size_t len, size_t r);

int main() {

	int a[] = { 1, 2, 3, 4 , 5, 6, 7, 8, 9};
	int *ris = rotate(a, 9, 15);

	return 0;
}