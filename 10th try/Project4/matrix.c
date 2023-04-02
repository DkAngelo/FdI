#include "matrix.h"

struct matrix* mat_mul(const struct matrix* m1, const struct matrix* m2) {

	if (m1 == NULL || m2 == NULL || m1->cols != m2->rows)
		return NULL;

	struct matrix* res = malloc(sizeof(struct matrix));
	res->rows = m1->rows;
	res->cols = m2->cols;
	res->data = malloc(res->cols * res->rows * sizeof(double));

	double x;
	size_t r, c, k = 0;
	for (r = 0; r < res->rows; r++) {
		for (c = 0, x = 0, k = 0; c < res->cols; c++) {
			x += m1->data[r * m1->rows + k] * m2->data[k * m2->cols + r];
			k++;
		}
		res->data[r * res->cols + c] = x;
	}
	return res;
}