#include "vettori.h"

struct vettore* mergeVettori(const struct vettore* a, const struct vettore* b) {

	struct vettore* merge = malloc(sizeof(struct vettore));

	merge->n = a->n + b->n;
	if (merge->n == 0) {
		free(merge);
		return 0;
	}

	merge->data = malloc(merge->n * sizeof(double));

	size_t i;
	for (i = 0; i < a->n; i++) {
		merge->data[i] = a->data[i];
	}
	size_t j;
	for (i = a->n, j = 0; j < b->n; i++, j++) {
		merge->data[i] = b->data[j];
	}

	return merge;
}