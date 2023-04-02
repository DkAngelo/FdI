#include "matrix.h"

bool scalar_mult(struct matrix* dst, const struct matrix* src, double k, bool accumulate) {

	if (dst == NULL || src == NULL)
		return false;
	if (dst->rows * dst->cols != src->rows * src->cols)
		return false;

	size_t r, c;
	if (accumulate == false) {
		for (r = 0; r < src->rows; r++) {
			for (c = 0; c < src->cols; c++) {
				dst->data[r * dst->cols + c] = src->data[r * src->cols + c] * k;
			}
		}
		return true;
	}
	else if (accumulate == true) {
		for (r = 0; r < src->rows; r++) {
			for (c = 0; c < src->cols; c++) {
				dst->data[r * dst->cols + c] += src->data[r * src->cols + c] * k;
			}
		}
		return true;
	}
	else
		return false;
}