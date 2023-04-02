#include "matrix.h"

struct matrix* matrix_flip_v(const struct matrix* m) {

	if (m == NULL || m->data == NULL) {
		return NULL;
	}


	struct matrix* ris = malloc(sizeof(struct matrix));
	ris->rows = m->rows;
	ris->cols = m->cols;
	ris->data = malloc(m->cols * m->rows * sizeof(double));

	size_t a = m->rows - 1;

	for (size_t r = 0; r < ris->rows; r++) {

		for (size_t c = 0; c < ris->cols; c++) {
			ris->data[r * ris->cols + c] = m->data[a * m->cols + c];
		}
		a--;
	}

	return ris;
}