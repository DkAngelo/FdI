#include "matrix.h"

struct matrix* mat_delete_col(const struct matrix* m, size_t i) {

	if (m == NULL || i >= m->cols || m->cols == 1)
		return NULL;

	struct matrix* res = malloc(sizeof(struct matrix));
	res->cols = m->cols - 1;
	res->rows = m->rows;
	res->data = malloc(res->cols * res->rows * sizeof(double));

	size_t r, c;
	for (r = 0; r < m->rows; r++) {
		for (c = 0; c < m->cols; c++) {
			if (c < i)
				res->data[r * res->cols + c] = m->data[r * m->cols + c];
			else if (c == i)
				continue;
			else
				res->data[r * res->cols + c-1] = m->data[r * m->cols + c];
		}
	}
	return res;
}