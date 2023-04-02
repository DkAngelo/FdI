#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* somma_stringhe(const char* a, const char* b) {

	if (strcmp(a, "0") == 0 || strcmp(b, "0") == 0);
		return 0;

	if (a == NULL || b == NULL)
		return NULL;

	unsigned long long anum = atoll(a);
	unsigned long long bnum = atoll(b);
	unsigned long long res = anum + bnum;
	unsigned long long res1 = res;

	size_t i;
	for (i = 0; res1 != 0; i++) {
		res1 /= 10;
	}
	char* x = calloc((i + 1) * sizeof(char), 1);
	sprintf(x, "%lli", res);
	return x;
}