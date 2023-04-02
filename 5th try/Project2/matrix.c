#include "matrix.h"

struct matrix* mat_rendiquadrata(const struct matrix* a) {

	struct matrix* res = malloc(sizeof(struct matrix));
	if (a->rows > a->cols) {
		res->rows = a->rows;
		res->cols = (a->rows - a->cols) + a->cols;
		res->data = malloc(res->cols * res->rows * sizeof(double));

		size_t r, c;
		for (r = 0; r < res->rows; r++) {
			for (c = 0; c < res->cols; c++) {
				if (r < a->rows)
					res->data[r * res->cols + c] = a->data[r * a->cols + c];
				else
					res->data[r * res->cols + c] = 0;
			}
		}
		return res;
	}
	if (a->cols > a->rows) {
		res->cols = a->cols;
		res->rows = (a->cols - a->rows) + a->rows;
		res->data = malloc(res->cols * res->rows * sizeof(double));

		size_t r, c;
		for (r = 0; r < res->rows; r++) {
			for (c = 0; c < res->cols; c++) {
				if (c < a->cols)
					res->data[r * res->cols + c] = a->data[r * a->cols + c];
				else
					res->data[r * res->cols + c] = 0;
			}
		}
		return res;
	}
	else
		return a;
}