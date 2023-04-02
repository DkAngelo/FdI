#include "matrix.h"

struct bmatrix* mat_boolean(const struct matrix* m, double rhs, enum comparisons cmp) {

	if (m == NULL)
		return NULL;

	struct bmatrix* ris = malloc(sizeof(struct bmatrix));
	ris->rows = m -> rows;
	ris->cols = m->cols;
	ris->data = malloc(m->rows * m->cols * sizeof(bool));

	size_t r, c;
	if (cmp == LT) {
		for (r = 0; r < m->rows; r++) {
			for (c = 0; c < m->cols; c++) {
				if (m->data[r * m->cols + c] < rhs)
					ris->data[r * m->cols + c] = true;
				else
					ris->data[r * m->cols + c] = false;
			}
		}
	}
	else if (cmp == LE) {
		for (r = 0; r < m->rows; r++) {
			for (c = 0; c < m->cols; c++) {
				if (m->data[r * m->cols + c] <= rhs)
					ris->data[r * m->cols + c] = true;
				else
					ris->data[r * m->cols + c] = false;
			}
		}
	}
	else if (cmp == EQ) {
		for (r = 0; r < m->rows; r++) {
			for (c = 0; c < m->cols; c++) {
				if (m->data[r * m->cols + c] == rhs)
					ris->data[r * m->cols + c] = true;
				else
					ris->data[r * m->cols + c] = false;
			}
		}
	}
	else if (cmp == NE) {
		for (r = 0; r < m->rows; r++) {
			for (c = 0; c < m->cols; c++) {
				if (m->data[r * m->cols + c] != rhs)
					ris->data[r * m->cols + c] = true;
				else
					ris->data[r * m->cols + c] = false;
			}
		}
	}
	else if (cmp == GE) {
		for (r = 0; r < m->rows; r++) {
			for (c = 0; c < m->cols; c++) {
				if (m->data[r * m->cols + c] >= rhs)
					ris->data[r * m->cols + c] = true;
				else
					ris->data[r * m->cols + c] = false;
			}
		}
	}
	else if (cmp == GT) {
		for (r = 0; r < m->rows; r++) {
			for (c = 0; c < m->cols; c++) {
				if (m->data[r * m->cols + c] > rhs)
					ris->data[r * m->cols + c] = true;
				else
					ris->data[r * m->cols + c] = false;
			}
		}
	}
	return ris;
}