#define _CRT_SECURE_NO_WARNINGS

#include "map.h"

struct connections* load_connections(const char* filename) {
	
	FILE* f = fopen(filename, "r");

	if (f == NULL)
		return NULL;

	int n;
	int ris = fscanf(f, "%i", &n);
	if (ris != 1)
		return NULL;
	
	struct connections* x = malloc(sizeof(struct connections));
	x->n = n;
	x->data = calloc(n * n, sizeof(bool));

	for (size_t i = 0; i < n; ++i) {
		while (true) {
			int num;
			if (fscanf(f, "%i", &num) != 1)
				break;
			--num;
			x->data[num * n + i] = true;
			x->data[i * n + num] = true;
		}
		if (fgetc(f) != '.') {
			free(x->data);
			free(x);
			x = NULL;
			break;
		}
	}
	
	fclose(f);
	return x;
}