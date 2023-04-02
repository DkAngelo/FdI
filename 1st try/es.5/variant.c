#define _CRT_SECURE_NO_WARNINGS

#include "variant.h"

void* read_variant(FILE* f, char* type){

	if (f == NULL)
		return NULL;

	void* x;
	size_t i;

	while (1) {
		int c = fgetc(f);
		if (c == EOF)
			break;

		int b = '`' - c;

		switch (b) {
		case(3):
			*type = "char";
			x = realloc(x, sizeof(char));
			i = fread(x, sizeof(char), 1, f);
			if (i != 1)
				return NULL;
			return x;
		case(19):
			*type = "short";
			x = realloc(x, sizeof(short));
			i = fread(x, sizeof(short), 1, f);
			if (i != 1)
				return NULL;
			return x;
		case(9):
			*type = "int";
			x = realloc(x, sizeof(int));
			i = fread(x, sizeof(int), 1, f);
			if (i != 1)
				return NULL;
			return x;
		case(12):
			*type = "long long";
			x = realloc(x, sizeof(long long));
			i = fread(x, sizeof(long long), 1, f);
			if (i != 1)
				return NULL;
			return x;
		case(6):
			*type = "float";
			x = realloc(x, sizeof(float));
			i = fread(x, sizeof(float), 1, f);
			if (i != 1)
				return NULL;
			return x;
		case(4):
			*type = "double";
			x = realloc(x, sizeof(double));
			i = fread(x, sizeof(double), 1, f);
			if (i != 1)
				return NULL;
			return x;
		}
		return NULL;
	}
}