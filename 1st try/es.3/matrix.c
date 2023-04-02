#include "matrix.h"

struct vector* mat_vectorize(const struct matrix* m, enum vectorize_by dir) {

	if (m == NULL)
		return NULL;
	if (dir == BY_COLUMN || dir == BY_ROW) {
		struct vector* a = malloc(sizeof(struct vector));
		a->n = m->rows * m->cols;

		a->data = malloc(a->n * sizeof(double));

		size_t i = 0;

		if (dir == BY_ROW) {
			for (size_t r = 0; r < m->rows; r++) {
				for (size_t c = 0; c < m->cols; c++) {
					a->data[i] = m->data[r * m->cols + c];
					i++;
				}
			}
		}

		if (dir == BY_COLUMN) {
			for (size_t c = 0; c < m->cols; c++) {
				for (size_t r = 0; r < m->rows; r++) {
					a->data[i] = m->data[r * m->cols + c];
					i++;
				}
			}
		}

		return a;
	}
	return NULL;
}