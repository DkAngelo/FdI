#include "matrix.h"

struct matrix* mat_reset_cross(const struct matrix* m, size_t ir, size_t ic) {

	if (m == NULL || ir >= m->rows || ic >= m -> cols)
		return NULL;

	struct matrix* res = malloc(sizeof(struct matrix));
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = malloc(res->rows * res->cols * sizeof(double));

	size_t r, c;
	for (r = 0; r < res->rows; r++){
		for (c = 0; c < res->cols; c++) {
			if (r == ir) {
				if (c == ic) {
					res->data[r * res->cols + c] = m->data[r * m->cols + c];
					continue;
				}
				else {
					res->data[r * res->cols + c] = 0;
					continue;
				}
			}
			else if (c == ic) {
				res->data[r * res->cols + c] = 0;
				continue;
			}
			else {
				res->data[r * res->cols + c] = m->data[r * m->cols + c];
				continue;
			}
		}
	}
	return res;
}