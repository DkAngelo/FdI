#include <stdlib.h>

extern void encrypt(char* s, unsigned int n);

int main(void) {

	char a[] = { 2, 2, 2 };
	char b[] = "abcdef";

	encrypt(&a, 3);
	encrypt(&b, 7);

	encrypt(&a, 3);
	encrypt(&b, 7);

	return 0;
}