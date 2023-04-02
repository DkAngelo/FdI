#define _CRT_SECURE_NO_WARNINGS

#include "images.h"

struct image* read_images(const char* filename, size_t* n) {

	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return NULL;

	size_t i = 0;
	while (1) {
		int c = fgetc(f);
		if (c == '\n')
			i++;
		if (c == EOF)
			break;
	}
	if (i == 0)
		return NULL;
	*n = i;
	rewind(f);
	struct image* res = malloc(*n * sizeof(struct image));
	size_t j;
	for (i = 0; i < *n; i++) {
		for (j = 0; ; j++) {
			int c = fgetc(f);
			if (c == '\n') {
				j--;
				continue;
			}
			if (c == ':') {
				res[i].name[j] = '\0';
				break;
			}
			res[i].name[j] = c;
		}
		fscanf(f, "%li:%li", &res[i].height, &res[i].width);
	}
	fclose(f);
	return res;
}