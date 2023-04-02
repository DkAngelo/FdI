#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>

extern bool scrivi_intero(const char* filename, int i);

int main(void) {

	int i = 22;

	scrivi_intero("pipo", i);

	return 0;
}