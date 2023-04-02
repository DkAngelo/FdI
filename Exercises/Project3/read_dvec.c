#define _CRT_SECURE_NO_WARNINGS

#include "read_dvec.h"

struct dvec* read_dvec_comp(const char* filename) {

	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return NULL;

	struct dvec* res = malloc(sizeof(struct dvec));
	res->n = 0;
	while (1) {
		int c = fgetc(f);
		if (c == EOF)
			break;
		res->n += 1;
	}

	if (res->n == 0) {
		res->d = NULL;
		return res;
	}

	res->n /= 2;
	res->d = malloc(res->n * sizeof(double));
	rewind(f);

	size_t i, j;
	short a = 0;
	double exp = exp2(14);
	for (i = 0, j = 0; i < res->n; i++) {
		short c = fgetc(f);
		if (i % 2 == 0) {
			a += c;
		}
		else {
			c <<= 8;
			a += c;
			res->d[j] = a / exp;
			a = 0;
			j++;
		}
	}
	return res;
}