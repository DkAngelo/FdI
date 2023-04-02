#include "matrix.h"

struct matrix* mat_normalize_rows(const struct matrix* m) {

	if (m == NULL || m->data == NULL)
		return NULL;
	
	struct matrix* res = malloc(sizeof(struct matrix));
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = malloc(res->rows * res->cols * sizeof(double));

	double x;
	size_t r, c;
	for (r = 0; r < m->rows; r++) {
		for (c = 0, x = 0; c < m->cols; c++) {
			x += m->data[r * m->cols + c] * m->data[r * m->cols + c];
		}
		x = sqrt(x);
		if (x != 0) {
			for (c = 0; c < m->cols; c++) {
				res->data[r * res->cols + c] = m->data[r * m->cols + c] / x;
			}
		}
		else {
			for (c = 0; c < m->cols; c++) {
				res->data[r * res->cols + c] = m->data[r * m->cols + c];
			}
		}
	}
	return res;
}