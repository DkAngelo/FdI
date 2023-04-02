#define _CRT_SECURE_NO_WARNINGS

#include "demography.h"

struct city* read_cities(const char* filename, uint32_t* n) {

	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return NULL;

	uint32_t res = 0;
	size_t i = 0;
	uint32_t c;
	while (1) {
		c = fgetc(f);
		if (i > 3) {
			fseek(f, -1, SEEK_CUR);
			break;
		}
		c <<= 8 * i;
		res += c;
		i++;
	}
	if (res == 0)
		return NULL;
	*n = res;
	struct city* cities = malloc(*n * sizeof(struct city));
	
	size_t j;
	for (i = 0; i < res; i++) {
		cities[i].name = calloc(255 * sizeof(char), 1);
		char a;
		for (j = 0; ; j++) {
			a = fgetc(f);
			if (a == 0)
				break;
			if (a == EOF)
				break;
			cities[i].name[j] =a;
		}
		if (a == EOF) {
			free(cities->name);
			free(cities);
			return NULL;
		}
		cities[i].population = 0;
		for (j = 0, c = 0; j < 4; j++) {
			c = fgetc(f);
			if (c == EOF)
				break;
			cities[i].population += (c <<= 8 * j);
		}
		if (c == EOF) {
			free(cities->name);
			free(cities);
			return NULL;
		}
	}
	return cities;
}